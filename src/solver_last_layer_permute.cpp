#include "PocketCube.h"

void SOLVE_PERMUT(int a[]) {
    //4种基本情况
    //情况1
    if (cube.a[34] == cube.a[35] && cube.a[34] == cube.a[36] &&
        cube.a[54] == cube.a[52] && cube.a[54] == cube.a[11] &&
        cube.a[39] == cube.a[37] && cube.a[39] == cube.a[53] &&
        cube.a[10] == cube.a[38] && cube.a[10] == cube.a[12]) {
        printf("PLL_1F R u R U R U R u r u r r\n");

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();

    }
    if (cube.a[34] == cube.a[53] && cube.a[34] == cube.a[36] &&
        cube.a[54] == cube.a[52] && cube.a[54] == cube.a[11] &&
        cube.a[39] == cube.a[37] && cube.a[39] == cube.a[38] &&
        cube.a[10] == cube.a[35] && cube.a[10] == cube.a[12]) {
        printf("PLL_1R U R u R U R U R u r u r r\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();

    }
    if (cube.a[34] == cube.a[53] && cube.a[34] == cube.a[36] &&
        cube.a[54] == cube.a[52] && cube.a[54] == cube.a[38] &&
        cube.a[39] == cube.a[37] && cube.a[39] == cube.a[35] &&
        cube.a[10] == cube.a[11] && cube.a[10] == cube.a[12]) {
        printf("PLL_1B U U R u R U R U R u r u r r\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();

    }
    if (cube.a[34] == cube.a[11] && cube.a[34] == cube.a[36] &&
        cube.a[54] == cube.a[52] && cube.a[54] == cube.a[53] &&
        cube.a[39] == cube.a[37] && cube.a[39] == cube.a[35] &&
        cube.a[10] == cube.a[38] && cube.a[10] == cube.a[12]) {
        printf("PLL_1L u R u R U R U R u r u r r\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();

    }
    //情况2
    if (cube.a[34] == cube.a[35] && cube.a[34] == cube.a[36] &&
        cube.a[54] == cube.a[52] && cube.a[54] == cube.a[38] &&
        cube.a[39] == cube.a[37] && cube.a[39] == cube.a[11] &&
        cube.a[10] == cube.a[53] && cube.a[10] == cube.a[12]) {
        printf("PLL_2F R R U R U r u r u r U r\n");

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();

    }
    if (cube.a[34] == cube.a[11] && cube.a[34] == cube.a[36] &&
        cube.a[54] == cube.a[52] && cube.a[54] == cube.a[35] &&
        cube.a[39] == cube.a[37] && cube.a[39] == cube.a[38] &&
        cube.a[10] == cube.a[53] && cube.a[10] == cube.a[12]) {
        printf("PLL_2R U R R U R U r u r u r U r\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();

    }
    if (cube.a[34] == cube.a[38] && cube.a[34] == cube.a[36] &&
        cube.a[54] == cube.a[52] && cube.a[54] == cube.a[35] &&
        cube.a[39] == cube.a[37] && cube.a[39] == cube.a[53] &&
        cube.a[10] == cube.a[11] && cube.a[10] == cube.a[12]) {
        printf("PLL_2B U U R R U R U r u r u r U r\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();

    }
    if (cube.a[34] == cube.a[38] && cube.a[34] == cube.a[36] &&
        cube.a[54] == cube.a[52] && cube.a[54] == cube.a[53] &&
        cube.a[39] == cube.a[37] && cube.a[39] == cube.a[11] &&
        cube.a[10] == cube.a[35] && cube.a[10] == cube.a[12]) {
        printf("PLL_2L u R R U R U r u r u r U r\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();

    }
    //情况3
    if (cube.a[34] == cube.a[35] && cube.a[34] == cube.a[10] &&
        cube.a[54] == cube.a[52] && cube.a[54] == cube.a[11] &&
        cube.a[12] == cube.a[38] && cube.a[12] == cube.a[39] &&
        cube.a[37] == cube.a[36] && cube.a[37] == cube.a[53]) {
        printf("PLL_3F Z R R d d r u R d d r U r z\n");

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('z');
        move_z();

    }
    if (cube.a[34] == cube.a[36] && cube.a[34] == cube.a[53] &&
        cube.a[54] == cube.a[10] && cube.a[54] == cube.a[11] &&
        cube.a[12] == cube.a[39] && cube.a[12] == cube.a[35] &&
        cube.a[37] == cube.a[38] && cube.a[37] == cube.a[52]) {
        printf("PLL_3R U Z R R d d r u R d d r U r z\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('z');
        move_z();

    }
    if (cube.a[34] == cube.a[53] && cube.a[34] == cube.a[52] &&
        cube.a[54] == cube.a[38] && cube.a[54] == cube.a[10] &&
        cube.a[12] == cube.a[11] && cube.a[12] == cube.a[36] &&
        cube.a[37] == cube.a[35] && cube.a[37] == cube.a[39]) {
        printf("PLL_3B U U Z R R d d r u R d d r U r z\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('z');
        move_z();

    }
    if (cube.a[34] == cube.a[52] && cube.a[34] == cube.a[11] &&
        cube.a[54] == cube.a[39] && cube.a[54] == cube.a[53] &&
        cube.a[12] == cube.a[10] && cube.a[12] == cube.a[38] &&
        cube.a[37] == cube.a[35] && cube.a[37] == cube.a[36]) {
        printf("PLL_3L u Z R R d d r u R d d r U r z\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('z');
        move_z();

    }
    //情况4
    if (cube.a[34] == cube.a[35] && cube.a[34] == cube.a[52] &&
        cube.a[54] == cube.a[38] && cube.a[54] == cube.a[39] &&
        cube.a[12] == cube.a[10] && cube.a[12] == cube.a[53] &&
        cube.a[37] == cube.a[36] && cube.a[37] == cube.a[11]) {
        printf("PLL_4F Z R u R d d r U R d d r r z\n");

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('z');
        move_z();

    }
    if (cube.a[34] == cube.a[10] && cube.a[34] == cube.a[11] &&
        cube.a[54] == cube.a[35] && cube.a[54] == cube.a[52] &&
        cube.a[12] == cube.a[53] && cube.a[12] == cube.a[39] &&
        cube.a[37] == cube.a[36] && cube.a[37] == cube.a[38]) {
        printf("PLL_4R U Z R u R d d r U R d d r r z\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('z');
        move_z();

    }
    if (cube.a[34] == cube.a[36] && cube.a[34] == cube.a[38] &&
        cube.a[54] == cube.a[10] && cube.a[54] == cube.a[35] &&
        cube.a[12] == cube.a[11] && cube.a[12] == cube.a[39] &&
        cube.a[37] == cube.a[53] && cube.a[37] == cube.a[52]) {
        printf("PLL_4B U U Z R u R d d r U R d d r r z\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('z');
        move_z();

    }
    if (cube.a[34] == cube.a[38] && cube.a[34] == cube.a[52] &&
        cube.a[54] == cube.a[10] && cube.a[54] == cube.a[53] &&
        cube.a[12] == cube.a[35] && cube.a[12] == cube.a[36] &&
        cube.a[37] == cube.a[39] && cube.a[37] == cube.a[11]) {
        printf("PLL_4L u Z R u R d d r U R d d r r z\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('z');
        move_z();

    }
    //13种一般情况
    //情况5
    if (cube.a[34] == cube.a[11] && cube.a[34] == cube.a[36] &&
        cube.a[54] == cube.a[38] && cube.a[54] == cube.a[52] &&
        cube.a[12] == cube.a[10] && cube.a[12] == cube.a[35] &&
        cube.a[37] == cube.a[53] && cube.a[37] == cube.a[39]) {
        printf("PLL_5F z l r z l r U z l r z l r U U z l r z l r U z l r z l r\n");

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('r');
        move_r();


    }
    //情况6
    if (cube.a[34] == cube.a[53] && cube.a[34] == cube.a[36] &&
        cube.a[54] == cube.a[35] && cube.a[54] == cube.a[52] &&
        cube.a[12] == cube.a[10] && cube.a[12] == cube.a[38] &&
        cube.a[37] == cube.a[11] && cube.a[37] == cube.a[39]) {
        printf("PLL_6F R U r f f u L U l F F U R u u r\n");

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();

    }
    if (cube.a[34] == cube.a[38] && cube.a[34] == cube.a[36] &&
        cube.a[54] == cube.a[11] && cube.a[54] == cube.a[52] &&
        cube.a[12] == cube.a[10] && cube.a[12] == cube.a[53] &&
        cube.a[37] == cube.a[35] && cube.a[37] == cube.a[39]) {
        printf("PLL_6R U R U r f f u L U l F F U R u u r\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();

    }
    //情况7
    if (cube.a[34] == cube.a[38] && cube.a[34] == cube.a[10] &&
        cube.a[54] == cube.a[39] && cube.a[54] == cube.a[11] &&
        cube.a[12] == cube.a[53] && cube.a[12] == cube.a[36] &&
        cube.a[37] == cube.a[35] && cube.a[37] == cube.a[52]) {
        printf("PLL_7F Z R u r d R U r D R U r d R u r D z\n");

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('z');
        move_z();

    }
    if (cube.a[34] == cube.a[53] && cube.a[34] == cube.a[10] &&
        cube.a[54] == cube.a[39] && cube.a[54] == cube.a[35] &&
        cube.a[12] == cube.a[38] && cube.a[12] == cube.a[36] &&
        cube.a[37] == cube.a[11] && cube.a[37] == cube.a[52]) {
        printf("PLL_7R U Z R u r d R U r D R U r d R u r D z\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('z');
        move_z();

    }
    if (cube.a[34] == cube.a[38] && cube.a[34] == cube.a[10] &&
        cube.a[54] == cube.a[39] && cube.a[54] == cube.a[11] &&
        cube.a[12] == cube.a[53] && cube.a[12] == cube.a[36] &&
        cube.a[37] == cube.a[35] && cube.a[37] == cube.a[52]) {
        printf("PLL_7B U U Z R u r d R U r D R U r d R u r D z\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('z');
        move_z();

    }
    if (cube.a[34] == cube.a[53] && cube.a[34] == cube.a[10] &&
        cube.a[54] == cube.a[39] && cube.a[54] == cube.a[35] &&
        cube.a[12] == cube.a[38] && cube.a[12] == cube.a[36] &&
        cube.a[37] == cube.a[11] && cube.a[37] == cube.a[52]) {
        printf("PLL_7L u Z R u r d R U r D R U r d R u r D z\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('z');
        move_z();

    }
    //情况8
    if (cube.a[34] == cube.a[35] && cube.a[34] == cube.a[52] &&
        cube.a[54] == cube.a[10] && cube.a[54] == cube.a[11] &&
        cube.a[12] == cube.a[38] && cube.a[12] == cube.a[36] &&
        cube.a[37] == cube.a[39] && cube.a[37] == cube.a[53]) {
        printf("PLL_8F R U r u r f R R u r u R U r F\n");

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('F');
        move_F();

    }
    if (cube.a[34] == cube.a[53] && cube.a[34] == cube.a[52] &&
        cube.a[54] == cube.a[39] && cube.a[54] == cube.a[11] &&
        cube.a[12] == cube.a[35] && cube.a[12] == cube.a[10] &&
        cube.a[37] == cube.a[38] && cube.a[37] == cube.a[36]) {
        printf("PLL_8R U R U r u r f R R u r u R U r F\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('F');
        move_F();

    }
    if (cube.a[34] == cube.a[53] && cube.a[34] == cube.a[10] &&
        cube.a[54] == cube.a[52] && cube.a[54] == cube.a[38] &&
        cube.a[12] == cube.a[39] && cube.a[12] == cube.a[11] &&
        cube.a[37] == cube.a[35] && cube.a[37] == cube.a[36]) {
        printf("PLL_8B U U R U r u r f R R u r u R U r F\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('F');
        move_F();

    }
    if (cube.a[34] == cube.a[36] && cube.a[34] == cube.a[11] &&
        cube.a[54] == cube.a[10] && cube.a[54] == cube.a[53] &&
        cube.a[12] == cube.a[38] && cube.a[12] == cube.a[39] &&
        cube.a[37] == cube.a[52] && cube.a[37] == cube.a[35]) {
        printf("PLL_8L u R U r u r f R R u r u R U r F\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('F');
        move_F();

    }
    //情况9
    if (cube.a[34] == cube.a[52] && cube.a[34] == cube.a[38] &&
        cube.a[54] == cube.a[39] && cube.a[54] == cube.a[35] &&
        cube.a[12] == cube.a[11] && cube.a[12] == cube.a[10] &&
        cube.a[37] == cube.a[36] && cube.a[37] == cube.a[53]) {
        printf("PLL_9F r U R u r r F u f U R u Z R R u r U z\n");

        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();

    }
    if (cube.a[34] == cube.a[38] && cube.a[34] == cube.a[10] &&
        cube.a[54] == cube.a[53] && cube.a[54] == cube.a[52] &&
        cube.a[12] == cube.a[39] && cube.a[12] == cube.a[35] &&
        cube.a[37] == cube.a[11] && cube.a[37] == cube.a[36]) {
        printf("PLL_9R U r U R u r r F u f U R u Z R R u r U z\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();

    }
    if (cube.a[34] == cube.a[35] && cube.a[34] == cube.a[36] &&
        cube.a[54] == cube.a[38] && cube.a[54] == cube.a[10] &&
        cube.a[12] == cube.a[53] && cube.a[12] == cube.a[39] &&
        cube.a[37] == cube.a[52] && cube.a[37] == cube.a[11]) {
        printf("PLL_9B U U r U R u r r F u f U R u Z R R u r U z\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();

    }
    if (cube.a[34] == cube.a[52] && cube.a[34] == cube.a[11] &&
        cube.a[54] == cube.a[10] && cube.a[54] == cube.a[35] &&
        cube.a[12] == cube.a[53] && cube.a[12] == cube.a[36] &&
        cube.a[37] == cube.a[38] && cube.a[37] == cube.a[39]) {
        printf("PLL_9L u r U R u r r F u f U R u Z R R u r U z\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
    }
    //情况10
    if (cube.a[34] == cube.a[10] && cube.a[34] == cube.a[11] &&
        cube.a[54] == cube.a[39] && cube.a[54] == cube.a[35] &&
        cube.a[12] == cube.a[53] && cube.a[12] == cube.a[36] &&
        cube.a[37] == cube.a[52] && cube.a[37] == cube.a[38]) {
        printf("PLL_10F r U R u r X b u R U U r u R u r x B R\n");

        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('X');
        move_X();
        Aim_Cube.step.push('b');
        move_b();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('x');
        move_x();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('R');
        move_R();

    }
    if (cube.a[34] == cube.a[10] && cube.a[34] == cube.a[38] &&
        cube.a[54] == cube.a[39] && cube.a[54] == cube.a[35] &&
        cube.a[12] == cube.a[36] && cube.a[12] == cube.a[11] &&
        cube.a[37] == cube.a[52] && cube.a[37] == cube.a[53]) {
        printf("PLL_10R U r U R u r X b u R U U r u R u r x B R\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('X');
        move_X();
        Aim_Cube.step.push('b');
        move_b();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('x');
        move_x();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('R');
        move_R();

    }
    if (cube.a[34] == cube.a[38] && cube.a[34] == cube.a[10] &&
        cube.a[54] == cube.a[39] && cube.a[54] == cube.a[53] &&
        cube.a[12] == cube.a[35] && cube.a[12] == cube.a[36] &&
        cube.a[37] == cube.a[11] && cube.a[37] == cube.a[52]) {
        printf("PLL_10B U U r U R u r X b u R U U r u R u r x B R\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('X');
        move_X();
        Aim_Cube.step.push('b');
        move_b();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('x');
        move_x();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('R');
        move_R();

    }
    if (cube.a[34] == cube.a[35] && cube.a[34] == cube.a[10] &&
        cube.a[54] == cube.a[39] && cube.a[54] == cube.a[38] &&
        cube.a[12] == cube.a[53] && cube.a[12] == cube.a[36] &&
        cube.a[37] == cube.a[11] && cube.a[37] == cube.a[52]) {
        printf("PLL_10L u r U R u r X b u R U U r u R u r x B R\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('X');
        move_X();
        Aim_Cube.step.push('b');
        move_b();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('x');
        move_x();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('R');
        move_R();
    }
    //情况11
    if (cube.a[34] == cube.a[10] && cube.a[34] == cube.a[11] &&
        cube.a[54] == cube.a[39] && cube.a[54] == cube.a[53] &&
        cube.a[12] == cube.a[38] && cube.a[12] == cube.a[36] &&
        cube.a[37] == cube.a[52] && cube.a[37] == cube.a[35]) {
        printf("PLL_11F f R u r u R U r F R U r u r f R F\n");

        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('F');
        move_F();

    }
    if (cube.a[34] == cube.a[35] && cube.a[34] == cube.a[10] &&
        cube.a[54] == cube.a[39] && cube.a[54] == cube.a[11] &&
        cube.a[12] == cube.a[38] && cube.a[12] == cube.a[36] &&
        cube.a[37] == cube.a[52] && cube.a[37] == cube.a[53]) {
        printf("PLL_11R U f R u r u R U r F R U r u r f R F\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('F');
        move_F();

    }
    if (cube.a[34] == cube.a[53] && cube.a[34] == cube.a[10] &&
        cube.a[54] == cube.a[39] && cube.a[54] == cube.a[11] &&
        cube.a[12] == cube.a[35] && cube.a[12] == cube.a[36] &&
        cube.a[37] == cube.a[52] && cube.a[37] == cube.a[38]) {
        printf("PLL_11B U U f R u r u R U r F R U r u r f R F\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('F');
        move_F();

    }
    if (cube.a[34] == cube.a[53] && cube.a[34] == cube.a[10] &&
        cube.a[54] == cube.a[39] && cube.a[54] == cube.a[38] &&
        cube.a[12] == cube.a[11] && cube.a[12] == cube.a[36] &&
        cube.a[37] == cube.a[35] && cube.a[37] == cube.a[52]) {
        printf("PLL_11L u f R u r u R U r F R U r u r f R F\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('F');
        move_F();

    }
    //情况12
    if (cube.a[34] == cube.a[10] && cube.a[34] == cube.a[11] &&
        cube.a[54] == cube.a[38] && cube.a[54] == cube.a[39] &&
        cube.a[12] == cube.a[35] && cube.a[12] == cube.a[36] &&
        cube.a[37] == cube.a[52] && cube.a[37] == cube.a[53]) {
        printf("PLL_12F U r U L u u R u z l r Z U L u u R u l\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();

    }
    //情况13
    if (cube.a[34] == cube.a[10] && cube.a[34] == cube.a[35] &&
        cube.a[54] == cube.a[53] && cube.a[54] == cube.a[39] &&
        cube.a[12] == cube.a[11] && cube.a[12] == cube.a[36] &&
        cube.a[37] == cube.a[52] && cube.a[37] == cube.a[38]) {
        printf("PLL_13F u l u R U U L U z l r Z u R U U L U r\n");

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();

    }
    //情况14
    if (cube.a[34] == cube.a[35] && cube.a[34] == cube.a[52] &&
        cube.a[54] == cube.a[53] && cube.a[54] == cube.a[10] &&
        cube.a[12] == cube.a[11] && cube.a[12] == cube.a[36] &&
        cube.a[37] == cube.a[38] && cube.a[37] == cube.a[39]) {
        printf("PLL_14F R U r F R U r u r f R R u r u\n");

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();

    }
    if (cube.a[34] == cube.a[35] && cube.a[34] == cube.a[52] &&
        cube.a[54] == cube.a[53] && cube.a[54] == cube.a[39] &&
        cube.a[12] == cube.a[11] && cube.a[12] == cube.a[10] &&
        cube.a[37] == cube.a[38] && cube.a[37] == cube.a[36]) {
        printf("PLL_14R U R U r F R U r u r f R R u r u\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();

    }
    if (cube.a[34] == cube.a[35] && cube.a[34] == cube.a[10] &&
        cube.a[54] == cube.a[53] && cube.a[54] == cube.a[52] &&
        cube.a[12] == cube.a[11] && cube.a[12] == cube.a[39] &&
        cube.a[37] == cube.a[38] && cube.a[37] == cube.a[36]) {
        printf("PLL_14B U U R U r F R U r u r f R R u r u\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();

    }
    if (cube.a[34] == cube.a[35] && cube.a[34] == cube.a[36] &&
        cube.a[54] == cube.a[53] && cube.a[54] == cube.a[10] &&
        cube.a[12] == cube.a[11] && cube.a[12] == cube.a[39] &&
        cube.a[37] == cube.a[38] && cube.a[37] == cube.a[52]) {
        printf("PLL_14L u R U r F R U r u r f R R u r u\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();

    }
    //情况15
    if (cube.a[34] == cube.a[10] && cube.a[34] == cube.a[11] &&
        cube.a[54] == cube.a[53] && cube.a[54] == cube.a[52] &&
        cube.a[12] == cube.a[38] && cube.a[12] == cube.a[39] &&
        cube.a[37] == cube.a[35] && cube.a[37] == cube.a[36]) {
        printf("PLL_15F L u l f L u l U l F L L U l U \n");

        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();

    }
    if (cube.a[34] == cube.a[35] && cube.a[34] == cube.a[36] &&
        cube.a[54] == cube.a[10] && cube.a[54] == cube.a[11] &&
        cube.a[12] == cube.a[38] && cube.a[12] == cube.a[39] &&
        cube.a[37] == cube.a[52] && cube.a[37] == cube.a[53]) {
        printf("PLL_15R U L u l f L u l U l F L L U l U \n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();

    }
    if (cube.a[34] == cube.a[52] && cube.a[34] == cube.a[53] &&
        cube.a[54] == cube.a[10] && cube.a[54] == cube.a[11] &&
        cube.a[12] == cube.a[35] && cube.a[12] == cube.a[36] &&
        cube.a[37] == cube.a[38] && cube.a[37] == cube.a[39]) {
        printf("PLL_15B U U L u l f L u l U l F L L U l U \n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();

    }
    if (cube.a[34] == cube.a[52] && cube.a[34] == cube.a[53] &&
        cube.a[54] == cube.a[38] && cube.a[54] == cube.a[39] &&
        cube.a[12] == cube.a[11] && cube.a[12] == cube.a[10] &&
        cube.a[37] == cube.a[35] && cube.a[37] == cube.a[36]) {
        printf("PLL_15L u L u l f L u l U l F L L U l U \n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();

    }
    //情况16
    if (cube.a[34] == cube.a[38] && cube.a[34] == cube.a[52] &&
        cube.a[54] == cube.a[10] && cube.a[54] == cube.a[11] &&
        cube.a[12] == cube.a[36] && cube.a[12] == cube.a[53] &&
        cube.a[37] == cube.a[35] && cube.a[37] == cube.a[39]) {
        printf("PLL_16F R U r F R u u r U U r f R U R u u r u\n");

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();

    }
    if (cube.a[34] == cube.a[53] && cube.a[34] == cube.a[52] &&
        cube.a[54] == cube.a[39] && cube.a[54] == cube.a[35] &&
        cube.a[12] == cube.a[38] && cube.a[12] == cube.a[10] &&
        cube.a[37] == cube.a[36] && cube.a[37] == cube.a[11]) {
        printf("PLL_16R U R U r F R u u r U U r f R U R u u r u\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();

    }
    if (cube.a[34] == cube.a[38] && cube.a[34] == cube.a[10] &&
        cube.a[54] == cube.a[11] && cube.a[54] == cube.a[52] &&
        cube.a[12] == cube.a[53] && cube.a[12] == cube.a[39] &&
        cube.a[37] == cube.a[36] && cube.a[37] == cube.a[35]) {
        printf("PLL_16B U U R U r F R u u r U U r f R U R u u r u\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();

    }
    if (cube.a[34] == cube.a[36] && cube.a[34] == cube.a[53] &&
        cube.a[54] == cube.a[10] && cube.a[54] == cube.a[35] &&
        cube.a[12] == cube.a[38] && cube.a[12] == cube.a[39] &&
        cube.a[37] == cube.a[11] && cube.a[37] == cube.a[52]) {
        printf("PLL_16L u R U r F R u u r U U r f R U R u u r u\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();

    }
    //情况17
    if (cube.a[34] == cube.a[38] && cube.a[34] == cube.a[10] &&
        cube.a[54] == cube.a[35] && cube.a[54] == cube.a[52] &&
        cube.a[12] == cube.a[11] && cube.a[12] == cube.a[39] &&
        cube.a[37] == cube.a[53] && cube.a[37] == cube.a[36]) {
        printf("PLL_17F L u l f L U U l u u l F L u L U U l U\n");

        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();

    }
    if (cube.a[34] == cube.a[36] && cube.a[34] == cube.a[38] &&
        cube.a[54] == cube.a[10] && cube.a[54] == cube.a[53] &&
        cube.a[12] == cube.a[39] && cube.a[12] == cube.a[35] &&
        cube.a[37] == cube.a[11] && cube.a[37] == cube.a[52]) {
        printf("PLL_17R U L u l f L U U l u u l F L u L U U l U\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();

    }
    if (cube.a[34] == cube.a[35] && cube.a[34] == cube.a[52] &&
        cube.a[54] == cube.a[10] && cube.a[54] == cube.a[38] &&
        cube.a[12] == cube.a[36] && cube.a[12] == cube.a[53] &&
        cube.a[37] == cube.a[11] && cube.a[37] == cube.a[39]) {
        printf("PLL_17B U U L u l f L U U l u u l F L u L U U l U\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();

    }
    if (cube.a[34] == cube.a[11] && cube.a[34] == cube.a[52] &&
        cube.a[54] == cube.a[39] && cube.a[54] == cube.a[35] &&
        cube.a[12] == cube.a[10] && cube.a[12] == cube.a[53] &&
        cube.a[37] == cube.a[38] && cube.a[37] == cube.a[36]) {
        printf("PLL_17L u L u l f L U U l u u l F L u L U U l U\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();

    }
    //4种复杂情况
    //情况18
    if (cube.a[34] == cube.a[52] && cube.a[34] == cube.a[11] &&
        cube.a[54] == cube.a[38] && cube.a[54] == cube.a[10] &&
        cube.a[12] == cube.a[35] && cube.a[12] == cube.a[36] &&
        cube.a[37] == cube.a[53] && cube.a[37] == cube.a[39]) {
        printf("PLL_18F r r y D R u R U r Y d R R Y R u r y\n");

        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('y');
        move_y();

    }
    if (cube.a[34] == cube.a[52] && cube.a[34] == cube.a[11] &&
        cube.a[54] == cube.a[38] && cube.a[54] == cube.a[39] &&
        cube.a[12] == cube.a[10] && cube.a[12] == cube.a[35] &&
        cube.a[37] == cube.a[53] && cube.a[37] == cube.a[36]) {
        printf("PLL_18R U r r y D R u R U r Y d R R Y R u r y\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('y');
        move_y();

    }
    if (cube.a[34] == cube.a[10] && cube.a[34] == cube.a[11] &&
        cube.a[54] == cube.a[38] && cube.a[54] == cube.a[52] &&
        cube.a[12] == cube.a[39] && cube.a[12] == cube.a[35] &&
        cube.a[37] == cube.a[53] && cube.a[37] == cube.a[36]) {
        printf("PLL_18B U U r r y D R u R U r Y d R R Y R u r y\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('y');
        move_y();

    }
    if (cube.a[34] == cube.a[36] && cube.a[34] == cube.a[11] &&
        cube.a[54] == cube.a[38] && cube.a[54] == cube.a[10] &&
        cube.a[12] == cube.a[39] && cube.a[12] == cube.a[35] &&
        cube.a[37] == cube.a[53] && cube.a[37] == cube.a[52]) {
        printf("PLL_18L u r r y D R u R U r Y d R R Y R u r y\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('y');
        move_y();

    }
    //情况19
    if (cube.a[34] == cube.a[52] && cube.a[34] == cube.a[53] &&
        cube.a[54] == cube.a[35] && cube.a[54] == cube.a[10] &&
        cube.a[12] == cube.a[38] && cube.a[12] == cube.a[36] &&
        cube.a[37] == cube.a[11] && cube.a[37] == cube.a[39]) {
        printf("PLL_19F R U r y r r y D R u r U r Y d R R Y\n");

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Y');
        move_Y();

    }
    if (cube.a[34] == cube.a[52] && cube.a[34] == cube.a[38] &&
        cube.a[54] == cube.a[39] && cube.a[54] == cube.a[11] &&
        cube.a[12] == cube.a[10] && cube.a[12] == cube.a[53] &&
        cube.a[37] == cube.a[35] && cube.a[37] == cube.a[36]) {
        printf("PLL_19R U R U r y r r y D R u r U r Y d R R Y\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Y');
        move_Y();

    }
    if (cube.a[34] == cube.a[53] && cube.a[34] == cube.a[10] &&
        cube.a[54] == cube.a[35] && cube.a[54] == cube.a[52] &&
        cube.a[12] == cube.a[38] && cube.a[12] == cube.a[39] &&
        cube.a[37] == cube.a[11] && cube.a[37] == cube.a[36]) {
        printf("PLL_19B U U R U r y r r y D R u r U r Y d R R Y\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Y');
        move_Y();

    }
    if (cube.a[34] == cube.a[38] && cube.a[34] == cube.a[36] &&
        cube.a[54] == cube.a[11] && cube.a[54] == cube.a[10] &&
        cube.a[12] == cube.a[39] && cube.a[12] == cube.a[53] &&
        cube.a[37] == cube.a[35] && cube.a[37] == cube.a[52]) {
        printf("PLL_19L u R U r y r r y D R u r U r Y d R R Y\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Y');
        move_Y();

    }
    //情况20
    if (cube.a[34] == cube.a[52] && cube.a[34] == cube.a[38] &&
        cube.a[54] == cube.a[35] && cube.a[54] == cube.a[10] &&
        cube.a[12] == cube.a[36] && cube.a[12] == cube.a[11] &&
        cube.a[37] == cube.a[53] && cube.a[37] == cube.a[39]) {
        printf("PLL_20F R R Y d r U r u R y D r r y r U R Y\n");

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Y');
        move_Y();

    }
    if (cube.a[34] == cube.a[52] && cube.a[34] == cube.a[38] &&
        cube.a[54] == cube.a[39] && cube.a[54] == cube.a[53] &&
        cube.a[12] == cube.a[35] && cube.a[12] == cube.a[10] &&
        cube.a[37] == cube.a[11] && cube.a[37] == cube.a[36]) {
        printf("PLL_20R U R R Y d r U r u R y D r r y r U R Y\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Y');
        move_Y();

    }
    if (cube.a[34] == cube.a[35] && cube.a[34] == cube.a[10] &&
        cube.a[54] == cube.a[38] && cube.a[54] == cube.a[52] &&
        cube.a[12] == cube.a[53] && cube.a[12] == cube.a[39] &&
        cube.a[37] == cube.a[11] && cube.a[37] == cube.a[36]) {
        printf("PLL_20B U U R R Y d r U r u R y D r r y r U R Y\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Y');
        move_Y();

    }
    if (cube.a[34] == cube.a[36] && cube.a[34] == cube.a[11] &&
        cube.a[54] == cube.a[10] && cube.a[54] == cube.a[35] &&
        cube.a[12] == cube.a[53] && cube.a[12] == cube.a[39] &&
        cube.a[37] == cube.a[38] && cube.a[37] == cube.a[52]) {
        printf("PLL_20L u R R Y d r U r u R y D r r y r U R Y\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Y');
        move_Y();

    }
    //情况21
    if (cube.a[34] == cube.a[52] && cube.a[34] == cube.a[11] &&
        cube.a[54] == cube.a[10] && cube.a[54] == cube.a[53] &&
        cube.a[12] == cube.a[38] && cube.a[12] == cube.a[36] &&
        cube.a[37] == cube.a[35] && cube.a[37] == cube.a[39]) {
        printf("PLL_21F r u R Y R R Y d r U R u R y D r r y\n");

        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('y');
        move_y();

    }
    if (cube.a[34] == cube.a[35] && cube.a[34] == cube.a[52] &&
        cube.a[54] == cube.a[11] && cube.a[54] == cube.a[39] &&
        cube.a[12] == cube.a[38] && cube.a[12] == cube.a[10] &&
        cube.a[37] == cube.a[36] && cube.a[37] == cube.a[53]) {
        printf("PLL_21R U r u R Y R R Y d r U R u R y D r r y\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('y');
        move_y();

    }
    if (cube.a[34] == cube.a[10] && cube.a[34] == cube.a[53] &&
        cube.a[54] == cube.a[11] && cube.a[54] == cube.a[52] &&
        cube.a[12] == cube.a[39] && cube.a[12] == cube.a[35] &&
        cube.a[37] == cube.a[36] && cube.a[37] == cube.a[38]) {
        printf("PLL_21B U U r u R Y R R Y d r U R u R y D r r y\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('y');
        move_y();

    }
    if (cube.a[34] == cube.a[36] && cube.a[34] == cube.a[53] &&
        cube.a[54] == cube.a[10] && cube.a[54] == cube.a[38] &&
        cube.a[12] == cube.a[39] && cube.a[12] == cube.a[11] &&
        cube.a[37] == cube.a[35] && cube.a[37] == cube.a[52]) {
        printf("PLL_21L u r u R Y R R Y d r U R u R y D r r y\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('y');
        move_y();

    }

}
//调整最后一层的颜色
