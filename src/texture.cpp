#include "PocketCube.h"

#pragma pack(push, 1)
typedef struct {
    char type[2];        // 文件类型，必须是"BM"
    int size;            // 文件大小
    short reserved1;     // 保留，必须为0
    short reserved2;     // 保留，必须为0
    int offset;          // 像素数据的偏移量
} BMPHeader;

typedef struct {
    int headerSize;      // 头信息的大小
    int width;           // 图像宽度
    int height;          // 图像高度
    short planes;        // 颜色平面数，必须为1
    short bitsPerPixel;  // 每像素的位数
    int compression;     // 压缩方式
    int imageSize;       // 图像数据大小
    int xPixelsPerMeter; // 水平分辨率
    int yPixelsPerMeter; // 垂直分辨率
    int colorsUsed;      // 实际使用的颜色
    int importantColors; // 重要颜色数
} BMPInfoHeader;
#pragma pack(pop)
void loadTexture(const char* filename) {
    FILE* file;
    BMPHeader bmpHeader;
    BMPInfoHeader bmpInfoHeader;

    // 打开BMP文件
    file = fopen(filename, "rb");
    if (!file) {
        perror("Error opening file");
        return;
    }

    // 读取BMP文件头
    if (fread(&bmpHeader, sizeof(BMPHeader), 1, file) != 1) {
        perror("Error reading BMP header");
        fclose(file);
        return;
    }

    // 检查BMP文件头
    if (bmpHeader.type[0] != 'B' || bmpHeader.type[1] != 'M') {
        printf("Error: Not a valid BMP file\n");
        fclose(file);
        return;
    }

    // 读取BMP信息头
    if (fread(&bmpInfoHeader, sizeof(BMPInfoHeader), 1, file) != 1) {
        perror("Error reading BMP info header");
        fclose(file);
        return;
    }

    // 检查位深度是否为24位
    if (bmpInfoHeader.bitsPerPixel != 24) {
        printf("Error: Only 24-bit BMP files are supported\n");
        fclose(file);
        return;
    }

    // 提取图像信息
    int width = bmpInfoHeader.width;
    int height = bmpInfoHeader.height;
    int imageSize = bmpInfoHeader.imageSize;
    if (imageSize == 0) imageSize = width * height * 3; // 有些文件没有填写图像数据大小

    // 分配内存存储图像数据
    unsigned char* data = (unsigned char*)malloc(imageSize);
    if (!data) {
        perror("Error allocating memory");
        fclose(file);
        return;
    }

    // 移动文件指针到图像数据位置
    fseek(file, bmpHeader.offset, SEEK_SET);

    // 读取图像数据
    if (fread(data, 1, imageSize, file) != imageSize) {
        perror("Error reading image data");
        fclose(file);
        free(data);
        return;
    }

    // 关闭文件
    fclose(file);

    glPixelStorei(GL_UNPACK_ALIGNMENT, 1);


    // 生成纹理对象
    glGenTextures(1, &textureID);
    glBindTexture(GL_TEXTURE_2D, textureID);

    // 设置纹理参数
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    // 绑定图像数据到纹理对象
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_BGR, GL_UNSIGNED_BYTE, data);

    // 生成多级渐远纹理
    glGenerateMipmap(GL_TEXTURE_2D);

    // 释放图像数据
    free(data);
}

/******************************魔方变换模块******************************/

