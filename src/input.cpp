#include "PocketCube.h"

void performNextScrambleMove(int idx) {
    int numMoves = 25;//随机打乱步数
    if (idx < numMoves) {
        int move = rand() % 9; // 生成一个0到8之间的随机数，对应不同的魔方操作
        switch (move) {
        case 0:
            turn_fR(0);
            move_R();
            printf("R\n");
            break;
        case 1:
            turn_fF(0);
            move_F();
            printf("F\n");
            break;
        case 2:
            turn_fU(0);
            move_U();
            printf("U\n");
            break;
        case 3:
            turn_fD(0);
            move_D();
            printf("D\n");
            break;
        case 4:
            turn_fL(0);
            move_L();
            printf("L\n");
            break;
        case 5:
            turn_fB(0);
            move_B();
            printf("B\n");
            break;
        case 6:
            turn_allX(0);
            move_X();
            printf("X\n");
            break;
        case 7:
            turn_allY(0);
            move_Y();
            printf("Y\n");
            break;
        case 8:
            turn_allZ(0);
            move_Z();
            printf("Z\n");
            break;
        }
        glutTimerFunc(180, performNextScrambleMove, idx + 1);
    }
}

void Scramblecube() {
    printf("Start to scramble the cube!\n");
    srand(static_cast<unsigned int>(time(NULL))); // 初始化随机数生成器
    performNextScrambleMove(0); // 开始执行打乱操作
}

/******************************鼠标键盘回调控制模块******************************/

void onKeyboard(unsigned char key, int x, int y)
{
    if (key == VK_RETURN) {

        printf("start to solve the cube!\n");

        if (!CHECK_ALL(cube)) FIND_RECOVER_PATH();

        for (; !Aim_Cube.step.empty(); )
        {
            Path_Record[++idx] = Aim_Cube.step.front();
            Aim_Cube.step.pop();
        }
        cout << endl;
        cout << "The step of recovery: " << idx << endl;
        stop = idx;
        idx = 0;
        Flag = 1;
        AUTOMATIC_RECOVERY(++idx);
    }

    else if (key == '1')
        glutTimerFunc(1, move_left, 1);

    else if (key == '3')
        glutTimerFunc(1, move_right, 1);

    else if (key == '4')
        glutTimerFunc(1, move_up, 1);

    else if (key == '6')
        glutTimerFunc(1, move_down, 1);

    else if (key == '7')
        glutTimerFunc(1, move_front, 1);

    else if (key == '9')
        glutTimerFunc(1, move_behind, 1);

    else if (key == 'C') {
 /*       for (int i = 1; i <= 54; i++) {
            printf("a[%d]=%d\n", i, cube.a[i]);
        }*/
        printf("%f", inter(red[0][0][0]) - red[0][0][0]);
        
    }
    if (CHECK_CUBE(red, orange, blue, green, white, yellow)) {


    if (key == 'R') {
        printf("R\n");
        glutTimerFunc(1, turn_fR, 1);
        move_R();
    }

    else if (key == 'r') {
        printf("r\n");
        glutTimerFunc(1, turn_fr, 1);
        move_r();
    }

    else if (key == 'F')
    {
        printf("F\n");
        glutTimerFunc(1, turn_fF, 1);
        move_F();
    }

    else if (key == 'f')
    {
        printf("f\n");
        glutTimerFunc(1, turn_ff, 1);
        move_f();
    }

    else if (key == 'U')
    {
        printf("U\n");
        glutTimerFunc(1, turn_fU, 1);
        move_U();
    }

    else if (key == 'u')
    {
        printf("u\n");
        glutTimerFunc(1, turn_fu, 1);
        move_u();
    }

    else if (key == 'D')
    {
        printf("D\n");
        glutTimerFunc(1, turn_fD, 1);
        move_D();
    }

    else if (key == 'd')
    {
        printf("d\n");
        glutTimerFunc(1, turn_fd, 1);
        move_d();
    }

    else if (key == 'L')
    {
        printf("L\n");
        glutTimerFunc(1, turn_fL, 1);
        move_L();
    }

    else if (key == 'l')
    {
        printf("l\n");
        glutTimerFunc(1, turn_fl, 1);
        move_l();
    }

    else if (key == 'B')
    {
        printf("B\n");
        glutTimerFunc(1, turn_fB, 1);
        move_B();
    }

    else if (key == 'b')
    {
        printf("b\n");
        glutTimerFunc(1, turn_fb, 1);
        move_b();
    }

    else if (key == 'S')
        Scramblecube();

    else if (key == 'X') {
        printf("X\n");
        glutTimerFunc(1, turn_allX, 1);
        move_X();
    }

    else if (key == 'x') {
        printf("x\n");
        glutTimerFunc(1, turn_allx, 1);
        move_x();
    }

    else if (key == 'Y') {
        printf("Y\n");
        glutTimerFunc(1, turn_allY, 1);
        move_Y();
    }

    else if (key == 'y') {
        printf("y\n");
        glutTimerFunc(1, turn_ally, 1);
        move_y();
    }

    else if (key == 'Z') {
        printf("Z\n");
        glutTimerFunc(1, turn_allZ, 1);
        move_Z();
    }

    else if (key == 'z') {
        printf("z\n");
        glutTimerFunc(1, turn_allz, 1);
        move_z();
    }
    }
}

void Mos_Left_turn_look(int USELESS)
{
    if (LEFT_isDragging)
    {
        float temp_lookx = lookx;
        float temp_lookz = lookz;
        lookx = (temp_lookx * cos(rot)) - (temp_lookz * sin(rot));
        lookz = (temp_lookx * sin(rot)) + (temp_lookz * cos(rot));

        init();

        glutPostRedisplay();

        glutTimerFunc(10, Mos_Left_turn_look, 10);
    }
}

void Mos_Right_turn_look(int USELESS)
{
    if (RIGHT_isDragging)
    {
        float temp_lookx = lookx;
        float temp_lookz = lookz;
        lookx = (temp_lookx * cos(rot)) + (temp_lookz * sin(rot));
        lookz = (-1 * temp_lookx * sin(rot)) + (temp_lookz * cos(rot));

        init();

        glutPostRedisplay();

        glutTimerFunc(10, Mos_Right_turn_look, 10);
    }
}

void Mos_Middle_turn_look(int USELESS)
{
    if (MIDDLE_isDragging)
    {
        float temp_lookz = lookz;
        float temp_looky = looky;
        lookz = (temp_lookz * cos(rot)) + (temp_looky * sin(rot));
        looky = (-1 * temp_lookz * sin(rot)) + (temp_looky * cos(rot));

        init();

        glutPostRedisplay();

        glutTimerFunc(10, Mos_Middle_turn_look, 10);
    }
}

void GL_mouseCallback(int button, int state, int x, int y)
{
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        LEFT_isDragging = 1;
        glutTimerFunc(1, Mos_Left_turn_look, 1);

    }
    else if (button == GLUT_LEFT_BUTTON && state == GLUT_UP) {
        LEFT_isDragging = 0;
    }

    if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
        RIGHT_isDragging = 1;
        glutTimerFunc(1, Mos_Right_turn_look, 1);

    }
    else if (button == GLUT_RIGHT_BUTTON && state == GLUT_UP) {
        RIGHT_isDragging = 0;
    }

    if (button == GLUT_MIDDLE_BUTTON && state == GLUT_DOWN) {
        MIDDLE_isDragging = 1;
        glutTimerFunc(1, Mos_Middle_turn_look, 1);

    }
    else if (button == GLUT_MIDDLE_BUTTON && state == GLUT_UP) {
        MIDDLE_isDragging = 0;
    }

}

