#include "PocketCube.h"

void SOLVE_ORANGE_GREEN_RIDGE(int a[]) {

    //棱块位于底层
    if (cube.a[44] == 4 && cube.a[22] == 1) {
        printf("F_OG1 D F d f d l D L\n");

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();

    }
    else if (cube.a[17] == 4 && cube.a[20] == 1) {
        printf("F_OG2 D D F d f d l D L\n");

        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
    }
    else if (cube.a[47] == 4 && cube.a[24] == 1) {
        printf("F_OG3 D D D F d f d l D L\n");

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
    }
    else if (cube.a[29] == 4 && cube.a[26] == 1) {
        printf("F_OG4 d D F d f d l D L\n");

        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
    }
    else if (cube.a[17] == 1 && cube.a[20] == 4) {
        printf("F_OG5 d l D L D F d f\n");

        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();


    }
    else if (cube.a[47] == 1 && cube.a[24] == 4) {
        printf("F_OG6 D d l D L D F d f\n");

        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();

    }
    else if (cube.a[29] == 1 && cube.a[26] == 4) {
        printf("F_OG7 D D d l D L D F d f\n");

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();

    }
    else if (cube.a[44] == 1 && cube.a[22] == 4) {
        printf("F_OG8 d d l D L D F d f\n");

        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();

    }
    //棱块位于中间层
    else if (cube.a[40] == 1 && cube.a[13] == 4) {
        printf("F_OG9 D F d f d l D L d F d f d l D L\n");

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
    }
    else if (cube.a[15] == 1 && cube.a[49] == 4) {
        printf("F_OG10 Y D F d f d l D L y D d F d f d l D L\n");

        Aim_Cube.step.push('Y');
        move_Y();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('y');
        move_y();

        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
    }
    else if (cube.a[51] == 1 && cube.a[33] == 4) {
        printf("F_OG11 Y Y D F d f d l D L y y D D d F d f d l D L\n");

        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('Y');
        move_Y();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('y');
        move_y();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
    }
    else if (cube.a[31] == 1 && cube.a[42] == 4) {
        printf("F_OG12 y D F d f d l D L Y d d F d f d l D L\n");

        Aim_Cube.step.push('y');
        move_y();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('Y');
        move_Y();

        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
    }
    else if (cube.a[15] == 4 && cube.a[49] == 1) {
        printf("F_OG13 Y D F d f d l D L y D l D L D F d f\n");

        Aim_Cube.step.push('Y');
        move_Y();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('y');
        move_y();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
    }
    else if (cube.a[51] == 4 && cube.a[33] == 1) {
        printf("F_OG14 Y Y D F d f d l D L y y D D l D L D F d f\n");

        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('Y');
        move_Y();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('y');
        move_y();

        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
    }
    else if (cube.a[31] == 4 && cube.a[42] == 1) {
        printf("F_OG15 y D F d f d l D L Y D D D l D L D F d f\n");

        Aim_Cube.step.push('y');
        move_y();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('Y');
        move_Y();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
    }
}
//绿红棱块复原
void SOLVE_GREEN_RED_RIDGE(int a[]) {
    //棱块位于底层
    if (cube.a[17] == 1 && cube.a[20] == 2) {
        printf("F_GR1 Y D F d f d l D L y\n");

        Aim_Cube.step.push('Y');
        move_Y();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('y');
        move_y();
    }
    else if (cube.a[47] == 1 && cube.a[24] == 2) {
        printf("F_GR2 Y D D F d f d l D L y\n");

        Aim_Cube.step.push('Y');
        move_Y();

        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('y');
        move_y();
    }
    else if (cube.a[29] == 1 && cube.a[26] == 2) {
        printf("F_GR3 Y D D D F d f d l D L y\n");

        Aim_Cube.step.push('Y');
        move_Y();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('y');
        move_y();
    }
    else if (cube.a[44] == 1 && cube.a[22] == 2) {
        printf("F_GR4 Y d D F d f d l D L y\n");

        Aim_Cube.step.push('Y');
        move_Y();

        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('y');
        move_y();
    }
    else if (cube.a[47] == 2 && cube.a[24] == 1) {
        printf("F_GR5 Y d l D L D F d f y\n");

        Aim_Cube.step.push('Y');
        move_Y();

        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('y');
        move_y();
    }
    else if (cube.a[29] == 2 && cube.a[26] == 1) {
        printf("F_GR6 Y D d l D L D F d f y\n");

        Aim_Cube.step.push('Y');
        move_Y();

        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('y');
        move_y();
    }
    else if (cube.a[44] == 2 && cube.a[22] == 1) {
        printf("F_GR7 Y D D d l D L D F d f y\n");

        Aim_Cube.step.push('Y');
        move_Y();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('y');
        move_y();
    }
    else if (cube.a[17] == 2 && cube.a[20] == 1) {
        printf("F_GR8 Y d d l D L D F d f y\n");

        Aim_Cube.step.push('Y');
        move_Y();

        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('y');
        move_y();
    }
    //棱块位于中间层
    else if (cube.a[15] == 2 && cube.a[49] == 1) {
        printf("F_GR9 Y D F d f d l D L d F d f d l D L y\n");

        Aim_Cube.step.push('Y');
        move_Y();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('y');
        move_y();

    }
    else if (cube.a[51] == 2 && cube.a[33] == 1) {
        printf("F_GR10 Y Y D F d f d l D L y D d F d f d l D L y\n");

        Aim_Cube.step.push('Y');
        move_Y();

        Aim_Cube.step.push('Y');
        move_Y();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('y');
        move_y();

        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('y');
        move_y();
    }
    else if (cube.a[31] == 2 && cube.a[42] == 1) {
        printf("F_GR11 Y Y Y D F d f d l D L y y D D d F d f d l D L y\n");

        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('Y');
        move_Y();

        Aim_Cube.step.push('Y');
        move_Y();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('y');
        move_y();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('y');
        move_y();
    }
    else if (cube.a[51] == 1 && cube.a[33] == 2) {
        printf("F_GR12 Y Y D F d f d l D L y D l D L D F d f y\n");

        Aim_Cube.step.push('Y');
        move_Y();

        Aim_Cube.step.push('Y');
        move_Y();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('y');
        move_y();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('y');
        move_y();
    }
    else if (cube.a[31] == 1 && cube.a[42] == 2) {
        printf("F_GR13 Y Y Y D F d f d l D L y y D D l D L D F d f y\n");

        Aim_Cube.step.push('Y');
        move_Y();

        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('Y');
        move_Y();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('y');
        move_y();

        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('y');
        move_y();
    }

}
//红蓝棱块复原
void SOLVE_RED_BLUE_RIDGE(int a[]) {
    //棱块位于底层
    if (cube.a[47] == 2 && cube.a[24] == 3) {
        printf("F_RB1 Y Y D F d f d l D L y y\n");

        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('Y');
        move_Y();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('y');
        move_y();
    }
    else if (cube.a[29] == 2 && cube.a[26] == 3) {
        printf("F_RB2 Y Y D D F d f d l D L y y\n");

        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('Y');
        move_Y();

        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('y');
        move_y();
    }
    else if (cube.a[44] == 2 && cube.a[22] == 3) {
        printf("F_RB3 Y Y D D D F d f d l D L y y\n");

        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('Y');
        move_Y();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('y');
        move_y();
    }
    else if (cube.a[17] == 2 && cube.a[20] == 3) {
        printf("F_RB4 Y Y d D F d f d l D L y y\n");

        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('Y');
        move_Y();

        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('y');
        move_y();
    }
    else if (cube.a[29] == 3 && cube.a[26] == 2) {
        printf("F_RB5 Y Y d l D L D F d f y y\n");

        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('Y');
        move_Y();

        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('y');
        move_y();
    }
    else if (cube.a[44] == 3 && cube.a[22] == 2) {
        printf("F_RB6 Y Y D d l D L D F d f y y\n");

        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('Y');
        move_Y();

        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('y');
        move_y();
    }
    else if (cube.a[17] == 3 && cube.a[20] == 2) {
        printf("F_RB7 Y Y D D d l D L D F d f y y\n");

        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('Y');
        move_Y();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('y');
        move_y();
    }
    else if (cube.a[47] == 3 && cube.a[24] == 2) {
        printf("F_RB8 Y Y d d l D L D F d f y y\n");

        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('Y');
        move_Y();

        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('y');
        move_y();
    }
    //棱块位于中间层
    else if (cube.a[51] == 3 && cube.a[33] == 2) {
        printf("F_RB9 Y Y D F d f d l D L d F d f d l D L y y\n");

        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('Y');
        move_Y();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('y');
        move_y();

    }
    else if (cube.a[31] == 3 && cube.a[42] == 2) {
        printf("F_RB10 Y Y Y D F d f d l D L y D d F d f d l D L y y\n");

        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('Y');
        move_Y();

        Aim_Cube.step.push('Y');
        move_Y();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('y');
        move_y();

        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('y');
        move_y();
    }
    else if (cube.a[31] == 2 && cube.a[42] == 3) {
        printf("F_RB11 Y Y Y D F d f d l D L y D l D L D F d f y y\n");

        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('Y');
        move_Y();

        Aim_Cube.step.push('Y');
        move_Y();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('y');
        move_y();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('y');
        move_y();
    }

}
//蓝橙棱块复原
void SOLVE_BLUE_ORANGE_RIDGE(int a[]) {
    //棱块位于底层
    if (cube.a[29] == 3 && cube.a[26] == 4) {
        printf("F_BO1 y D F d f d l D L Y\n");

        Aim_Cube.step.push('y');
        move_y();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('Y');
        move_Y();
    }
    else if (cube.a[44] == 3 && cube.a[22] == 4) {
        printf("F_BO2 y D D F d f d l D L Y\n");

        Aim_Cube.step.push('y');
        move_y();

        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('Y');
        move_Y();

    }
    else if (cube.a[17] == 3 && cube.a[20] == 4) {
        printf("F_BO3 y D D D F d f d l D L Y\n");

        Aim_Cube.step.push('y');
        move_y();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('Y');
        move_Y();
    }
    else if (cube.a[47] == 3 && cube.a[24] == 4) {
        printf("F_BO4 y d D F d f d l D L Y\n");

        Aim_Cube.step.push('y');
        move_y();

        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('Y');
        move_Y();
    }
    else if (cube.a[44] == 4 && cube.a[22] == 3) {
        printf("F_BO5 y d l D L D F d f Y\n");

        Aim_Cube.step.push('y');
        move_y();

        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('Y');
        move_Y();
    }
    else if (cube.a[17] == 4 && cube.a[20] == 3) {
        printf("F_BO6 y D d l D L D F d f Y\n");

        Aim_Cube.step.push('y');
        move_y();

        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('Y');
        move_Y();
    }
    else if (cube.a[47] == 4 && cube.a[24] == 3) {
        printf("F_BO7 y D D d l D L D F d f Y\n");

        Aim_Cube.step.push('y');
        move_y();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('Y');
        move_Y();
    }
    else if (cube.a[29] == 4 && cube.a[26] == 3) {
        printf("F_BO8 y d d l D L D F d f Y\n");

        Aim_Cube.step.push('y');
        move_y();

        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('Y');
        move_Y();
    }
    //棱块位于中间层
    else if (cube.a[31] == 4 && cube.a[42] == 3) {
        printf("F_BO9 y D F d f d l D L d F d f d l D L Y\n");

        Aim_Cube.step.push('y');
        move_y();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('Y');
        move_Y();

    }
}
/********************第三层复原算法函数********************/
//Orientation of Last Layer
