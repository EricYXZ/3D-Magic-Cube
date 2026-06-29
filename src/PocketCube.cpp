#include "PocketCube.h"

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);

    Inite_EasyX();

    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowPosition(800, 0);
    glutInitWindowSize(900, 900);

    glutCreateWindow("Pocket Cube");

    inite_cube_color();//初始魔方颜色数组数据

    init();
    glewInit();

    loadTexture("assets/pic.bmp");
    glutDisplayFunc(myDisplay);//启动绘制

    glutKeyboardFunc(onKeyboard);//实时监测键盘的变化
    glutMouseFunc(GL_mouseCallback);

    glutMainLoop();
    return 0;
}
