#include "PocketCube.h"

void CORRECT_Y(int a[]) {
    if (cube.a[14] == 5) {
        printf("z\n");
        Aim_Cube.step.push('z');
        move_z();
    }
    if (cube.a[50] == 5) {
        printf("X\n");
        Aim_Cube.step.push('x');
        move_x();
    }
    if (cube.a[32] == 5) {
        printf("Z\n");
        Aim_Cube.step.push('Z');
        move_Z();
    }
    if (cube.a[41] == 5) {
        printf("x\n");
        Aim_Cube.step.push('x');
        move_x();
    }
    if (cube.a[23] == 5) {
        printf("X X\n");
        Aim_Cube.step.push('X');
        move_X();
        Aim_Cube.step.push('X');
        move_X();
    }
}

void CORRECT_XZ(int a[]) {
    if (cube.a[50] == 1) {
        printf("Y\n");
        Aim_Cube.step.push('Y');
        move_Y();
    }
    if (cube.a[32] == 1) {
        printf("Y Y\n");
        Aim_Cube.step.push('Y');
        move_Y();
        Aim_Cube.step.push('Y');
        move_Y();
    }
    if (cube.a[41] == 1) {
        printf("y\n");
        Aim_Cube.step.push('y');
        move_y();

    }
}
/********************µÚÒ»²ã¸´Ô­Ëã·¨º¯Êı********************/
/**********°×ÃæÊ®×Ö¸´Ô­**********/
//°×³ÈÀâ¿é¸´Ô­
void SOLVE_WHITE_ORANGE_RIDGE(int a[]) {

    //°×Àâ¿éÎ»ÓÚ¶¥²ã
    if ((cube.a[4] == 4) && (cube.a[38] == 5)) {
        printf("C_O1 l u f U\n");

        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('U');
        move_U();
    }
    else if ((cube.a[8] == 4) && (cube.a[11] == 5)) {
        printf("C_O2 U l u f U\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('U');
        move_U();
    }
    else if ((cube.a[8] == 5) && (cube.a[11] == 4)) {
        printf("C_O3 U\n");

        Aim_Cube.step.push('U');
        move_U();
    }
    else if ((cube.a[6] == 4) && (cube.a[53] == 5)) {
        printf("C_O4 U U l u f U\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('U');
        move_U();
    }
    else if ((cube.a[6] == 5) && (cube.a[53] == 4)) {
        printf("C_O5 U U\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
    }
    else if ((cube.a[2] == 4) && (cube.a[35] == 5)) {
        printf("C_O6 u l u f U\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('U');
        move_U();
    }
    else if ((cube.a[2] == 5) && (cube.a[35] == 4)) {
        printf("C_O7 u\n");

        Aim_Cube.step.push('u');
        move_u();
    }

    //°×Àâ¿éÎ»ÓÚÖĞ¼ä²ã
    else if ((cube.a[13] == 5) && (cube.a[40] == 4)) {
        printf("C_O8 L\n");

        Aim_Cube.step.push('L');
        move_L();
    }
    else if ((cube.a[13] == 4) && (cube.a[40] == 5)) {
        printf("C_O9 u f U\n");

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('U');
        move_U();
    }
    else if ((cube.a[49] == 5) && (cube.a[15] == 4)) {
        printf("C_O10 u F U\n");

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('U');
        move_U();
    }
    else if ((cube.a[49] == 4) && (cube.a[15] == 5)) {
        printf("C_O11 u u R U U\n");

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
    }
    else if ((cube.a[33] == 5) && (cube.a[51] == 4)) {
        printf("C_O12 U U r U U\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
    }
    else if ((cube.a[33] == 4) && (cube.a[51] == 5)) {
        printf("C_O13 U B u\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('u');
        move_u();
    }
    else if ((cube.a[42] == 5) && (cube.a[31] == 4)) {
        printf("C_O14 U b u\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('b');
        move_b();
        Aim_Cube.step.push('u');
        move_u();
    }
    else if ((cube.a[42] == 4) && (cube.a[31] == 5)) {
        printf("C_O15 l\n");

        Aim_Cube.step.push('l');
        move_l();
    }
    //°×Àâ¿éÎ»ÓÚµ×²ã
    else if ((cube.a[22] == 5) && (cube.a[44] == 4)) {
        printf("C_O16 L L\n");

        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('L');
        move_L();
    }
    else if ((cube.a[22] == 4) && (cube.a[44] == 5)) {
        printf("C_O17 L u f U\n");

        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('U');
        move_U();
    }
    else if ((cube.a[20] == 5) && (cube.a[17] == 4)) {
        printf("C_O18 D L L\n");

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('L');
        move_L();
    }
    else if ((cube.a[20] == 4) && (cube.a[17] == 5)) {
        printf("C_O19 D L u f U\n");

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('U');
        move_U();
    }
    else if ((cube.a[24] == 5) && (cube.a[47] == 4)) {
        printf("C_O20 D D L L\n");

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('L');
        move_L();
    }
    else if ((cube.a[24] == 4) && (cube.a[47] == 5)) {
        printf("C_O21 D D L u f U\n");

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('U');
        move_U();
    }
    else if ((cube.a[26] == 5) && (cube.a[29] == 4)) {
        printf("C_O22 d L L\n");

        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('L');
        move_L();
    }
    else if ((cube.a[26] == 4) && (cube.a[29] == 5)) {
        printf("C_O23 d L u f U\n");

        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('U');
        move_U();
    }

}
//°×ÂÌÀâ¿é¸´Ô­
void SOLVE_WHITE_GREEN_RIDGE(int a[]) {

    //°×Àâ¿éÎ»ÓÚ¶¥²ã
    if ((cube.a[8] == 1) && (cube.a[11] == 5)) {
        printf("C_G1 f u R U\n");

        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();

    }
    else if ((cube.a[6] == 1) && (cube.a[53] == 5)) {
        printf("C_G2 r F\n");

        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('F');
        move_F();
    }
    else if ((cube.a[6] == 5) && (cube.a[53] == 1)) {
        printf("C_G3 r u R U\n");

        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
    }
    else if ((cube.a[2] == 1) && (cube.a[35] == 5)) {
        printf("C_G4 b u r U\n");

        Aim_Cube.step.push('b');
        move_b();
        Aim_Cube.step.push('u');
        move_u();;
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
    }
    else if ((cube.a[2] == 5) && (cube.a[35] == 1)) {
        printf("C_G5 b U U B U U\n");

        Aim_Cube.step.push('b');
        move_b();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
    }
    //°×Àâ¿éÎ»ÓÚÖĞ¼ä²ã
    else if ((cube.a[13] == 5) && (cube.a[40] == 1)) {
        printf("C_G6 U L u\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('u');
        move_u();
    }
    else if ((cube.a[13] == 1) && (cube.a[40] == 5)) {
        printf("C_G7 U u f U u\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('u');
        move_u();
    }
    else if ((cube.a[49] == 5) && (cube.a[15] == 1)) {
        printf("C_G8 U u F U u\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('u');
        move_u();
    }
    else if ((cube.a[49] == 1) && (cube.a[15] == 5)) {
        printf("C_G9 U u u R U U u\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('u');
        move_u();
    }
    else if ((cube.a[33] == 5) && (cube.a[51] == 1)) {
        printf("C_G10 U U U r U U u\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('u');
        move_u();
    }
    else if ((cube.a[33] == 1) && (cube.a[51] == 5)) {
        printf("C_G11 U U B u u\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('u');
        move_u();
    }
    else if ((cube.a[42] == 5) && (cube.a[31] == 1)) {
        printf("C_G12 U U b u u\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('b');
        move_b();
        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('u');
        move_u();
    }
    else if ((cube.a[42] == 1) && (cube.a[31] == 5)) {
        printf("C_G13 U l u\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('l');
        move_l();

        Aim_Cube.step.push('u');
        move_u();
    }
    //°×Àâ¿éÎ»ÓÚµ×²ã
    else if ((cube.a[22] == 5) && (cube.a[44] == 1)) {
        printf("C_G14 d F F\n");

        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('F');
        move_F();
    }
    else if ((cube.a[22] == 1) && (cube.a[44] == 5)) {
        printf("C_G15 U L u f U u\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('u');
        move_u();
    }
    else if ((cube.a[20] == 5) && (cube.a[17] == 1)) {
        printf("C_G16 F F\n");

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('F');
        move_F();
    }
    else if ((cube.a[20] == 1) && (cube.a[17] == 5)) {
        printf("C_G17 U D L u f U u\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('u');
        move_u();
    }
    else if ((cube.a[24] == 5) && (cube.a[47] == 1)) {
        printf("C_G18 D F F\n");

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('F');
        move_F();
    }
    else if ((cube.a[24] == 1) && (cube.a[47] == 5)) {
        printf("C_G19 U D D L u f U u\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('u');
        move_u();
    }
    else if ((cube.a[26] == 5) && (cube.a[29] == 1)) {
        printf("C_G20 d d F F\n");

        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('F');
        move_F();
    }
    else if ((cube.a[26] == 1) && (cube.a[29] == 5)) {
        printf("C_G21 U d L u f U u\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('u');
        move_u();
    }
}
//°×ºìÀâ¿é¸´Ô­
void SOLVE_WHITE_RED_RIDGE(int a[]) {
    //°×Àâ¿éÎ»ÓÚ¶¥²ã
    if ((cube.a[6] == 2) && (cube.a[53] == 5)) {
        printf("C_R1 r U F u\n");

        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('u');
        move_u();
    }
    else if ((cube.a[2] == 2) && (cube.a[35] == 5)) {
        printf("C_R2 b r\n");

        Aim_Cube.step.push('b');
        move_b();
        Aim_Cube.step.push('r');
        move_r();

    }
    else if ((cube.a[2] == 5) && (cube.a[35] == 2)) {
        printf("C_R3 b u B U\n");

        Aim_Cube.step.push('b');
        move_b();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('U');
        move_U();
    }
    //°×Àâ¿éÎ»ÓÚÖĞ¼ä²ã
    else if ((cube.a[13] == 5) && (cube.a[40] == 2)) {
        printf("C_R4 U U L u u\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
    }
    else if ((cube.a[13] == 2) && (cube.a[40] == 5)) {
        printf("C_R5 U U u f U u u\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
    }
    else if ((cube.a[49] == 5) && (cube.a[15] == 2)) {
        printf("C_R6 U U u F U u u\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
    }
    else if ((cube.a[49] == 2) && (cube.a[15] == 5)) {
        printf("C_R7 U U u u R U U u u\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
    }
    else if ((cube.a[33] == 5) && (cube.a[51] == 2)) {
        printf("C_R8 U U u u r U U u u\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

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

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
    }
    else if ((cube.a[33] == 2) && (cube.a[51] == 5)) {
        printf("C_R9 U U U B u u u\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
    }
    else if ((cube.a[42] == 5) && (cube.a[31] == 2)) {
        printf("C_R10 U U U b u u u\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('b');
        move_b();
        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
    }
    else if ((cube.a[42] == 2) && (cube.a[31] == 5)) {
        printf("C_R11 U U l u u\n");

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
    }
    //°×Àâ¿éÎ»ÓÚµ×²ã
    else if ((cube.a[22] == 5) && (cube.a[44] == 2)) {
        printf("C_R12 U U L L u u\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
    }
    else if ((cube.a[22] == 2) && (cube.a[44] == 5)) {
        printf("C_R13 U U L u f U u u\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
    }
    else if ((cube.a[20] == 5) && (cube.a[17] == 2)) {
        printf("C_R14 U U D L L u u\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
    }
    else if ((cube.a[20] == 2) && (cube.a[17] == 5)) {
        printf("C_R15 U U D L u f U u u\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
    }
    else if ((cube.a[24] == 5) && (cube.a[47] == 2)) {
        printf("C_R16 U U D D L L u u\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
    }
    else if ((cube.a[24] == 2) && (cube.a[47] == 5)) {
        printf("C_R17 U U D D L u f U u u\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
    }
    else if ((cube.a[26] == 5) && (cube.a[29] == 2)) {
        printf("C_R18 U U d L L u u\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
    }
    else if ((cube.a[26] == 2) && (cube.a[29] == 5)) {
        printf("C_R19 U U d L u f U u u\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
    }
}
//°×À¶Àâ¿é¸´Ô­
void SOLVE_WHITE_BLUE_RIDGE(int a[]) {
    //°×Àâ¿éÎ»ÓÚ¶¥²ã
    if ((cube.a[2] == 3) && (cube.a[35] == 5)) {
        printf("C_B1 B u l U\n");

        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('U');
        move_U();
    }
    //°×Àâ¿éÎ»ÓÚÖĞ¼ä²ã
    else if ((cube.a[13] == 5) && (cube.a[40] == 3)) {
        printf("C_B2 u L U\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('U');
        move_U();
    }
    else if ((cube.a[13] == 3) && (cube.a[40] == 5)) {
        printf("C_B3 u u f U U\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('U');
        move_U();
    }
    else if ((cube.a[49] == 5) && (cube.a[15] == 3)) {
        printf("C_B4 u u F U U\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('U');
        move_U();

    }
    else if ((cube.a[49] == 3) && (cube.a[15] == 5)) {
        printf("C_B5 u u u R U U U\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('U');
        move_U();

    }
    else if ((cube.a[33] == 5) && (cube.a[51] == 3)) {
        printf("C_B6 u U U r U U U\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('U');
        move_U();

    }
    else if ((cube.a[33] == 3) && (cube.a[51] == 5)) {
        printf("C_B7 u U B u U\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('U');
        move_U();

    }
    else if ((cube.a[42] == 5) && (cube.a[31] == 3)) {
        printf("C_B8 u U b u U\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('b');
        move_b();
        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('U');
        move_U();

    }
    else if ((cube.a[42] == 3) && (cube.a[31] == 5)) {
        printf("C_B9 u l U\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('l');
        move_l();

        Aim_Cube.step.push('U');
        move_U();

    }
    //°×Àâ¿éÎ»ÓÚµ×²ã
    else if ((cube.a[22] == 5) && (cube.a[44] == 3)) {
        printf("C_B10 u L L U\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('U');
        move_U();

    }
    else if ((cube.a[22] == 3) && (cube.a[44] == 5)) {
        printf("C_B11 u L u f U U\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('U');
        move_U();

    }
    else if ((cube.a[20] == 5) && (cube.a[17] == 3)) {
        printf("C_B12 u D L L U\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('U');
        move_U();

    }
    else if ((cube.a[20] == 3) && (cube.a[17] == 5)) {
        printf("C_B13 u D L u f U U\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('U');
        move_U();

    }
    else if ((cube.a[24] == 5) && (cube.a[47] == 3)) {
        printf("C_B14 u D D L L U\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('U');
        move_U();

    }
    else if ((cube.a[24] == 3) && (cube.a[47] == 5)) {
        printf("C_B15 u D D L u f U U\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('U');
        move_U();
    }
    else if ((cube.a[26] == 5) && (cube.a[29] == 3)) {
        printf("C_B16 u d L L U\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('U');
        move_U();
    }
    else if ((cube.a[26] == 3) && (cube.a[29] == 5)) {
        printf("C_B17 u d L u f U U\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('U');
        move_U();
    }
}
/**********°×Ãæ½Ç¿é¸´Ô­*********/
//³ÈÂÌ½Ç¿é¸´Ô­
void SOLVE_ORANGE_GREEN_CORNOR(int a[]) {
    //½Ç¿éÎ»ÓÚÉÏ²ã
    if (cube.a[7] == 4 && cube.a[37] == 1 && cube.a[10] == 5) {
        printf("C_OG1 F D f d F D f\n");

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();
    }
    else if (cube.a[7] == 1 && cube.a[37] == 5 && cube.a[10] == 4) {
        printf("C_OG2 l d L D l d L\n");

        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('L');
        move_L();
    }
    else if (cube.a[9] == 4 && cube.a[12] == 1 && cube.a[52] == 5) {
        printf("C_OG3 r D R F D f\n");

        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('R');
        move_R();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();
    }
    else if (cube.a[9] == 1 && cube.a[12] == 5 && cube.a[52] == 4) {
        printf("C_OG4 r d R D l d L\n");

        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('L');
        move_L();
    }
    else if (cube.a[9] == 5 && cube.a[12] == 4 && cube.a[52] == 1) {
        printf("C_OG5 r D R l d L\n ");

        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('R');
        move_R();

        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('L');
        move_L();
    }
    else if (cube.a[3] == 4 && cube.a[54] == 1 && cube.a[36] == 5) {
        printf("C_OG6 b D B D F D f\n");

        Aim_Cube.step.push('b');
        move_b();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();
    }
    else if (cube.a[3] == 1 && cube.a[54] == 5 && cube.a[36] == 4) {
        printf("C_OG7 b d B D D l d L\n");

        Aim_Cube.step.push('b');
        move_b();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('L');
        move_L();
    }
    else if (cube.a[3] == 5 && cube.a[54] == 4 && cube.a[36] == 1) {
        printf("C_OG8 b D B D l d L\n");

        Aim_Cube.step.push('b');
        move_b();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('L');
        move_L();
    }
    else if (cube.a[1] == 4 && cube.a[34] == 1 && cube.a[39] == 5) {
        printf("C_OG9 L D l d d F D f\n");

        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();
    }
    else if (cube.a[1] == 1 && cube.a[34] == 5 && cube.a[39] == 4) {
        printf("C_OG10 B d b D F d f\n");

        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('b');
        move_b();
        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
    }
    else if (cube.a[1] == 5 && cube.a[34] == 4 && cube.a[39] == 1) {
        printf("C_OG11 L d l d F D f\n");

        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();
    }
    //½Ç¿éÎ»ÓÚÏÂ²ã
    else if (cube.a[19] == 4 && cube.a[43] == 5 && cube.a[16] == 1) {
        printf("C_OG12 D F d f\n");

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();
    }
    else if (cube.a[19] == 1 && cube.a[43] == 4 && cube.a[16] == 5) {
        printf("C_OG13 F D f\n");

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();
    }
    else if (cube.a[19] == 5 && cube.a[43] == 1 && cube.a[16] == 4) {
        printf("C_OG14 F D D f d F D f\n");

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();
    }
    else if (cube.a[21] == 4 && cube.a[18] == 5 && cube.a[46] == 1) {
        printf("C_OG15 D D F d f\n");

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
    }
    else if (cube.a[21] == 1 && cube.a[18] == 4 && cube.a[46] == 5) {
        printf("C_OG16 D F D f\n");

        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();
    }
    else if (cube.a[21] == 5 && cube.a[18] == 1 && cube.a[46] == 4) {
        printf("C_OG17 D F D D f d F D f\n");

        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();
    }
    else if (cube.a[27] == 4 && cube.a[48] == 5 && cube.a[30] == 1) {
        printf("C_OG18 D D D F d f\n");

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
    }
    else if (cube.a[27] == 1 && cube.a[48] == 4 && cube.a[30] == 5) {
        printf("C_OG19 D D F D f\n");

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();
    }
    else if (cube.a[27] == 5 && cube.a[48] == 1 && cube.a[30] == 4) {
        printf("C_OG20 D D F D D f d F D f\n");

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();
    }
    else if (cube.a[25] == 4 && cube.a[28] == 5 && cube.a[45] == 1) {
        printf("C_OG21 d D F d f\n");

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
    }
    else if (cube.a[25] == 1 && cube.a[28] == 4 && cube.a[45] == 5) {
        printf("C_OG22 d F D f\n");

        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();
    }
    else if (cube.a[25] == 5 && cube.a[28] == 1 && cube.a[45] == 4) {
        printf("C_OG23 d F D D f d F D f\n");

        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();
    }

}
//ÂÌºì½Ç¿é¸´Ô­
void SOLVE_GREEN_RED_CORNOR(int a[]) {
    //½Ç¿éÎ»ÓÚÉÏ²ã
    if (cube.a[9] == 1 && cube.a[12] == 2 && cube.a[52] == 5) {
        printf("C_GR1 U F D f d F D f u\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('u');
        move_u();

    }
    else if (cube.a[9] == 2 && cube.a[12] == 5 && cube.a[52] == 1) {
        printf("C_GR2 U l d L D l d L u\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('u');
        move_u();
    }
    else if (cube.a[3] == 1 && cube.a[54] == 2 && cube.a[36] == 5) {
        printf("C_GR3 U r D R F D f u\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('R');
        move_R();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('u');
        move_u();

    }
    else if (cube.a[3] == 2 && cube.a[54] == 5 && cube.a[36] == 1) {
        printf("C_GR4 U r d R D l d L u\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('u');
        move_u();

    }
    else if (cube.a[3] == 5 && cube.a[54] == 1 && cube.a[36] == 2) {
        printf("C_GR5 U r D R l d L u\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('R');
        move_R();

        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('u');
        move_u();

    }
    else if (cube.a[1] == 1 && cube.a[34] == 2 && cube.a[39] == 5) {
        printf("C_GR6 U b D B D F D f u\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('b');
        move_b();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('u');
        move_u();

    }
    else if (cube.a[1] == 2 && cube.a[34] == 5 && cube.a[39] == 1) {
        printf("C_GR7 U b d B D D l d L u\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('b');
        move_b();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('u');
        move_u();

    }
    else if (cube.a[1] == 5 && cube.a[34] == 1 && cube.a[39] == 2) {
        printf("C_GR8 U b D B D l d L u\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('b');
        move_b();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('B');
        move_B();
        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('u');
        move_u();

    }
    //½Ç¿éÎ»ÓÚÏÂ²ã
    else if (cube.a[19] == 1 && cube.a[43] == 5 && cube.a[16] == 2) {
        printf("C_GR9 U D F d f u\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('u');
        move_u();
    }
    else if (cube.a[19] == 2 && cube.a[43] == 1 && cube.a[16] == 5) {
        printf("C_GR10 U F D f u\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('u');
        move_u();
    }
    else if (cube.a[19] == 5 && cube.a[43] == 2 && cube.a[16] == 1) {
        printf("C_GR11 U F D D f d F D f u\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('u');
        move_u();
    }
    else if (cube.a[21] == 1 && cube.a[18] == 5 && cube.a[46] == 2) {
        printf("C_GR12 U D D F d f u\n");

        Aim_Cube.step.push('U');
        move_U();

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

        Aim_Cube.step.push('u');
        move_u();
    }
    else if (cube.a[21] == 2 && cube.a[18] == 1 && cube.a[46] == 5) {
        printf("C_GR13 U D F D f u\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('u');
        move_u();
    }
    else if (cube.a[21] == 5 && cube.a[18] == 2 && cube.a[46] == 1) {
        printf("C_GR14 U D F D D f d F D f u\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('u');
        move_u();
    }
    else if (cube.a[27] == 1 && cube.a[48] == 5 && cube.a[30] == 2) {
        printf("C_GR15 U D D D F d f u\n");

        Aim_Cube.step.push('U');
        move_U();

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

        Aim_Cube.step.push('u');
        move_u();
    }
    else if (cube.a[27] == 2 && cube.a[48] == 1 && cube.a[30] == 5) {
        printf("C_GR16 U D D F D f u\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('u');
        move_u();
    }
    else if (cube.a[27] == 5 && cube.a[48] == 2 && cube.a[30] == 1) {
        printf("C_GR17 U D D F D D f d F D f u\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('u');
        move_u();
    }
    else if (cube.a[25] == 1 && cube.a[28] == 5 && cube.a[45] == 2) {
        printf("C_GR18 U d D F d f u\n");

        Aim_Cube.step.push('U');
        move_U();

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

        Aim_Cube.step.push('u');
        move_u();
    }
    else if (cube.a[25] == 2 && cube.a[28] == 1 && cube.a[45] == 5) {
        printf("C_GR19 U d F D f u\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('u');
        move_u();
    }
    else if (cube.a[25] == 5 && cube.a[28] == 2 && cube.a[45] == 1) {
        printf("C_GR20 U d F D D f d F D f u\n");

        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('u');
        move_u();
    }
}
//ºìÀ¶½Ç¿é¸´Ô­
void SOLVE_RED_BLUE_CORNOR(int a[]) {
    //½Ç¿éÎ»ÓÚÉÏ²ã
    if (cube.a[3] == 2 && cube.a[54] == 3 && cube.a[36] == 5) {
        printf("C_RB1 U U F D f d F D f u u\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();


        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
    }
    else if (cube.a[3] == 3 && cube.a[54] == 5 && cube.a[36] == 2) {
        printf("C_RB2 U U l d L D l d L u u\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();

    }
    else if (cube.a[1] == 2 && cube.a[34] == 3 && cube.a[39] == 5) {
        printf("C_RB3 U U r D R F D f u u\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('R');
        move_R();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();


        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();

    }
    else if (cube.a[1] == 3 && cube.a[34] == 5 && cube.a[39] == 2) {
        printf("C_RB4 U U r d R D l d L u u\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('R');
        move_R();
        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('L');
        move_L();


        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();

    }
    else if (cube.a[1] == 5 && cube.a[34] == 2 && cube.a[39] == 3) {
        printf("C_RB5 U U r D R l d L u u\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('r');
        move_r();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('R');
        move_R();

        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('L');
        move_L();


        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();

    }
    //½Ç¿éÎ»ÓÚÏÂ²ã
    else if (cube.a[19] == 2 && cube.a[43] == 5 && cube.a[16] == 3) {
        printf("C_RB6 U U D F d f u u\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
    }
    else if (cube.a[19] == 3 && cube.a[43] == 2 && cube.a[16] == 5) {
        printf("C_RB7 U U F D f u u\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
    }
    else if (cube.a[19] == 5 && cube.a[43] == 3 && cube.a[16] == 2) {
        printf("C_RB8 U U F D D f d F D f u u\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
    }
    else if (cube.a[21] == 2 && cube.a[18] == 5 && cube.a[46] == 3) {
        printf("C_RB9 U U D D F d f u u\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

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

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
    }
    else if (cube.a[21] == 3 && cube.a[18] == 2 && cube.a[46] == 5) {
        printf("C_RB10 U U D F D f u u\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
    }
    else if (cube.a[21] == 5 && cube.a[18] == 3 && cube.a[46] == 2) {
        printf("C_RB11 U U D F D D f d F D f u u\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
    }
    else if (cube.a[27] == 2 && cube.a[48] == 5 && cube.a[30] == 3) {
        printf("C_RB12 U U D D D F d f u u\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

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

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
    }
    else if (cube.a[27] == 3 && cube.a[48] == 2 && cube.a[30] == 5) {
        printf("C_RB13 U U D D F D f u u\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
    }
    else if (cube.a[27] == 5 && cube.a[48] == 3 && cube.a[30] == 2) {
        printf("C_RB14 U U D D F D D f d F D f u u\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
    }
    else if (cube.a[25] == 2 && cube.a[28] == 5 && cube.a[45] == 3) {
        printf("C_RB15 U U d D F d f u u\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

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

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
    }
    else if (cube.a[25] == 3 && cube.a[28] == 2 && cube.a[45] == 5) {
        printf("C_RB16 U U d F D f u u\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
    }
    else if (cube.a[25] == 5 && cube.a[28] == 3 && cube.a[45] == 2) {
        printf("C_RB17 U U d F D D f d F D f u u\n");

        Aim_Cube.step.push('U');
        move_U();
        Aim_Cube.step.push('U');
        move_U();

        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('u');
        move_u();
        Aim_Cube.step.push('u');
        move_u();
    }
}
//À¶³È½Ç¿é¸´Ô­
void SOLVE_BLUE_ORANDE_CORNOR(int a[]) {
    //½Ç¿éÎ»ÓÚÉÏ²ã
    if (cube.a[1] == 3 && cube.a[34] == 4 && cube.a[39] == 5) {
        printf("C_BO1 u F D f d F D f U\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('U');
        move_U();

    }
    else if (cube.a[1] == 4 && cube.a[34] == 5 && cube.a[39] == 3) {
        printf("C_BO2 u l d L D l d L U\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('L');
        move_L();
        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('l');
        move_l();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('L');
        move_L();

        Aim_Cube.step.push('U');
        move_U();
    }
    //½Ç¿éÎ»ÓÚÏÂ²ã
    else if (cube.a[19] == 3 && cube.a[43] == 5 && cube.a[16] == 4) {
        printf("C_BO3 u D F d f U\n");


        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('d');
        move_d();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('U');
        move_U();
    }
    else if (cube.a[19] == 4 && cube.a[43] == 3 && cube.a[16] == 5) {
        printf("C_BO4 u F D f U\n");

        Aim_Cube.step.push('u');
        move_u();;

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('U');
        move_U();

    }
    else if (cube.a[19] == 5 && cube.a[43] == 4 && cube.a[16] == 3) {
        printf("C_BO5 u F D D f d F D f U\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('U');
        move_U();

    }
    else if (cube.a[21] == 3 && cube.a[18] == 5 && cube.a[46] == 4) {
        printf("C_BO6 u D D F d f U\n");


        Aim_Cube.step.push('u');
        move_u();

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

        Aim_Cube.step.push('U');
        move_U();

    }
    else if (cube.a[21] == 4 && cube.a[18] == 3 && cube.a[46] == 5) {
        printf("C_BO7 u D F D f U\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('U');
        move_U();

    }
    else if (cube.a[21] == 5 && cube.a[18] == 4 && cube.a[46] == 3) {
        printf("C_BO8 u D F D D f d F D f U\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('U');
        move_U();
    }
    else if (cube.a[27] == 3 && cube.a[48] == 5 && cube.a[30] == 4) {
        printf("C_BO9 u D D D F d f U\n");

        Aim_Cube.step.push('u');
        move_u();

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

        Aim_Cube.step.push('U');
        move_U();

    }
    else if (cube.a[27] == 4 && cube.a[48] == 3 && cube.a[30] == 5) {
        printf("C_BO10 u D D F D f U\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('U');
        move_U();
    }
    else if (cube.a[27] == 5 && cube.a[48] == 4 && cube.a[30] == 3) {
        printf("C_BO11 u D D F D D f d F D f U\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('U');
        move_U();

    }
    else if (cube.a[25] == 3 && cube.a[28] == 5 && cube.a[45] == 4) {
        printf("C_BO12 u d D F d f U\n");

        Aim_Cube.step.push('u');
        move_u();

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

        Aim_Cube.step.push('U');
        move_U();

    }
    else if (cube.a[25] == 4 && cube.a[28] == 3 && cube.a[45] == 5) {
        printf("C_BO13 u d F D f U\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('U');
        move_U();

    }
    else if (cube.a[25] == 5 && cube.a[28] == 4 && cube.a[45] == 3) {
        printf("C_BO14 u d F D D f d F D f U\n");

        Aim_Cube.step.push('u');
        move_u();

        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();
        Aim_Cube.step.push('d');
        move_d();

        Aim_Cube.step.push('F');
        move_F();
        Aim_Cube.step.push('D');
        move_D();
        Aim_Cube.step.push('f');
        move_f();

        Aim_Cube.step.push('U');
        move_U();

    }
}
/********************µÚ¶ş²ã¸´Ô­Ëã·¨º¯Êı********************/
//³ÈÂÌÀâ¿é¸´Ô­
