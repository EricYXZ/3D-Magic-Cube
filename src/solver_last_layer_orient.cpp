#include "PocketCube.h"

void SOLVE_ORIENT(int a[]) {
    //将魔方上下翻转便于观察
    Aim_Cube.step.push('x');
    move_x();
    Aim_Cube.step.push('x');
    move_x();
    printf("x x\n");
    //7种顶面十字情况
    //情况1
    if (cube.a[34] == 6 && cube.a[2] == 6 && cube.a[36] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[10] == 6 && cube.a[8] == 6 && cube.a[12] == 6) {
        printf("OLL_1F R U U r u R U r u R u r\n");

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
    }
    if (cube.a[39] == 6 && cube.a[2] == 6 && cube.a[54] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[37] == 6 && cube.a[8] == 6 && cube.a[52] == 6) {
        printf("OLL_1R U R U U r u R U r u R u r\n");

        Aim_Cube.step.push('U');
        move_U();

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
    }
    //情况2
    if (cube.a[39] == 6 && cube.a[2] == 6 && cube.a[36] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[37] == 6 && cube.a[8] == 6 && cube.a[12] == 6) {
        printf("OLL_2F R u u r r u R R u r r u u R\n");

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
    }
    if (cube.a[39] == 6 && cube.a[2] == 6 && cube.a[54] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[10] == 6 && cube.a[8] == 6 && cube.a[12] == 6) {
        printf("OLL_2R U R u u r r u R R u r r u u R\n");

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
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
    }
    if (cube.a[34] == 6 && cube.a[2] == 6 && cube.a[54] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[10] == 6 && cube.a[8] == 6 && cube.a[52] == 6) {
        printf("OLL_2B U U R u u r r u R R u r r u u R\n");

        Aim_Cube.step.push('U');
        move_U();
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
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
    }
    if (cube.a[34] == 6 && cube.a[2] == 6 && cube.a[36] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[37] == 6 && cube.a[8] == 6 && cube.a[52] == 6) {
        printf("OLL_2L u R u u r r u R R u r r u u R\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
    }
    //情况3
    if (cube.a[1] == 6 && cube.a[2] == 6 && cube.a[3] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[10] == 6 && cube.a[8] == 6 && cube.a[12] == 6) {
        printf("OLL_3F R R d r U U R D r U U r\n");

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
    }
    if (cube.a[1] == 6 && cube.a[2] == 6 && cube.a[54] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[7] == 6 && cube.a[8] == 6 && cube.a[52] == 6) {
        printf("OLL_3R U R R d r U U R D r U U r\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
    }
    if (cube.a[34] == 6 && cube.a[2] == 6 && cube.a[36] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[7] == 6 && cube.a[8] == 6 && cube.a[9] == 6) {
        printf("OLL_3B U U R R d r U U R D r U U r\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
    }
    if (cube.a[39] == 6 && cube.a[2] == 6 && cube.a[3] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[37] == 6 && cube.a[8] == 6 && cube.a[9] == 6) {
        printf("OLL_3B u R R d r U U R D r U U r\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
    }
    //情况4
    if (cube.a[34] == 6 && cube.a[2] == 6 && cube.a[3] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[10] == 6 && cube.a[8] == 6 && cube.a[9] == 6) {
        printf("OLL_4F z l U r u Z L f R F\n");

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('F');
        move_F();

    }
    if (cube.a[1] == 6 && cube.a[2] == 6 && cube.a[3] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[37] == 6 && cube.a[8] == 6 && cube.a[52] == 6) {
        printf("OLL_4R U z l U r u Z L f R F\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('F');
        move_F();

    }
    if (cube.a[1] == 6 && cube.a[2] == 6 && cube.a[36] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[7] == 6 && cube.a[8] == 6 && cube.a[12] == 6) {
        printf("OLL_4B U U z l U r u Z L f R F\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('F');
        move_F();

    }
    if (cube.a[39] == 6 && cube.a[2] == 6 && cube.a[54] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[7] == 6 && cube.a[8] == 6 && cube.a[9] == 6) {
        printf("OLL_4L u z l U r u Z L f R F\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('F');
        move_F();

    }
    //情况5
    if (cube.a[1] == 6 && cube.a[2] == 6 && cube.a[54] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[10] == 6 && cube.a[8] == 6 && cube.a[9] == 6) {
        printf("OLL_5F f r F z l U R u Z L\n");

        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();

    }
    if (cube.a[34] == 6 && cube.a[2] == 6 && cube.a[3] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[7] == 6 && cube.a[8] == 6 && cube.a[52] == 6) {
        printf("OLL_5R U f r F z l U R u Z L\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();

    }
    if (cube.a[1] == 6 && cube.a[2] == 6 && cube.a[36] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[37] == 6 && cube.a[8] == 6 && cube.a[9] == 6) {
        printf("OLL_5B U U f r F z l U R u Z L\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();

    }
    if (cube.a[39] == 6 && cube.a[2] == 6 && cube.a[3] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[7] == 6 && cube.a[8] == 6 && cube.a[12] == 6) {
        printf("OLL_5L u f r F z l U R u Z L\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();

    }
    //情况6
    if (cube.a[34] == 6 && cube.a[2] == 6 && cube.a[54] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[7] == 6 && cube.a[8] == 6 && cube.a[12] == 6) {
        printf("OLL_6F R U r U R U U r\n");

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();

    }
    if (cube.a[34] == 6 && cube.a[2] == 6 && cube.a[54] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[37] == 6 && cube.a[8] == 6 && cube.a[9] == 6) {
        printf("OLL_6R U R U r U R U U r\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();

    }
    if (cube.a[34] == 6 && cube.a[2] == 6 && cube.a[3] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[37] == 6 && cube.a[8] == 6 && cube.a[12] == 6) {
        printf("OLL_6B U U R U r U R U U r\n");

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
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();

    }
    if (cube.a[1] == 6 && cube.a[2] == 6 && cube.a[54] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[37] == 6 && cube.a[8] == 6 && cube.a[12] == 6) {
        printf("OLL_6L u R U r U R U U r\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();

    }
    //情况7
    if (cube.a[39] == 6 && cube.a[2] == 6 && cube.a[36] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[10] == 6 && cube.a[8] == 6 && cube.a[9] == 6) {
        printf("OLL_7F L u l u L u u l\n");

        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();

    }
    if (cube.a[39] == 6 && cube.a[2] == 6 && cube.a[3] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[10] == 6 && cube.a[8] == 6 && cube.a[52] == 6) {
        printf("OLL_7R U L u l u L u u l\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();

    }
    if (cube.a[1] == 6 && cube.a[2] == 6 && cube.a[36] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[10] == 6 && cube.a[8] == 6 && cube.a[52] == 6) {
        printf("OLL_7B U U L u l u L u u l\n");

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
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();

    }
    if (cube.a[39] == 6 && cube.a[2] == 6 && cube.a[36] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[7] == 6 && cube.a[8] == 6 && cube.a[52] == 6) {
        printf("OLL_7L u L u l u L u u l\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();

    }
    //8种顶面单块情况
    //情况8
    if (cube.a[39] == 6 && cube.a[35] == 6 && cube.a[54] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[37] == 6 && cube.a[11] == 6 && cube.a[52] == 6) {
        printf("OLL_8F R u u r r f R F U U r f R F\n");

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('F');
        move_F();
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
        Aim_Cube.step.push('F');
        move_F();

    }
    if (cube.a[34] == 6 && cube.a[35] == 6 && cube.a[36] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[10] == 6 && cube.a[11] == 6 && cube.a[12] == 6) {
        printf("OLL_8R U R u u r r f R F U U r f R F\n");

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
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('F');
        move_F();
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
        Aim_Cube.step.push('F');
        move_F();

    }
    //情况9
    if (cube.a[39] == 6 && cube.a[35] == 6 && cube.a[36] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[37] == 6 && cube.a[11] == 6 && cube.a[12] == 6) {
        printf("OLL_9F f R U r u x F B R U r u X b\n");

        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('x');
        move_x();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('X');
        move_X();
        Aim_Cube.step.push('b');
        move_b();

    }
    if (cube.a[39] == 6 && cube.a[35] == 6 && cube.a[54] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[10] == 6 && cube.a[11] == 6 && cube.a[12] == 6) {
        printf("OLL_9R U f R U r u x F B R U r u X b\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('x');
        move_x();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('X');
        move_X();
        Aim_Cube.step.push('b');
        move_b();

    }
    if (cube.a[34] == 6 && cube.a[35] == 6 && cube.a[54] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[10] == 6 && cube.a[11] == 6 && cube.a[52] == 6) {
        printf("OLL_9B U U f R U r u x F B R U r u X b\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('x');
        move_x();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('X');
        move_X();
        Aim_Cube.step.push('b');
        move_b();

    }
    if (cube.a[34] == 6 && cube.a[35] == 6 && cube.a[36] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[37] == 6 && cube.a[11] == 6 && cube.a[52] == 6) {
        printf("OLL_9L u f R U r u x F B R U r u X b\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('x');
        move_x();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('X');
        move_X();
        Aim_Cube.step.push('b');
        move_b();

    }
    //情况10
    if (cube.a[39] == 6 && cube.a[35] == 6 && cube.a[36] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[7] == 6 && cube.a[11] == 6 && cube.a[52] == 6) {
        printf("OLL_10F f u R u r u r f R F U U F\n");

        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('u');
        move_u();
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
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('F');
        move_F();

    }
    if (cube.a[39] == 6 && cube.a[35] == 6 && cube.a[36] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[10] == 6 && cube.a[11] == 6 && cube.a[9] == 6) {
        printf("OLL_10R U f u R u r u r f R F U U F\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('u');
        move_u();
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
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('F');
        move_F();


    }
    if (cube.a[39] == 6 && cube.a[35] == 6 && cube.a[3] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[10] == 6 && cube.a[11] == 6 && cube.a[52] == 6) {
        printf("OLL_10B U U f u R u r u r f R F U U F\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('u');
        move_u();
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
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('F');
        move_F();

    }
    if (cube.a[1] == 6 && cube.a[35] == 6 && cube.a[36] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[10] == 6 && cube.a[11] == 6 && cube.a[52] == 6) {
        printf("OLL_10L u f u R u r u r f R F U U F\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('u');
        move_u();
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
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('F');
        move_F();


    }
    //情况11
    if (cube.a[34] == 6 && cube.a[35] == 6 && cube.a[3] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[37] == 6 && cube.a[11] == 6 && cube.a[9] == 6) {
        printf("OLL_11F F U L U l U l F L f u u f\n");

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
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
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('f');
        move_f();
    }
    if (cube.a[34] == 6 && cube.a[35] == 6 && cube.a[3] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[37] == 6 && cube.a[11] == 6 && cube.a[12] == 6) {
        printf("OLL_11R U F U L U l U l F L f u u f\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
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
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('f');
        move_f();
    }
    if (cube.a[1] == 6 && cube.a[35] == 6 && cube.a[54] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[37] == 6 && cube.a[11] == 6 && cube.a[12] == 6) {
        printf("OLL_11B U U F U L U l U l F L f u u f\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
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
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('f');
        move_f();
    }
    if (cube.a[34] == 6 && cube.a[35] == 6 && cube.a[54] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[7] == 6 && cube.a[11] == 6 && cube.a[12] == 6) {
        printf("OLL_11L u F U L U l U l F L f u u f\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
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
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('f');
        move_f();
    }
    //情况12
    if (cube.a[1] == 6 && cube.a[35] == 6 && cube.a[36] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[37] == 6 && cube.a[11] == 6 && cube.a[9] == 6) {
        printf("OLL_12F R U r U r f R F U U r f R F\n");

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('F');
        move_F();
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
        Aim_Cube.step.push('F');
        move_F();

    }
    if (cube.a[39] == 6 && cube.a[35] == 6 && cube.a[3] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[7] == 6 && cube.a[11] == 6 && cube.a[12] == 6) {
        printf("OLL_12R U R U r U r f R F U U r f R F\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('F');
        move_F();
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
        Aim_Cube.step.push('F');
        move_F();

    }
    if (cube.a[1] == 6 && cube.a[35] == 6 && cube.a[54] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[10] == 6 && cube.a[11] == 6 && cube.a[9] == 6) {
        printf("OLL_12B U U R U r U r f R F U U r f R F\n");

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
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('F');
        move_F();
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
        Aim_Cube.step.push('F');
        move_F();

    }
    if (cube.a[34] == 6 && cube.a[35] == 6 && cube.a[3] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[7] == 6 && cube.a[11] == 6 && cube.a[52] == 6) {
        printf("OLL_12L u R U r U r f R F U U r f R F\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('F');
        move_F();
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
        Aim_Cube.step.push('F');
        move_F();

    }
    //情况13
    if (cube.a[1] == 6 && cube.a[35] == 6 && cube.a[54] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[10] == 6 && cube.a[11] == 6 && cube.a[12] == 6) {
        printf("OLL_13F z l U r U R u u Z L Z L u R u r u u z l\n");

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
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
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();

    }
    if (cube.a[1] == 6 && cube.a[35] == 6 && cube.a[54] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[7] == 6 && cube.a[11] == 6 && cube.a[52] == 6) {
        printf("OLL_13R U z l U r U R u u Z L Z L u R u r u u z l\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
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
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();

    }
    if (cube.a[34] == 6 && cube.a[35] == 6 && cube.a[36] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[7] == 6 && cube.a[11] == 6 && cube.a[9] == 6) {
        printf("OLL_13B U U z l U r U R u u Z L Z L u R u r u u z l\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
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
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();

    }
    if (cube.a[39] == 6 && cube.a[35] == 6 && cube.a[3] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[37] == 6 && cube.a[11] == 6 && cube.a[9] == 6) {
        printf("OLL_13l u z l U r U R u u Z L Z L u R u r u u z l\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
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
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();

    }
    //情况14
    if (cube.a[1] == 6 && cube.a[35] == 6 && cube.a[3] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[37] == 6 && cube.a[11] == 6 && cube.a[52] == 6) {
        printf("OLL_14F Z L R U R U r u z l r r f R F\n");

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
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
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('F');
        move_F();


    }
    if (cube.a[1] == 6 && cube.a[35] == 6 && cube.a[36] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[7] == 6 && cube.a[11] == 6 && cube.a[12] == 6) {
        printf("OLL_14R U Z L R U R U r u z l r r f R F\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
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
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('F');
        move_F();


    }
    if (cube.a[39] == 6 && cube.a[35] == 6 && cube.a[54] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[7] == 6 && cube.a[11] == 6 && cube.a[9] == 6) {
        printf("OLL_14B U U Z L R U R U r u z l r r f R F\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
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
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('F');
        move_F();


    }
    if (cube.a[34] == 6 && cube.a[35] == 6 && cube.a[3] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[10] == 6 && cube.a[11] == 6 && cube.a[9] == 6) {
        printf("OLL_14L u Z L R U R U r u z l r r f R F\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
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
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('F');
        move_F();


    }
    //情况15
    if (cube.a[1] == 6 && cube.a[35] == 6 && cube.a[3] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[7] == 6 && cube.a[11] == 6 && cube.a[9] == 6) {
        printf("OLL_15F Z L R U R U r u z l r z l r U R u Z L\n");

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
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
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();

    }
    //15种顶面一字情况
    //情况16
    if (cube.a[39] == 6 && cube.a[35] == 6 && cube.a[36] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[37] == 6 && cube.a[11] == 6 && cube.a[12] == 6) {
        printf("OLL_16F x B R U r u R U r u X b\n");

        Aim_Cube.step.push('x');
        move_x();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
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
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('X');
        move_X();
        Aim_Cube.step.push('b');
        move_b();
    }
    if (cube.a[39] == 6 && cube.a[2] == 6 && cube.a[54] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[10] == 6 && cube.a[8] == 6 && cube.a[12] == 6) {
        printf("OLL_16R U x B R U r u R U r u X b\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('x');
        move_x();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
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
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('X');
        move_X();
        Aim_Cube.step.push('b');
        move_b();
    }
    if (cube.a[34] == 6 && cube.a[35] == 6 && cube.a[54] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[10] == 6 && cube.a[11] == 6 && cube.a[52] == 6) {
        printf("OLL_16B U U x B R U r u R U r u X b\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('x');
        move_x();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
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
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('X');
        move_X();
        Aim_Cube.step.push('b');
        move_b();
    }
    if (cube.a[34] == 6 && cube.a[2] == 6 && cube.a[36] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[37] == 6 && cube.a[8] == 6 && cube.a[52] == 6) {
        printf("OLL_16L u x B R U r u R U r u X b\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('x');
        move_x();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
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
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('X');
        move_X();
        Aim_Cube.step.push('b');
        move_b();
    }
    //情况17
    if (cube.a[39] == 6 && cube.a[35] == 6 && cube.a[54] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[37] == 6 && cube.a[11] == 6 && cube.a[52] == 6) {
        printf("OLL_17F Z L u z l u r U R u r U R Z L U z l\n");

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
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
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();

    }
    if (cube.a[34] == 6 && cube.a[2] == 6 && cube.a[36] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[10] == 6 && cube.a[8] == 6 && cube.a[12] == 6) {
        printf("OLL_17R U Z L u z l u r U R u r U R Z L U z l\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
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
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();

    }
    //情况18
    if (cube.a[34] == 6 && cube.a[2] == 6 && cube.a[54] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[10] == 6 && cube.a[8] == 6 && cube.a[52] == 6) {
        printf("OLL_18F r u R u r U y r U R B Y\n");

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
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('Y');
        move_Y();

    }
    if (cube.a[34] == 6 && cube.a[35] == 6 && cube.a[36] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[37] == 6 && cube.a[11] == 6 && cube.a[52] == 6) {
        printf("OLL_18R U r u R u r U y r U R B Y\n");

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
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('Y');
        move_Y();

    }
    if (cube.a[39] == 6 && cube.a[2] == 6 && cube.a[36] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[37] == 6 && cube.a[8] == 6 && cube.a[12] == 6) {
        printf("OLL_18B U U r u R u r U y r U R B Y\n");

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
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('Y');
        move_Y();

    }
    if (cube.a[39] == 6 && cube.a[35] == 6 && cube.a[54] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[10] == 6 && cube.a[11] == 6 && cube.a[12] == 6) {
        printf("OLL_18L u r u R u r U y r U R B Y\n");

        Aim_Cube.step.push('u');
        move_u();

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
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('Y');
        move_Y();

    }
    //情况19
    if (cube.a[39] == 6 && cube.a[2] == 6 && cube.a[54] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[37] == 6 && cube.a[8] == 6 && cube.a[52] == 6) {
        printf("OLL_19F R u u r r u R u r u u f R F\n");

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
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
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('F');
        move_F();

    }
    if (cube.a[34] == 6 && cube.a[35] == 6 && cube.a[36] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[10] == 6 && cube.a[11] == 6 && cube.a[12] == 6) {
        printf("OLL_19R U R u u r r u R u r u u f R F\n");

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
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('F');
        move_F();

    }
    //情况20
    if (cube.a[1] == 6 && cube.a[35] == 6 && cube.a[36] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[37] == 6 && cube.a[11] == 6 && cube.a[9] == 6) {
        printf("OLL_20F r f R U r u F U R\n");

        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();

    }
    if (cube.a[39] == 6 && cube.a[2] == 6 && cube.a[3] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[7] == 6 && cube.a[8] == 6 && cube.a[12] == 6) {
        printf("OLL_20R U r f R U r u F U R\n");

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
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();

    }
    if (cube.a[1] == 6 && cube.a[35] == 6 && cube.a[54] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[10] == 6 && cube.a[11] == 6 && cube.a[9] == 6) {
        printf("OLL_20B U U r f R U r u F U R\n");

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
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();

    }
    if (cube.a[34] == 6 && cube.a[2] == 6 && cube.a[3] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[7] == 6 && cube.a[8] == 6 && cube.a[52] == 6) {
        printf("OLL_20L u r f R U r u F U R\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();

    }
    //情况21
    if (cube.a[34] == 6 && cube.a[35] == 6 && cube.a[3] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[7] == 6 && cube.a[11] == 6 && cube.a[52] == 6) {
        printf("OLL_21F l F L u l U f u L\n");

        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('L');
        move_L();

    }
    if (cube.a[1] == 6 && cube.a[2] == 6 && cube.a[36] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[37] == 6 && cube.a[8] == 6 && cube.a[9] == 6) {
        printf("OLL_21R U l F L u l U f u L\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('L');
        move_L();

    }
    if (cube.a[39] == 6 && cube.a[35] == 6 && cube.a[3] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[7] == 6 && cube.a[11] == 6 && cube.a[12] == 6) {
        printf("OLL_21B U U l F L u l U f u L\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('L');
        move_L();

    }
    if (cube.a[1] == 6 && cube.a[2] == 6 && cube.a[54] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[10] == 6 && cube.a[8] == 6 && cube.a[9] == 6) {
        printf("OLL_21L u l F L u l U f u L\n");

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
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('L');
        move_L();

    }
    //情况22
    if (cube.a[1] == 6 && cube.a[35] == 6 && cube.a[3] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[7] == 6 && cube.a[11] == 6 && cube.a[9] == 6) {
        printf("OLL_22F R U r u z l r U R u Z L\n");

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();

    }
    if (cube.a[1] == 6 && cube.a[2] == 6 && cube.a[3] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[7] == 6 && cube.a[8] == 6 && cube.a[9] == 6) {
        printf("OLL_22R U R U r u z l r U R u Z L\n");

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
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();

    }
    //情况23
    if (cube.a[34] == 6 && cube.a[35] == 6 && cube.a[54] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[7] == 6 && cube.a[11] == 6 && cube.a[12] == 6) {
        printf("OLL_23F z l u Z L u z l U Z L Y L U l y\n");

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('y');
        move_y();

    }
    if (cube.a[34] == 6 && cube.a[2] == 6 && cube.a[54] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[10] == 6 && cube.a[8] == 6 && cube.a[9] == 6) {
        printf("OLL_23R U z l u Z L u z l U Z L Y L U l y\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('y');
        move_y();

    }
    if (cube.a[34] == 6 && cube.a[35] == 6 && cube.a[3] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[37] == 6 && cube.a[11] == 6 && cube.a[12] == 6) {
        printf("OLL_23B U U z l u Z L u z l U Z L Y L U l y\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('y');
        move_y();

    }
    if (cube.a[1] == 6 && cube.a[2] == 6 && cube.a[54] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[37] == 6 && cube.a[8] == 6 && cube.a[12] == 6) {
        printf("OLL_23L u z l u Z L u z l U Z L Y L U l y\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('y');
        move_y();

    }
    //情况24
    if (cube.a[39] == 6 && cube.a[35] == 6 && cube.a[36] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[10] == 6 && cube.a[11] == 6 && cube.a[9] == 6) {
        printf("OLL_24F z r U Z R U z r u Z R y R u r Y\n");

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('Y');
        move_Y();

    }
    if (cube.a[39] == 6 && cube.a[2] == 6 && cube.a[3] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[10] == 6 && cube.a[8] == 6 && cube.a[52] == 6) {
        printf("OLL_24R U z r U Z R U z r u Z R y R u r Y\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('Y');
        move_Y();

    }
    if (cube.a[1] == 6 && cube.a[35] == 6 && cube.a[36] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[10] == 6 && cube.a[11] == 6 && cube.a[52] == 6) {
        printf("OLL_24B U U z r U Z R U z r u Z R y R u r Y\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('Y');
        move_Y();

    }
    if (cube.a[39] == 6 && cube.a[2] == 6 && cube.a[36] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[7] == 6 && cube.a[8] == 6 && cube.a[52] == 6) {
        printf("OLL_24L u z r U Z R U z r u Z R y R u r Y\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('Y');
        move_Y();

    }
    //情况25
    if (cube.a[39] == 6 && cube.a[35] == 6 && cube.a[3] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[10] == 6 && cube.a[11] == 6 && cube.a[52] == 6) {
        printf("OLL_25F z l U Z L R U r u z l u Z L\n");

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();


    }
    if (cube.a[1] == 6 && cube.a[2] == 6 && cube.a[36] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[10] == 6 && cube.a[8] == 6 && cube.a[52] == 6) {
        printf("OLL_25R U z l U Z L R U r u z l u Z L\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();


    }
    if (cube.a[39] == 6 && cube.a[35] == 6 && cube.a[36] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[8] == 6 && cube.a[11] == 6 && cube.a[52] == 6) {
        printf("OLL_25B U U z l U Z L R U r u z l u Z L\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();


    }
    if (cube.a[39] == 6 && cube.a[2] == 6 && cube.a[36] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[10] == 6 && cube.a[8] == 6 && cube.a[9] == 6) {
        printf("OLL_25L u z l U Z L R U r u z l u Z L\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();


    }
    //情况26
    if (cube.a[1] == 6 && cube.a[35] == 6 && cube.a[54] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[37] == 6 && cube.a[11] == 6 && cube.a[12] == 6) {
        printf("OLL_26F z r u Z R L u l U z r U Z R\n");

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();

    }
    if (cube.a[34] == 6 && cube.a[2] == 6 && cube.a[54] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[7] == 6 && cube.a[8] == 6 && cube.a[12] == 6) {
        printf("OLL_26R U z r u Z R L u l U z r U Z R\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();

    }
    if (cube.a[34] == 6 && cube.a[35] == 6 && cube.a[54] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[37] == 6 && cube.a[11] == 6 && cube.a[9] == 6) {
        printf("OLL_26B U U z r u Z R L u l U z r U Z R\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();

    }
    if (cube.a[34] == 6 && cube.a[2] == 6 && cube.a[3] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[37] == 6 && cube.a[8] == 6 && cube.a[12] == 6) {
        printf("OLL_26L u z r u Z R L u l U z r U Z R\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();

    }
    //情况27 
    if (cube.a[39] == 6 && cube.a[35] == 6 && cube.a[3] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[37] == 6 && cube.a[11] == 6 && cube.a[9] == 6) {
        printf("OLL_27F f R U r u F\n");

        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('F');
        move_F();

    }
    if (cube.a[1] == 6 && cube.a[2] == 6 && cube.a[3] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[10] == 6 && cube.a[8] == 6 && cube.a[12] == 6) {
        printf("OLL_27R U f R U r u F\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('F');
        move_F();

    }
    if (cube.a[1] == 6 && cube.a[35] == 6 && cube.a[54] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[7] == 6 && cube.a[11] == 6 && cube.a[52] == 6) {
        printf("OLL_27B U U f R U r u F\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('F');
        move_F();

    }
    if (cube.a[34] == 6 && cube.a[2] == 6 && cube.a[36] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[7] == 6 && cube.a[8] == 6 && cube.a[9] == 6) {
        printf("OLL_27L u f R U r u F\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('F');
        move_F();

    }
    //情况28
    if (cube.a[34] == 6 && cube.a[35] == 6 && cube.a[3] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[10] == 6 && cube.a[11] == 6 && cube.a[9] == 6) {
        printf("OLL_28F R U r u r f R F\n");

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
    if (cube.a[1] == 6 && cube.a[2] == 6 && cube.a[3] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[37] == 6 && cube.a[8] == 6 && cube.a[52] == 6) {
        printf("OLL_28R U R U r u r f R F\n");

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
        Aim_Cube.step.push('F');
        move_F();

    }
    if (cube.a[1] == 6 && cube.a[35] == 6 && cube.a[36] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[7] == 6 && cube.a[11] == 6 && cube.a[12] == 6) {
        printf("OLL_28B U U R U r u r f R F\n");

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
        Aim_Cube.step.push('F');
        move_F();

    }
    if (cube.a[39] == 6 && cube.a[2] == 6 && cube.a[54] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[7] == 6 && cube.a[8] == 6 && cube.a[9] == 6) {
        printf("OLL_28L u R U r u r f R F\n");

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
        Aim_Cube.step.push('F');
        move_F();

    }
    //情况29
    if (cube.a[1] == 6 && cube.a[2] == 6 && cube.a[54] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[7] == 6 && cube.a[8] == 6 && cube.a[52] == 6) {
        printf("OLL_29F r u r f R F U R\n");

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
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();

    }
    if (cube.a[34] == 6 && cube.a[35] == 6 && cube.a[36] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[7] == 6 && cube.a[11] == 6 && cube.a[9] == 6) {
        printf("OLL_29R U r u r f R F U R\n");

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
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();

    }
    if (cube.a[39] == 6 && cube.a[2] == 6 && cube.a[3] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[37] == 6 && cube.a[8] == 6 && cube.a[9] == 6) {
        printf("OLL_29B U U r u r f R F U R\n");

        Aim_Cube.step.push('U');
        move_U();
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
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();

    }
    if (cube.a[1] == 6 && cube.a[35] == 6 && cube.a[3] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[10] == 6 && cube.a[11] == 6 && cube.a[12] == 6) {
        printf("OLL_29L u r u r f R F U R\n");

        Aim_Cube.step.push('u');
        move_u();

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
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();

    }
    //情况30 
    if (cube.a[39] == 6 && cube.a[35] == 6 && cube.a[54] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[7] == 6 && cube.a[11] == 6 && cube.a[9] == 6) {
        printf("OLL_30F R U r u y Z L u R U z l r Y\n");

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('Y');
        move_Y();

    }
    if (cube.a[34] == 6 && cube.a[2] == 6 && cube.a[3] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[10] == 6 && cube.a[8] == 6 && cube.a[9] == 6) {
        printf("OLL_30R U R U r u y Z L u R U z l r Y\n");

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
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('Y');
        move_Y();

    }
    if (cube.a[1] == 6 && cube.a[35] == 6 && cube.a[3] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[37] == 6 && cube.a[11] == 6 && cube.a[52] == 6) {
        printf("OLL_30B U U R U r u y Z L u R U z l r Y\n");

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
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('Y');
        move_Y();

    }
    if (cube.a[1] == 6 && cube.a[2] == 6 && cube.a[36] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[7] == 6 && cube.a[8] == 6 && cube.a[12] == 6) {
        printf("OLL_30L u R U r u y Z L u R U z l r Y\n");

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
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('Y');
        move_Y();

    }
    //6种拐角情况
    //情况31
    if (cube.a[39] == 6 && cube.a[2] == 6 && cube.a[36] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[37] == 6 && cube.a[11] == 6 && cube.a[12] == 6) {
        printf("OLL_31F f R U r u R U r u F\n");

        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
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
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('F');
        move_F();

    }
    if (cube.a[39] == 6 && cube.a[35] == 6 && cube.a[54] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[10] == 6 && cube.a[8] == 6 && cube.a[12] == 6) {
        printf("OLL_31R U f R U r u R U r u F\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
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
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('F');
        move_F();

    }
    if (cube.a[34] == 6 && cube.a[35] == 6 && cube.a[54] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[10] == 6 && cube.a[8] == 6 && cube.a[52] == 6) {
        printf("OLL_31B U U f R U r u R U r u F\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
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
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('F');
        move_F();

    }
    if (cube.a[34] == 6 && cube.a[2] == 6 && cube.a[36] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[37] == 6 && cube.a[11] == 6 && cube.a[52] == 6) {
        printf("OLL_31L u f R U r u R U r u F\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
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
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('F');
        move_F();

    }
    //情况32
    if (cube.a[34] == 6 && cube.a[2] == 6 && cube.a[54] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[10] == 6 && cube.a[11] == 6 && cube.a[52] == 6) {
        printf("OLL_32F F L u l U L u l U f\n");

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('f');
        move_f();

    }
    if (cube.a[34] == 6 && cube.a[2] == 6 && cube.a[36] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[37] == 6 && cube.a[11] == 6 && cube.a[52] == 6) {
        printf("OLL_32R U F L u l U L u l U f\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('f');
        move_f();

    }
    if (cube.a[39] == 6 && cube.a[35] == 6 && cube.a[36] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[37] == 6 && cube.a[8] == 6 && cube.a[12] == 6) {
        printf("OLL_32B U U F L u l U L u l U f\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('f');
        move_f();

    }
    if (cube.a[39] == 6 && cube.a[35] == 6 && cube.a[54] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[10] == 6 && cube.a[8] == 6 && cube.a[12] == 6) {
        printf("OLL_32L u F L u l U L u l U f\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('f');
        move_f();

    }
    //情况33
    if (cube.a[39] == 6 && cube.a[35] == 6 && cube.a[36] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[37] == 6 && cube.a[8] == 6 && cube.a[12] == 6) {
        printf("OLL_33F Z L U z l z l u Z L Z L u z l z l U Z L\n");

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
    }
    if (cube.a[39] == 6 && cube.a[2] == 6 && cube.a[54] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[10] == 6 && cube.a[11] == 6 && cube.a[12] == 6) {
        printf("OLL_33R U Z L U z l z l u Z L Z L u z l z l U Z L\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
    }
    if (cube.a[34] == 6 && cube.a[2] == 6 && cube.a[54] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[10] == 6 && cube.a[11] == 6 && cube.a[52] == 6) {
        printf("OLL_33B U U Z L U z l z l u Z L Z L u z l z l U Z L\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
    }
    if (cube.a[34] == 6 && cube.a[35] == 6 && cube.a[36] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[37] == 6 && cube.a[8] == 6 && cube.a[52] == 6) {
        printf("OLL_33L u Z L U z l z l u Z L Z L u z l z l U Z L\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
    }
    //情况34
    if (cube.a[34] == 6 && cube.a[35] == 6 && cube.a[54] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[10] == 6 && cube.a[8] == 6 && cube.a[52] == 6) {
        printf("OLL_34F Z R u z r z r U Z R Z R U z r z r u Z R\n");

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
    }
    if (cube.a[34] == 6 && cube.a[35] == 6 && cube.a[36] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[37] == 6 && cube.a[8] == 6 && cube.a[52] == 6) {
        printf("OLL_34R U Z R u z r z r U Z R Z R U z r z r u Z R\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
    }
    if (cube.a[39] == 6 && cube.a[2] == 6 && cube.a[36] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[37] == 6 && cube.a[11] == 6 && cube.a[12] == 6) {
        printf("OLL_34B U U Z R u z r z r U Z R Z R U z r z r u Z R\n");

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
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
    }
    if (cube.a[39] == 6 && cube.a[2] == 6 && cube.a[54] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[10] == 6 && cube.a[11] == 6 && cube.a[12] == 6) {
        printf("OLL_34L u Z R u z r z r U Z R Z R U z r z r u Z R\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
    }
    //情况35
    if (cube.a[39] == 6 && cube.a[35] == 6 && cube.a[54] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[37] == 6 && cube.a[8] == 6 && cube.a[52] == 6) {
        printf("OLL_35F Z L u R u r U R u r U U z l\n");

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
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
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();

    }
    if (cube.a[34] == 6 && cube.a[2] == 6 && cube.a[36] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[10] == 6 && cube.a[11] == 6 && cube.a[12] == 6) {
        printf("OLL_35R U Z L u R u r U R u r U U z l\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
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
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();

    }
    if (cube.a[39] == 6 && cube.a[2] == 6 && cube.a[54] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[37] == 6 && cube.a[11] == 6 && cube.a[52] == 6) {
        printf("OLL_35B U U Z L u R u r U R u r U U z l\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
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
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();

    }
    if (cube.a[34] == 6 && cube.a[35] == 6 && cube.a[36] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[10] == 6 && cube.a[8] == 6 && cube.a[12] == 6) {
        printf("OLL_35L u Z L u R u r U R u r U U z l\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
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
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();

    }
    //情况36
    if (cube.a[39] == 6 && cube.a[35] == 6 && cube.a[54] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[37] == 6 && cube.a[8] == 6 && cube.a[52] == 6) {
        printf("OLL_36F Z R U L U l u L U l u u z r\n");

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();

    }
    if (cube.a[34] == 6 && cube.a[35] == 6 && cube.a[36] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[10] == 6 && cube.a[8] == 6 && cube.a[12] == 6) {
        printf("OLL_36R U Z R U L U l u L U l u u z r\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();

    }
    if (cube.a[39] == 6 && cube.a[2] == 6 && cube.a[54] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[37] == 6 && cube.a[11] == 6 && cube.a[52] == 6) {
        printf("OLL_36B U U Z R U L U l u L U l u u z r\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();

    }
    if (cube.a[34] == 6 && cube.a[2] == 6 && cube.a[36] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[10] == 6 && cube.a[11] == 6 && cube.a[12] == 6) {
        printf("OLL_36L u Z R U L U l u L U l u u z r\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();

    }
    //21种拐角衍生情况
    //情况37
    if (cube.a[39] == 6 && cube.a[35] == 6 && cube.a[3] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[10] == 6 && cube.a[8] == 6 && cube.a[52] == 6) {
        printf("OLL_37F R u u r z l r u R u r U Z L R\n");

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
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
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('R');
        move_R();

    }
    if (cube.a[1] == 6 && cube.a[35] == 6 && cube.a[36] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[10] == 6 && cube.a[8] == 6 && cube.a[52] == 6) {
        printf("OLL_37R U R u u r z l r u R u r U Z L R\n");

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
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
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
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('R');
        move_R();

    }
    if (cube.a[39] == 6 && cube.a[2] == 6 && cube.a[36] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[7] == 6 && cube.a[11] == 6 && cube.a[52] == 6) {
        printf("OLL_37B U U R u u r z l r u R u r U Z L R\n");

        Aim_Cube.step.push('U');
        move_U();
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
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
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
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('R');
        move_R();

    }
    if (cube.a[39] == 6 && cube.a[2] == 6 && cube.a[36] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[10] == 6 && cube.a[11] == 6 && cube.a[9] == 6) {
        printf("OLL_37L u R u u r z l r u R u r U Z L R\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
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
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('R');
        move_R();

    }
    //情况38
    if (cube.a[1] == 6 && cube.a[35] == 6 && cube.a[54] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[37] == 6 && cube.a[8] == 6 && cube.a[12] == 6) {
        printf("OLL_38F L U U l z l r U L U l u Z L R\n");

        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('R');
        move_R();

    }
    if (cube.a[34] == 6 && cube.a[2] == 6 && cube.a[54] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[7] == 6 && cube.a[11] == 6 && cube.a[12] == 6) {
        printf("OLL_38R U L U U l z l r U L U l u Z L R\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('R');
        move_R();

    }
    if (cube.a[34] == 6 && cube.a[2] == 6 && cube.a[54] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[37] == 6 && cube.a[11] == 6 && cube.a[9] == 6) {
        printf("OLL_38B U U L U U l z l r U L U l u Z L R\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('R');
        move_R();

    }
    if (cube.a[34] == 6 && cube.a[35] == 6 && cube.a[3] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[37] == 6 && cube.a[8] == 6 && cube.a[12] == 6) {
        printf("OLL_38L u L U U l z l r U L U l u Z L R\n");

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
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('R');
        move_R();

    }
    //情况39
    if (cube.a[39] == 6 && cube.a[2] == 6 && cube.a[3] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[10] == 6 && cube.a[11] == 6 && cube.a[52] == 6) {
        printf("OLL_39F z l U U r u R u Z L\n");

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
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
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();

    }
    if (cube.a[1] == 6 && cube.a[2] == 6 && cube.a[36] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[10] == 6 && cube.a[11] == 6 && cube.a[52] == 6) {
        printf("OLL_39R U z l U U r u R u Z L\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
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
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();

    }
    if (cube.a[39] == 6 && cube.a[35] == 6 && cube.a[36] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[7] == 6 && cube.a[8] == 6 && cube.a[52] == 6) {
        printf("OLL_39B U U z l U U r u R u Z L\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
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
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();

    }
    if (cube.a[39] == 6 && cube.a[35] == 6 && cube.a[36] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[10] == 6 && cube.a[8] == 6 && cube.a[9] == 6) {
        printf("OLL_39L u z l U U r u R u Z L\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
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
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();

    }
    //情况40
    if (cube.a[1] == 6 && cube.a[2] == 6 && cube.a[54] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[37] == 6 && cube.a[11] == 6 && cube.a[12] == 6) {
        printf("OLL_40F z r u u l U L U Z R\n");

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();

    }
    if (cube.a[34] == 6 && cube.a[35] == 6 && cube.a[54] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[7] == 6 && cube.a[8] == 6 && cube.a[12] == 6) {
        printf("OLL_40R U z r u u l U L U Z R\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();

    }
    if (cube.a[34] == 6 && cube.a[35] == 6 && cube.a[54] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[37] == 6 && cube.a[8] == 6 && cube.a[9] == 6) {
        printf("OLL_40B U U z r u u l U L U Z R\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();

    }
    if (cube.a[34] == 6 && cube.a[2] == 6 && cube.a[3] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[37] == 6 && cube.a[11] == 6 && cube.a[12] == 6) {
        printf("OLL_40L u z r u u l U L U Z R\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();

    }
    //情况41
    if (cube.a[1] == 6 && cube.a[35] == 6 && cube.a[54] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[10] == 6 && cube.a[8] == 6 && cube.a[9] == 6) {
        printf("OLL_41F R u u r r f R F R u u r\n");

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
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

    }
    if (cube.a[34] == 6 && cube.a[2] == 6 && cube.a[3] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[7] == 6 && cube.a[11] == 6 && cube.a[52] == 6) {
        printf("OLL_41R U R u u r r f R F R u u r\n");

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
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
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

    }
    if (cube.a[1] == 6 && cube.a[2] == 6 && cube.a[36] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[37] == 6 && cube.a[11] == 6 && cube.a[9] == 6) {
        printf("OLL_41B U U R u u r r f R F R u u r\n");

        Aim_Cube.step.push('U');
        move_U();
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
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
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

    }
    if (cube.a[39] == 6 && cube.a[35] == 6 && cube.a[3] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[7] == 6 && cube.a[8] == 6 && cube.a[12] == 6) {
        printf("OLL_41L u R u u r r f R F R u u r\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
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

    }
    //情况42
    if (cube.a[1] == 6 && cube.a[2] == 6 && cube.a[54] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[10] == 6 && cube.a[11] == 6 && cube.a[9] == 6) {
        printf("OLL_42F f r F R U R u r\n");

        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('F');
        move_F();
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

    }
    if (cube.a[34] == 6 && cube.a[35] == 6 && cube.a[3] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[7] == 6 && cube.a[8] == 6 && cube.a[52] == 6) {
        printf("OLL_42R U f r F R U R u r\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('F');
        move_F();
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

    }
    if (cube.a[1] == 6 && cube.a[35] == 6 && cube.a[36] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[37] == 6 && cube.a[8] == 6 && cube.a[9] == 6) {
        printf("OLL_42B U U f r F R U R u r\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('F');
        move_F();
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

    }
    if (cube.a[39] == 6 && cube.a[2] == 6 && cube.a[3] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[7] == 6 && cube.a[11] == 6 && cube.a[12] == 6) {
        printf("OLL_42L u f r F R U R u r\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('F');
        move_F();
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

    }
    //情况43
    if (cube.a[34] == 6 && cube.a[35] == 6 && cube.a[3] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[10] == 6 && cube.a[8] == 6 && cube.a[9] == 6) {
        printf("OLL_43F R U X b L u l U x B r\n");

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('X');
        move_X();
        Aim_Cube.step.push('b');
        move_b();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('x');
        move_x();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('r');
        move_r();

    }
    if (cube.a[1] == 6 && cube.a[2] == 6 && cube.a[3] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[37] == 6 && cube.a[11] == 6 && cube.a[52] == 6) {
        printf("OLL_43R U R U X b L u l U x B r\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('X');
        move_X();
        Aim_Cube.step.push('b');
        move_b();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('x');
        move_x();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('r');
        move_r();

    }
    if (cube.a[1] == 6 && cube.a[2] == 6 && cube.a[36] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[7] == 6 && cube.a[11] == 6 && cube.a[12] == 6) {
        printf("OLL_43B U U R U X b L u l U x B r\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('X');
        move_X();
        Aim_Cube.step.push('b');
        move_b();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('x');
        move_x();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('r');
        move_r();

    }
    if (cube.a[39] == 6 && cube.a[35] == 6 && cube.a[54] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[7] == 6 && cube.a[8] == 6 && cube.a[9] == 6) {
        printf("OLL_43L u R U X b L u l U x B r\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('X');
        move_X();
        Aim_Cube.step.push('b');
        move_b();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('x');
        move_x();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('r');
        move_r();

    }
    //情况44
    if (cube.a[1] == 6 && cube.a[35] == 6 && cube.a[36] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[7] == 6 && cube.a[8] == 6 && cube.a[12] == 6) {
        printf("OLL_44F L u x B R U r u X b l\n");

        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('x');
        move_x();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('X');
        move_X();
        Aim_Cube.step.push('b');
        move_b();
        Aim_Cube.step.push('l');
        move_l();

    }
    if (cube.a[39] == 6 && cube.a[35] == 6 && cube.a[54] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[7] == 6 && cube.a[8] == 6 && cube.a[9] == 6) {
        printf("OLL_44R U L u x B R U r u X b l\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('x');
        move_x();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('X');
        move_X();
        Aim_Cube.step.push('b');
        move_b();
        Aim_Cube.step.push('l');
        move_l();

    }
    if (cube.a[34] == 6 && cube.a[2] == 6 && cube.a[3] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[10] == 6 && cube.a[11] == 6 && cube.a[9] == 6) {
        printf("OLL_44B U U L u x B R U r u X b l\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('x');
        move_x();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('X');
        move_X();
        Aim_Cube.step.push('b');
        move_b();
        Aim_Cube.step.push('l');
        move_l();

    }
    if (cube.a[1] == 6 && cube.a[2] == 6 && cube.a[3] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[37] == 6 && cube.a[11] == 6 && cube.a[52] == 6) {
        printf("OLL_44L u L u x B R U r u X b l\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('x');
        move_x();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('X');
        move_X();
        Aim_Cube.step.push('b');
        move_b();
        Aim_Cube.step.push('l');
        move_l();

    }
    //情况45
    if (cube.a[1] == 6 && cube.a[35] == 6 && cube.a[54] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[7] == 6 && cube.a[8] == 6 && cube.a[52] == 6) {
        printf("OLL_45F X b L u l U x B\n");

        Aim_Cube.step.push('X');
        move_X();
        Aim_Cube.step.push('b');
        move_b();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('x');
        move_x();
        Aim_Cube.step.push('B');
        move_B();

    }
    if (cube.a[34] == 6 && cube.a[35] == 6 && cube.a[36] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[7] == 6 && cube.a[8] == 6 && cube.a[9] == 6) {
        printf("OLL_45R U X b L u l U x B\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('X');
        move_X();
        Aim_Cube.step.push('b');
        move_b();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('x');
        move_x();
        Aim_Cube.step.push('B');
        move_B();

    }
    if (cube.a[39] == 6 && cube.a[2] == 6 && cube.a[3] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[37] == 6 && cube.a[11] == 6 && cube.a[9] == 6) {
        printf("OLL_45B U U X b L u l U x B\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('X');
        move_X();
        Aim_Cube.step.push('b');
        move_b();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('x');
        move_x();
        Aim_Cube.step.push('B');
        move_B();

    }
    if (cube.a[1] == 6 && cube.a[2] == 6 && cube.a[3] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[10] == 6 && cube.a[11] == 6 && cube.a[12] == 6) {
        printf("OLL_45L u X b L u l U x B\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('X');
        move_X();
        Aim_Cube.step.push('b');
        move_b();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('x');
        move_x();
        Aim_Cube.step.push('B');
        move_B();

    }
    //情况46
    if (cube.a[39] == 6 && cube.a[35] == 6 && cube.a[3] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[37] == 6 && cube.a[8] == 6 && cube.a[9] == 6) {
        printf("OLL_46F x B R U r u X b\n");

        Aim_Cube.step.push('x');
        move_x();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('X');
        move_X();
        Aim_Cube.step.push('b');
        move_b();
    }
    if (cube.a[1] == 6 && cube.a[2] == 6 && cube.a[3] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[10] == 6 && cube.a[11] == 6 && cube.a[12] == 6) {
        printf("OLL_46R U x B R U r u X b\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('x');
        move_x();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('X');
        move_X();
        Aim_Cube.step.push('b');
        move_b();
    }
    if (cube.a[1] == 6 && cube.a[2] == 6 && cube.a[54] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[7] == 6 && cube.a[11] == 6 && cube.a[52] == 6) {
        printf("OLL_46B U U x B R U r u X b\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('x');
        move_x();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('X');
        move_X();
        Aim_Cube.step.push('b');
        move_b();
    }
    if (cube.a[34] == 6 && cube.a[35] == 6 && cube.a[36] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[7] == 6 && cube.a[8] == 6 && cube.a[9] == 6) {
        printf("OLL_46L u x B R U r u X b\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('x');
        move_x();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('X');
        move_X();
        Aim_Cube.step.push('b');
        move_b();
    }
    //情况47
    if (cube.a[1] == 6 && cube.a[35] == 6 && cube.a[36] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[10] == 6 && cube.a[8] == 6 && cube.a[52] == 6) {
        printf("OLL_47F Z L u R u r u u z l\n");

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();

    }
    if (cube.a[39] == 6 && cube.a[35] == 6 && cube.a[36] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[7] == 6 && cube.a[8] == 6 && cube.a[52] == 6) {
        printf("OLL_47R U Z L u R u r u u z l\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();

    }
    if (cube.a[39] == 6 && cube.a[2] == 6 && cube.a[36] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[10] == 6 && cube.a[11] == 6 && cube.a[9] == 6) {
        printf("OLL_47B U U Z L u R u r u u z l\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();

    }
    if (cube.a[39] == 6 && cube.a[2] == 6 && cube.a[3] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[10] == 6 && cube.a[11] == 6 && cube.a[52] == 6) {
        printf("OLL_47L u Z L u R u r u u z l\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();

    }
    //情况48
    if (cube.a[34] == 6 && cube.a[35] == 6 && cube.a[3] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[37] == 6 && cube.a[8] == 6 && cube.a[12] == 6) {
        printf("OLL_48F Z R U L U l U U z r\n");

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();

    }
    if (cube.a[1] == 6 && cube.a[2] == 6 && cube.a[54] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[37] == 6 && cube.a[11] == 6 && cube.a[12] == 6) {
        printf("OLL_48R U Z R U L U l U U z r\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();

    }
    if (cube.a[34] == 6 && cube.a[2] == 6 && cube.a[54] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[7] == 6 && cube.a[11] == 6 && cube.a[12] == 6) {
        printf("OLL_48B U U Z R U L U l U U z r\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();

    }
    if (cube.a[34] == 6 && cube.a[35] == 6 && cube.a[54] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[37] == 6 && cube.a[8] == 6 && cube.a[9] == 6) {
        printf("OLL_48L u Z R U L U l U U z r\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();

    }
    //情况49
    if (cube.a[1] == 6 && cube.a[2] == 6 && cube.a[36] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[10] == 6 && cube.a[11] == 6 && cube.a[52] == 6) {
        printf("OLL_49F z l r r u R u r u u R u R Z L\n");

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('r');
        move_r();
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
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();

    }
    if (cube.a[39] == 6 && cube.a[2] == 6 && cube.a[36] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[7] == 6 && cube.a[11] == 6 && cube.a[52] == 6) {
        printf("OLL_49R U z l r r u R u r u u R u R Z L\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('r');
        move_r();
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
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();

    }
    if (cube.a[39] == 6 && cube.a[35] == 6 && cube.a[36] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[10] == 6 && cube.a[8] == 6 && cube.a[9] == 6) {
        printf("OLL_49B U U z l r r u R u r u u R u R Z L\n");

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
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();

    }
    if (cube.a[39] == 6 && cube.a[35] == 6 && cube.a[3] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[10] == 6 && cube.a[8] == 6 && cube.a[52] == 6) {
        printf("OLL_49L u z l r r u R u r u u R u R Z L\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('r');
        move_r();
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
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();

    }
    //情况50
    if (cube.a[34] == 6 && cube.a[2] == 6 && cube.a[3] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[37] == 6 && cube.a[11] == 6 && cube.a[12] == 6) {
        printf("OLL_50F z r l l U L U l U U L U L Z R\n");

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();

    }
    if (cube.a[1] == 6 && cube.a[35] == 6 && cube.a[54] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[37] == 6 && cube.a[8] == 6 && cube.a[12] == 6) {
        printf("OLL_50R U z r l l U L U l U U L U L Z R\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();

    }
    if (cube.a[34] == 6 && cube.a[35] == 6 && cube.a[54] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[7] == 6 && cube.a[8] == 6 && cube.a[12] == 6) {
        printf("OLL_50B U U z r l l U L U l U U L U L Z R\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();

    }
    if (cube.a[34] == 6 && cube.a[2] == 6 && cube.a[52] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[37] == 6 && cube.a[11] == 6 && cube.a[9] == 6) {
        printf("OLL_50L u z r l l U L U l U U L U L Z R\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();

    }
    //情况51
    if (cube.a[39] == 6 && cube.a[2] == 6 && cube.a[54] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[7] == 6 && cube.a[11] == 6 && cube.a[9] == 6) {
        printf("OLL_51F r f R F R u u r u y r u R Y\n");

        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
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
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Y');
        move_Y();

    }
    if (cube.a[34] == 6 && cube.a[2] == 6 && cube.a[3] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[10] == 6 && cube.a[11] == 6 && cube.a[9] == 6) {
        printf("OLL_51R U r f R F R u u r u y r u R Y\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('R');
        move_R();
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
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Y');
        move_Y();

    }
    if (cube.a[1] == 6 && cube.a[35] == 6 && cube.a[3] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[37] == 6 && cube.a[8] == 6 && cube.a[52] == 6) {
        printf("OLL_51B U U r f R F R u u r u y r u R Y\n");

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
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Y');
        move_Y();

    }
    if (cube.a[1] == 6 && cube.a[35] == 6 && cube.a[36] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[7] == 6 && cube.a[8] == 6 && cube.a[12] == 6) {
        printf("OLL_51L u r f R F R u u r u y r u R Y\n");

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
        Aim_Cube.step.push('y');
        move_y();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('Y');
        move_Y();

    }
    //情况52
    if (cube.a[39] == 6 && cube.a[2] == 6 && cube.a[54] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[7] == 6 && cube.a[11] == 6 && cube.a[9] == 6) {
        printf("OLL_52F l F L f L U U l U Y l U L y\n");

        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('L');
        move_L();
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
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('y');
        move_y();

    }
    if (cube.a[34] == 6 && cube.a[35] == 6 && cube.a[3] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[37] == 6 && cube.a[8] == 6 && cube.a[9] == 6) {
        printf("OLL_52R U l F L f L U U l U Y l U L y\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('L');
        move_L();
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
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('y');
        move_y();

    }
    if (cube.a[1] == 6 && cube.a[35] == 6 && cube.a[3] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[37] == 6 && cube.a[8] == 6 && cube.a[52] == 6) {
        printf("OLL_52B U U l F L f L U U l U Y l U L y\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('L');
        move_L();
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
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('y');
        move_y();

    }
    if (cube.a[1] == 6 && cube.a[2] == 6 && cube.a[36] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[7] == 6 && cube.a[11] == 6 && cube.a[12] == 6) {
        printf("OLL_52L u l F L f L U U l U Y l U L y\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('L');
        move_L();
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
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('y');
        move_y();

    }
    //情况53
    if (cube.a[34] == 6 && cube.a[2] == 6 && cube.a[36] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[7] == 6 && cube.a[11] == 6 && cube.a[9] == 6) {
        printf("OLL_53F R U r U R U U r f R U r u F\n");

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
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
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('F');
        move_F();

    }
    if (cube.a[39] == 6 && cube.a[35] == 6 && cube.a[3] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[37] == 6 && cube.a[8] == 6 && cube.a[9] == 6) {
        printf("OLL_53R U R U r U R U U r f R U r u F\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
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
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('F');
        move_F();

    }
    if (cube.a[1] == 6 && cube.a[35] == 6 && cube.a[3] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[10] == 6 && cube.a[8] == 6 && cube.a[12] == 6) {
        printf("OLL_53B U U R U r U R U U r f R U r u F\n");

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
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
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
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('F');
        move_F();

    }
    if (cube.a[1] == 6 && cube.a[2] == 6 && cube.a[54] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[7] == 6 && cube.a[11] == 6 && cube.a[52] == 6) {
        printf("OLL_53L u R U r U R U U r f R U r u F\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();
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
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('F');
        move_F();

    }
    //情况54
    if (cube.a[34] == 6 && cube.a[2] == 6 && cube.a[36] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[7] == 6 && cube.a[11] == 6 && cube.a[9] == 6) {
        printf("OLL_54F L u l u L u u l F L u l U f\n");

        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('L');
        move_L();
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
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('f');
        move_f();

    }
    if (cube.a[39] == 6 && cube.a[2] == 6 && cube.a[3] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[37] == 6 && cube.a[11] == 6 && cube.a[9] == 6) {
        printf("OLL_54R U L u l u L u u l F L u l U f\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('L');
        move_L();
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
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('f');
        move_f();

    }
    if (cube.a[1] == 6 && cube.a[35] == 6 && cube.a[3] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[10] == 6 && cube.a[8] == 6 && cube.a[12] == 6) {
        printf("OLL_54B U U L u l u L u u l F L u l U f\n");

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
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('L');
        move_L();
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
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('f');
        move_f();

    }
    if (cube.a[1] == 6 && cube.a[35] == 6 && cube.a[54] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[7] == 6 && cube.a[8] == 6 && cube.a[52] == 6) {
        printf("OLL_54L u L u l u L u u l F L u l U f\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('L');
        move_L();
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
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('f');
        move_f();

    }
    //情况55
    if (cube.a[1] == 6 && cube.a[35] == 6 && cube.a[54] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[10] == 6 && cube.a[8] == 6 && cube.a[9] == 6) {
        printf("OLL_55F R u u r r f f z l u R u u Z L f\n");

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('f');
        move_f();

    }
    if (cube.a[34] == 6 && cube.a[35] == 6 && cube.a[3] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[7] == 6 && cube.a[8] == 6 && cube.a[52] == 6) {
        printf("OLL_55R U R u u r r f f z l u R u u Z L f\n");

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
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('f');
        move_f();

    }
    if (cube.a[1] == 6 && cube.a[2] == 6 && cube.a[36] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[37] == 6 && cube.a[11] == 6 && cube.a[9] == 6) {
        printf("OLL_55B U U R u u r r f f z l u R u u Z L f\n");

        Aim_Cube.step.push('U');
        move_U();
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
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('f');
        move_f();

    }
    if (cube.a[39] == 6 && cube.a[2] == 6 && cube.a[3] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[7] == 6 && cube.a[11] == 6 && cube.a[12] == 6) {
        printf("OLL_55L u R u u r r f f z l u R u u Z L f\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('f');
        move_f();

    }
    //情况56
    if (cube.a[39] == 6 && cube.a[35] == 6 && cube.a[3] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[7] == 6 && cube.a[8] == 6 && cube.a[12] == 6) {
        printf("OLL_56F L U U l l F F z r U L U U Z R F\n");

        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('F');
        move_F();

    }
    if (cube.a[1] == 6 && cube.a[2] == 6 && cube.a[54] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[10] == 6 && cube.a[11] == 6 && cube.a[9] == 6) {
        printf("OLL_56R U L U U l l F F z r U L U U Z R F\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('F');
        move_F();

    }
    if (cube.a[34] == 6 && cube.a[2] == 6 && cube.a[3] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[7] == 6 && cube.a[11] == 6 && cube.a[52] == 6) {
        printf("OLL_56B U U L U U l l F F z r U L U U Z R F\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('F');
        move_F();

    }
    if (cube.a[1] == 6 && cube.a[35] == 6 && cube.a[36] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[37] == 6 && cube.a[8] == 6 && cube.a[9] == 6) {
        printf("OLL_56L u L U U l l F F z r U L U U Z R F\n");

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
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('F');
        move_F();

    }
    //情况57
    if (cube.a[1] == 6 && cube.a[35] == 6 && cube.a[3] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[7] == 6 && cube.a[8] == 6 && cube.a[9] == 6) {
        printf("OLL_57F Z L u R U z l r u r U R\n");

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();

    }
    if (cube.a[1] == 6 && cube.a[35] == 6 && cube.a[3] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[7] == 6 && cube.a[8] == 6 && cube.a[9] == 6) {
        printf("OLL_57R U Z L u R U z l r u r U R\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();

    }
    if (cube.a[1] == 6 && cube.a[2] == 6 && cube.a[3] == 6 &&
        cube.a[38] == 6 && cube.a[5] == 6 && cube.a[6] == 6 &&
        cube.a[7] == 6 && cube.a[11] == 6 && cube.a[9] == 6) {
        printf("OLL_57B U U Z L u R U z l r u r U R\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();

    }
    if (cube.a[1] == 6 && cube.a[2] == 6 && cube.a[3] == 6 &&
        cube.a[4] == 6 && cube.a[5] == 6 && cube.a[53] == 6 &&
        cube.a[7] == 6 && cube.a[11] == 6 && cube.a[9] == 6) {
        printf("OLL_57L u Z L u R U z l r u r U R\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('Z');
        move_Z();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('z');
        move_z();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('R');
        move_R();

    }
}
//Permutation of Last Layer
