#include "PocketCube.h"

void TRANS_COLOR(int a[]) {
    if (cube.a[53] == 1) {
        printf("U\n");
        Aim_Cube.step.push('U');
        move_U();
    }
    if (cube.a[35] == 1) {
        printf("U U\n");
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
    }
    if (cube.a[38] == 1) {
        printf("u\n");
        Aim_Cube.step.push('u');
        move_u();
    }
    //将魔方上下翻转回到初始状态
    Aim_Cube.step.push('x');
    move_x();
    Aim_Cube.step.push('x');
    move_x();
    printf("x x\n");
}

//寻找魔方的解法
void FIND_RECOVER_PATH()
{
    //校正魔方朝向
    CORRECT_Y(cube.a);

    CORRECT_XZ(cube.a);
    //还原底面十字
    SOLVE_WHITE_ORANGE_RIDGE(cube.a);

    SOLVE_WHITE_GREEN_RIDGE(cube.a);

    SOLVE_WHITE_RED_RIDGE(cube.a);

    SOLVE_WHITE_BLUE_RIDGE(cube.a);
    //还原底面角块
    SOLVE_ORANGE_GREEN_CORNOR(cube.a);

    SOLVE_GREEN_RED_CORNOR(cube.a);

    SOLVE_RED_BLUE_CORNOR(cube.a);

    SOLVE_BLUE_ORANDE_CORNOR(cube.a);
    //还原中间层棱块
    SOLVE_ORANGE_GREEN_RIDGE(cube.a);

    SOLVE_GREEN_RED_RIDGE(cube.a);

    SOLVE_RED_BLUE_RIDGE(cube.a);

    SOLVE_BLUE_ORANGE_RIDGE(cube.a);
    //Orientation of Last Layer
    SOLVE_ORIENT(cube.a);
    //Permutation of Last Layer
    SOLVE_PERMUT(cube.a);
    //调整最后一层颜色
    TRANS_COLOR(cube.a);
}
//实现自动复原效果
void AUTOMATIC_RECOVERY(int idx)
{
    if (idx <= stop)
    {
        switch (Path_Record[idx])
        {
        case 'R':
            glutTimerFunc(speed, turn_fR, 1);
            break;
        case 'r':
            glutTimerFunc(speed, turn_fr, 1);
            break;
        case 'F':
            glutTimerFunc(speed, turn_fF, 1);
            break;
        case 'f':
            glutTimerFunc(speed, turn_ff, 1);
            break;
        case 'U':
            glutTimerFunc(speed, turn_fU, 1);
            break;
        case 'u':
            glutTimerFunc(speed, turn_fu, 1);
            break;
        case 'D':
            glutTimerFunc(speed, turn_fD, 1);
            break;
        case 'd':
            glutTimerFunc(speed, turn_fd, 1);
            break;
        case 'L':
            glutTimerFunc(speed, turn_fL, 1);
            break;
        case 'l':
            glutTimerFunc(speed, turn_fl, 1);
            break;
        case 'B':
            glutTimerFunc(speed, turn_fB, 1);
            break;
        case 'b':
            glutTimerFunc(speed, turn_fb, 1);
            break;
        case 'X':
            glutTimerFunc(speed, turn_allX, 1);
            break;
        case 'x':
            glutTimerFunc(speed, turn_allx, 1);
            break;
        case 'Y':
            glutTimerFunc(speed, turn_allY, 1);
            break;
        case 'y':
            glutTimerFunc(speed, turn_ally, 1);
            break;
        case 'Z':
            glutTimerFunc(speed, turn_allZ, 1);
            break;
        case 'z':
            glutTimerFunc(speed, turn_allz, 1);
            break;
        }
    }
    else//复原完成时
    {
        Flag = 0;
        memset(Path_Record, 0, sizeof Path_Record);
        CHANGE = 1;
        R = 0.7, G = 1, B = 0.1;
        init();
        glutPostRedisplay();


        Sleep(200);
        if (CHECK_ALL(cube))
            Draw_TEXT(600, 450, 300, 30, "Solved");
        else
            Draw_TEXT(600, 450, 300, 30, "Solve failed");
    }
}

/******************************魔方的自动打乱模块******************************/
