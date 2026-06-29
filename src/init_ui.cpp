#include "PocketCube.h"

void init()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(50, 1, 1, 30000);


    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(lookx, looky, lookz, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);

}
//初始魔方各个方块的颜色
//6黄色  1绿色  2红色  3蓝色    4橙色   5白色
void inite_cube_color()
{
    for (int i = 1; i <= 9; i++)  cube.a[i] = 5;
    for (int i = 10; i <= 18; i++)  cube.a[i] = 1;
    for (int i = 19; i <= 27; i++)  cube.a[i] = 6;
    for (int i = 28; i <= 36; i++)  cube.a[i] = 3;
    for (int i = 37; i <= 45; i++)  cube.a[i] = 4;
    for (int i = 46; i <= 54; i++)  cube.a[i] = 2;
}
void Inite_EasyX()
{
    initgraph(1000, 600);
    setbkcolor(RGB(245, 247, 250));
    cleardevice();

    setfillcolor(RGB(235, 239, 246));
    solidrectangle(0, 0, 470, 600);
    loadimage(&Show_How_Use, "assets/Show_How_Use.jpg", 420, 520);
    putimage(25, 40, &Show_How_Use);

    setlinecolor(RGB(207, 214, 226));
    rectangle(24, 39, 445, 560);

    setfillcolor(RGB(255, 255, 255));
    solidrectangle(470, 0, 1000, 600);

    setbkmode(TRANSPARENT);

    settextstyle(34, 0, "Consolas");
    settextcolor(RGB(26, 32, 44));
    outtextxy(525, 48, "Pocket Cube");

    settextstyle(18, 0, "Consolas");
    settextcolor(RGB(95, 107, 130));
    outtextxy(528, 92, "OpenGL cube trainer and solver");

    setlinecolor(RGB(226, 232, 240));
    line(525, 126, 930, 126);

    settextstyle(20, 0, "Consolas");
    settextcolor(RGB(51, 65, 85));
    outtextxy(528, 152, "Controls");

    Draw_TEXT(525, 190, 405, 42, "U D F B R L / lower-case: rotate faces");
    Draw_TEXT(525, 242, 405, 42, "X Y Z / lower-case: rotate the whole cube");
    Draw_TEXT(525, 294, 405, 42, "Mouse left / middle / right: adjust camera");
    Draw_TEXT(525, 346, 405, 42, "S: scramble cube");
    Draw_TEXT(525, 398, 405, 42, "Enter: auto solve");

    settextstyle(16, 0, "Consolas");
    settextcolor(RGB(100, 116, 139));
    outtextxy(528, 548, "Version ");
    outtextxy(600, 548, Version_Information);
}

void Draw_TEXT(int x, int y, int w, int h, const char* text)
{
    setfillcolor(RGB(248, 250, 252));
    solidrectangle(x, y, x + w, y + h);
    setlinecolor(RGB(226, 232, 240));
    rectangle(x, y, x + w, y + h);

    setfillcolor(RGB(59, 130, 246));
    solidrectangle(x, y, x + 6, y + h);

    settextstyle(15, 0, "Consolas");
    settextcolor(RGB(30, 41, 59));
    int vSpace = (h - textheight(text)) / 2;
    outtextxy(x + 16, y + vSpace, text);
}

