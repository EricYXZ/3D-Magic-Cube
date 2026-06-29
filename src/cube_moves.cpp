#include "PocketCube.h"

void move_F()
{
    Cube t = cube;
    cube.a[12] = t.a[18];
    cube.a[11] = t.a[15];
    cube.a[10] = t.a[12];
    cube.a[13] = t.a[11];
    cube.a[16] = t.a[10];
    cube.a[17] = t.a[13];
    cube.a[18] = t.a[16];
    cube.a[15] = t.a[17];
    cube.a[14] = t.a[14];
    cube.a[9] = t.a[46];
    cube.a[8] = t.a[49];
    cube.a[7] = t.a[52];
    cube.a[37] = t.a[9];
    cube.a[40] = t.a[8];
    cube.a[43] = t.a[7];
    cube.a[19] = t.a[37];
    cube.a[20] = t.a[40];
    cube.a[21] = t.a[43];
    cube.a[46] = t.a[19];
    cube.a[49] = t.a[20];
    cube.a[52] = t.a[21];

}
void move_f()
{
    Cube t = cube;
    cube.a[18] = t.a[12];
    cube.a[15] = t.a[11];
    cube.a[12] = t.a[10];
    cube.a[11] = t.a[13];
    cube.a[10] = t.a[16];
    cube.a[13] = t.a[17];
    cube.a[16] = t.a[18];
    cube.a[17] = t.a[15];
    cube.a[14] = t.a[14];
    cube.a[46] = t.a[9];
    cube.a[49] = t.a[8];
    cube.a[52] = t.a[7];
    cube.a[9] = t.a[37];
    cube.a[8] = t.a[40];
    cube.a[7] = t.a[43];
    cube.a[37] = t.a[19];
    cube.a[40] = t.a[20];
    cube.a[43] = t.a[21];
    cube.a[19] = t.a[46];
    cube.a[20] = t.a[49];
    cube.a[21] = t.a[52];

}
void move_R()
{
    Cube t = cube;
    cube.a[52] = t.a[46];
    cube.a[53] = t.a[49];
    cube.a[54] = t.a[52];
    cube.a[51] = t.a[53];
    cube.a[48] = t.a[54];
    cube.a[47] = t.a[51];
    cube.a[46] = t.a[48];
    cube.a[49] = t.a[47];
    cube.a[50] = t.a[50];
    cube.a[9] = t.a[18];
    cube.a[6] = t.a[15];
    cube.a[3] = t.a[12];
    cube.a[36] = t.a[9];
    cube.a[33] = t.a[6];
    cube.a[30] = t.a[3];
    cube.a[27] = t.a[36];
    cube.a[24] = t.a[33];
    cube.a[21] = t.a[30];
    cube.a[18] = t.a[27];
    cube.a[15] = t.a[24];
    cube.a[12] = t.a[21];
}
void move_r()
{
    Cube t = cube;
    cube.a[46] = t.a[52];
    cube.a[49] = t.a[53];
    cube.a[52] = t.a[54];
    cube.a[53] = t.a[51];
    cube.a[54] = t.a[48];
    cube.a[51] = t.a[47];
    cube.a[48] = t.a[46];
    cube.a[47] = t.a[49];
    cube.a[50] = t.a[50];
    cube.a[18] = t.a[9];
    cube.a[15] = t.a[6];
    cube.a[12] = t.a[3];
    cube.a[9] = t.a[36];
    cube.a[6] = t.a[33];
    cube.a[3] = t.a[30];
    cube.a[36] = t.a[27];
    cube.a[33] = t.a[24];
    cube.a[30] = t.a[21];
    cube.a[27] = t.a[18];
    cube.a[24] = t.a[15];
    cube.a[21] = t.a[12];
}
void move_U()
{
    Cube t = cube;
    cube.a[1] = t.a[7];
    cube.a[2] = t.a[4];
    cube.a[3] = t.a[1];
    cube.a[6] = t.a[2];
    cube.a[9] = t.a[3];
    cube.a[8] = t.a[6];
    cube.a[7] = t.a[9];
    cube.a[4] = t.a[8];
    cube.a[5] = t.a[5];
    cube.a[34] = t.a[37];
    cube.a[35] = t.a[38];
    cube.a[36] = t.a[39];
    cube.a[54] = t.a[34];
    cube.a[53] = t.a[35];
    cube.a[52] = t.a[36];
    cube.a[12] = t.a[54];
    cube.a[11] = t.a[53];
    cube.a[10] = t.a[52];
    cube.a[37] = t.a[12];
    cube.a[38] = t.a[11];
    cube.a[39] = t.a[10];
}
void move_u()
{
    Cube t = cube;
    cube.a[7] = t.a[1];
    cube.a[4] = t.a[2];
    cube.a[1] = t.a[3];
    cube.a[2] = t.a[6];
    cube.a[3] = t.a[9];
    cube.a[6] = t.a[8];
    cube.a[9] = t.a[7];
    cube.a[8] = t.a[4];
    cube.a[5] = t.a[5];
    cube.a[37] = t.a[34];
    cube.a[38] = t.a[35];
    cube.a[39] = t.a[36];
    cube.a[34] = t.a[54];
    cube.a[35] = t.a[53];
    cube.a[36] = t.a[52];
    cube.a[54] = t.a[12];
    cube.a[53] = t.a[11];
    cube.a[52] = t.a[10];
    cube.a[12] = t.a[37];
    cube.a[11] = t.a[38];
    cube.a[10] = t.a[39];
}
void move_D()
{
    Cube t = cube;
    cube.a[25] = t.a[19];
    cube.a[26] = t.a[22];
    cube.a[27] = t.a[25];
    cube.a[24] = t.a[26];
    cube.a[21] = t.a[27];
    cube.a[20] = t.a[24];
    cube.a[19] = t.a[21];
    cube.a[22] = t.a[20];
    cube.a[23] = t.a[23];
    cube.a[28] = t.a[43];
    cube.a[29] = t.a[44];
    cube.a[30] = t.a[45];
    cube.a[48] = t.a[28];
    cube.a[47] = t.a[29];
    cube.a[46] = t.a[30];
    cube.a[18] = t.a[48];
    cube.a[17] = t.a[47];
    cube.a[16] = t.a[46];
    cube.a[43] = t.a[18];
    cube.a[44] = t.a[17];
    cube.a[45] = t.a[16];
}
void move_d()
{
    Cube t = cube;
    cube.a[19] = t.a[25];
    cube.a[22] = t.a[26];
    cube.a[25] = t.a[27];
    cube.a[26] = t.a[24];
    cube.a[27] = t.a[21];
    cube.a[24] = t.a[20];
    cube.a[21] = t.a[19];
    cube.a[20] = t.a[22];
    cube.a[23] = t.a[23];
    cube.a[43] = t.a[28];
    cube.a[44] = t.a[29];
    cube.a[45] = t.a[30];
    cube.a[28] = t.a[48];
    cube.a[29] = t.a[47];
    cube.a[30] = t.a[46];
    cube.a[48] = t.a[18];
    cube.a[47] = t.a[17];
    cube.a[46] = t.a[16];
    cube.a[18] = t.a[43];
    cube.a[17] = t.a[44];
    cube.a[16] = t.a[45];
}
void move_L()
{
    Cube t = cube;
    cube.a[37] = t.a[43];
    cube.a[38] = t.a[40];
    cube.a[39] = t.a[37];
    cube.a[42] = t.a[38];
    cube.a[45] = t.a[39];
    cube.a[44] = t.a[42];
    cube.a[43] = t.a[45];
    cube.a[40] = t.a[44];
    cube.a[41] = t.a[41];
    cube.a[7] = t.a[16];
    cube.a[4] = t.a[13];
    cube.a[1] = t.a[10];
    cube.a[34] = t.a[7];
    cube.a[31] = t.a[4];
    cube.a[28] = t.a[1];
    cube.a[25] = t.a[34];
    cube.a[22] = t.a[31];
    cube.a[19] = t.a[28];
    cube.a[16] = t.a[25];
    cube.a[13] = t.a[22];
    cube.a[10] = t.a[19];
}
void move_l()
{
    Cube t = cube;
    cube.a[43] = t.a[37];
    cube.a[40] = t.a[38];
    cube.a[37] = t.a[39];
    cube.a[38] = t.a[42];
    cube.a[39] = t.a[45];
    cube.a[42] = t.a[44];
    cube.a[45] = t.a[43];
    cube.a[44] = t.a[40];
    cube.a[41] = t.a[41];
    cube.a[16] = t.a[7];
    cube.a[13] = t.a[4];
    cube.a[10] = t.a[1];
    cube.a[7] = t.a[34];
    cube.a[4] = t.a[31];
    cube.a[1] = t.a[28];
    cube.a[34] = t.a[25];
    cube.a[31] = t.a[22];
    cube.a[28] = t.a[19];
    cube.a[25] = t.a[16];
    cube.a[22] = t.a[13];
    cube.a[19] = t.a[10];
}
void move_B()
{
    Cube t = cube;
    cube.a[36] = t.a[30];
    cube.a[35] = t.a[33];
    cube.a[34] = t.a[36];
    cube.a[31] = t.a[35];
    cube.a[28] = t.a[34];
    cube.a[29] = t.a[31];
    cube.a[30] = t.a[28];
    cube.a[33] = t.a[29];
    cube.a[32] = t.a[32];
    cube.a[3] = t.a[48];
    cube.a[2] = t.a[51];
    cube.a[1] = t.a[54];
    cube.a[39] = t.a[3];
    cube.a[42] = t.a[2];
    cube.a[45] = t.a[1];
    cube.a[25] = t.a[39];
    cube.a[26] = t.a[42];
    cube.a[27] = t.a[45];
    cube.a[48] = t.a[25];
    cube.a[51] = t.a[26];
    cube.a[54] = t.a[27];

}
void move_b()
{
    Cube t = cube;
    cube.a[30] = t.a[36];
    cube.a[33] = t.a[35];
    cube.a[36] = t.a[34];
    cube.a[35] = t.a[31];
    cube.a[34] = t.a[28];
    cube.a[31] = t.a[29];
    cube.a[28] = t.a[30];
    cube.a[29] = t.a[33];
    cube.a[32] = t.a[32];
    cube.a[48] = t.a[3];
    cube.a[51] = t.a[2];
    cube.a[54] = t.a[1];
    cube.a[3] = t.a[39];
    cube.a[2] = t.a[42];
    cube.a[1] = t.a[45];
    cube.a[39] = t.a[25];
    cube.a[42] = t.a[26];
    cube.a[45] = t.a[27];
    cube.a[25] = t.a[48];
    cube.a[26] = t.a[51];
    cube.a[27] = t.a[54];

}
void move_X() {
    Cube t = cube;
    //U face
    cube.a[1] = t.a[54];
    cube.a[2] = t.a[51];
    cube.a[3] = t.a[48];
    cube.a[4] = t.a[53];
    cube.a[5] = t.a[50];
    cube.a[6] = t.a[47];
    cube.a[7] = t.a[52];
    cube.a[8] = t.a[49];
    cube.a[9] = t.a[46];
    //D face
    cube.a[19] = t.a[37];
    cube.a[20] = t.a[40];
    cube.a[21] = t.a[43];
    cube.a[22] = t.a[38];
    cube.a[23] = t.a[41];
    cube.a[24] = t.a[44];
    cube.a[25] = t.a[39];
    cube.a[26] = t.a[42];
    cube.a[27] = t.a[45];
    //L face
    cube.a[37] = t.a[9];
    cube.a[40] = t.a[8];
    cube.a[43] = t.a[7];
    cube.a[38] = t.a[6];
    cube.a[41] = t.a[5];
    cube.a[44] = t.a[4];
    cube.a[39] = t.a[3];
    cube.a[42] = t.a[2];
    cube.a[45] = t.a[1];
    //R face
    cube.a[54] = t.a[27];
    cube.a[51] = t.a[26];
    cube.a[48] = t.a[25];
    cube.a[53] = t.a[24];
    cube.a[50] = t.a[23];
    cube.a[47] = t.a[22];
    cube.a[52] = t.a[21];
    cube.a[49] = t.a[20];
    cube.a[46] = t.a[19];
    //F face
    cube.a[10] = t.a[12];
    cube.a[11] = t.a[15];
    cube.a[12] = t.a[18];
    cube.a[15] = t.a[17];
    cube.a[18] = t.a[16];
    cube.a[17] = t.a[13];
    cube.a[16] = t.a[10];
    cube.a[13] = t.a[11];
    cube.a[14] = t.a[14];
    //B face
    cube.a[34] = t.a[36];
    cube.a[35] = t.a[33];
    cube.a[36] = t.a[30];
    cube.a[33] = t.a[29];
    cube.a[30] = t.a[28];
    cube.a[29] = t.a[31];
    cube.a[28] = t.a[34];
    cube.a[31] = t.a[35];
    cube.a[32] = t.a[32];
}
void move_x() {
    Cube t = cube;
    //U face
    cube.a[54] = t.a[1];
    cube.a[51] = t.a[2];
    cube.a[48] = t.a[3];
    cube.a[53] = t.a[4];
    cube.a[50] = t.a[5];
    cube.a[47] = t.a[6];
    cube.a[52] = t.a[7];
    cube.a[49] = t.a[8];
    cube.a[46] = t.a[9];
    //D face
    cube.a[37] = t.a[19];
    cube.a[40] = t.a[20];
    cube.a[43] = t.a[21];
    cube.a[38] = t.a[22];
    cube.a[41] = t.a[23];
    cube.a[44] = t.a[24];
    cube.a[39] = t.a[25];
    cube.a[42] = t.a[26];
    cube.a[45] = t.a[27];
    //L face
    cube.a[9] = t.a[37];
    cube.a[8] = t.a[40];
    cube.a[7] = t.a[43];
    cube.a[6] = t.a[38];
    cube.a[5] = t.a[41];
    cube.a[4] = t.a[44];
    cube.a[3] = t.a[39];
    cube.a[2] = t.a[42];
    cube.a[1] = t.a[45];
    //R face
    cube.a[27] = t.a[54];
    cube.a[26] = t.a[51];
    cube.a[25] = t.a[48];
    cube.a[24] = t.a[53];
    cube.a[23] = t.a[50];
    cube.a[22] = t.a[47];
    cube.a[21] = t.a[52];
    cube.a[20] = t.a[49];
    cube.a[19] = t.a[46];
    //F face
    cube.a[12] = t.a[10];
    cube.a[15] = t.a[11];
    cube.a[18] = t.a[12];
    cube.a[17] = t.a[15];
    cube.a[16] = t.a[18];
    cube.a[13] = t.a[17];
    cube.a[10] = t.a[16];
    cube.a[11] = t.a[13];
    cube.a[14] = t.a[14];
    //B face
    cube.a[36] = t.a[34];
    cube.a[33] = t.a[35];
    cube.a[30] = t.a[36];
    cube.a[29] = t.a[33];
    cube.a[28] = t.a[30];
    cube.a[31] = t.a[29];
    cube.a[34] = t.a[28];
    cube.a[35] = t.a[31];
    cube.a[32] = t.a[32];
}
void move_Y() {
    Cube t = cube;
    //U face
    cube.a[7] = t.a[9];
    cube.a[8] = t.a[6];
    cube.a[9] = t.a[3];
    cube.a[6] = t.a[2];
    cube.a[3] = t.a[1];
    cube.a[2] = t.a[4];
    cube.a[1] = t.a[7];
    cube.a[4] = t.a[8];
    cube.a[5] = t.a[5];
    //D face
    cube.a[19] = t.a[21];
    cube.a[20] = t.a[24];
    cube.a[21] = t.a[27];
    cube.a[24] = t.a[26];
    cube.a[27] = t.a[25];
    cube.a[26] = t.a[22];
    cube.a[25] = t.a[19];
    cube.a[22] = t.a[20];
    cube.a[23] = t.a[23];
    //L face
    cube.a[37] = t.a[12];
    cube.a[38] = t.a[11];
    cube.a[39] = t.a[10];
    cube.a[40] = t.a[15];
    cube.a[41] = t.a[14];
    cube.a[42] = t.a[13];
    cube.a[43] = t.a[18];
    cube.a[44] = t.a[17];
    cube.a[45] = t.a[16];
    //R face
    cube.a[52] = t.a[36];
    cube.a[53] = t.a[35];
    cube.a[54] = t.a[34];
    cube.a[49] = t.a[33];
    cube.a[50] = t.a[32];
    cube.a[51] = t.a[31];
    cube.a[46] = t.a[30];
    cube.a[47] = t.a[29];
    cube.a[48] = t.a[28];
    //F face
    cube.a[10] = t.a[52];
    cube.a[11] = t.a[53];
    cube.a[12] = t.a[54];
    cube.a[13] = t.a[49];
    cube.a[14] = t.a[50];
    cube.a[15] = t.a[51];
    cube.a[16] = t.a[46];
    cube.a[17] = t.a[47];
    cube.a[18] = t.a[48];
    //B face
    cube.a[34] = t.a[37];
    cube.a[35] = t.a[38];
    cube.a[36] = t.a[39];
    cube.a[31] = t.a[40];
    cube.a[32] = t.a[41];
    cube.a[33] = t.a[42];
    cube.a[28] = t.a[43];
    cube.a[29] = t.a[44];
    cube.a[30] = t.a[45];
}
void move_y() {
    Cube t = cube;
    //U face
    cube.a[9] = t.a[7];
    cube.a[6] = t.a[8];
    cube.a[3] = t.a[9];
    cube.a[2] = t.a[6];
    cube.a[1] = t.a[3];
    cube.a[4] = t.a[2];
    cube.a[7] = t.a[1];
    cube.a[8] = t.a[4];
    cube.a[5] = t.a[5];
    //D face
    cube.a[21] = t.a[19];
    cube.a[24] = t.a[20];
    cube.a[27] = t.a[21];
    cube.a[26] = t.a[24];
    cube.a[25] = t.a[27];
    cube.a[22] = t.a[26];
    cube.a[19] = t.a[25];
    cube.a[20] = t.a[22];
    cube.a[23] = t.a[23];
    //L face
    cube.a[12] = t.a[37];
    cube.a[11] = t.a[38];
    cube.a[10] = t.a[39];
    cube.a[15] = t.a[40];
    cube.a[14] = t.a[41];
    cube.a[13] = t.a[42];
    cube.a[18] = t.a[43];
    cube.a[17] = t.a[44];
    cube.a[16] = t.a[45];
    //R face
    cube.a[36] = t.a[52];
    cube.a[35] = t.a[53];
    cube.a[34] = t.a[54];
    cube.a[33] = t.a[49];
    cube.a[32] = t.a[50];
    cube.a[31] = t.a[51];
    cube.a[30] = t.a[46];
    cube.a[29] = t.a[47];
    cube.a[28] = t.a[48];
    //F face
    cube.a[52] = t.a[10];
    cube.a[53] = t.a[11];
    cube.a[54] = t.a[12];
    cube.a[49] = t.a[13];
    cube.a[50] = t.a[14];
    cube.a[51] = t.a[15];
    cube.a[46] = t.a[16];
    cube.a[47] = t.a[17];
    cube.a[48] = t.a[18];
    //B face
    cube.a[37] = t.a[34];
    cube.a[38] = t.a[35];
    cube.a[39] = t.a[36];
    cube.a[40] = t.a[31];
    cube.a[41] = t.a[32];
    cube.a[42] = t.a[33];
    cube.a[43] = t.a[28];
    cube.a[44] = t.a[29];
    cube.a[45] = t.a[30];
}
void move_Z() {
    Cube t = cube;
    //U face
    cube.a[1] = t.a[28];
    cube.a[2] = t.a[29];
    cube.a[3] = t.a[30];
    cube.a[4] = t.a[31];
    cube.a[5] = t.a[32];
    cube.a[6] = t.a[33];
    cube.a[7] = t.a[34];
    cube.a[8] = t.a[35];
    cube.a[9] = t.a[36];
    //D face
    cube.a[19] = t.a[10];
    cube.a[20] = t.a[11];
    cube.a[21] = t.a[12];
    cube.a[22] = t.a[13];
    cube.a[23] = t.a[14];
    cube.a[24] = t.a[15];
    cube.a[25] = t.a[16];
    cube.a[26] = t.a[17];
    cube.a[27] = t.a[18];
    //L face
    cube.a[37] = t.a[39];
    cube.a[38] = t.a[42];
    cube.a[39] = t.a[45];
    cube.a[42] = t.a[44];
    cube.a[45] = t.a[43];
    cube.a[44] = t.a[40];
    cube.a[43] = t.a[37];
    cube.a[40] = t.a[38];
    cube.a[41] = t.a[41];
    //R face
    cube.a[52] = t.a[54];
    cube.a[53] = t.a[51];
    cube.a[54] = t.a[48];
    cube.a[51] = t.a[47];
    cube.a[48] = t.a[46];
    cube.a[47] = t.a[49];
    cube.a[46] = t.a[52];
    cube.a[49] = t.a[53];
    cube.a[50] = t.a[50];
    //F face
    cube.a[10] = t.a[1];
    cube.a[11] = t.a[2];
    cube.a[12] = t.a[3];
    cube.a[13] = t.a[4];
    cube.a[14] = t.a[5];
    cube.a[15] = t.a[6];
    cube.a[16] = t.a[7];
    cube.a[17] = t.a[8];
    cube.a[18] = t.a[9];
    //B face
    cube.a[34] = t.a[25];
    cube.a[35] = t.a[26];
    cube.a[36] = t.a[27];
    cube.a[31] = t.a[22];
    cube.a[32] = t.a[23];
    cube.a[33] = t.a[24];
    cube.a[28] = t.a[19];
    cube.a[29] = t.a[20];
    cube.a[30] = t.a[21];
}
void move_z() {
    Cube t = cube;
    //U face
    cube.a[28] = t.a[1];
    cube.a[29] = t.a[2];
    cube.a[30] = t.a[3];
    cube.a[31] = t.a[4];
    cube.a[32] = t.a[5];
    cube.a[33] = t.a[6];
    cube.a[34] = t.a[7];
    cube.a[35] = t.a[8];
    cube.a[36] = t.a[9];
    //D face
    cube.a[10] = t.a[19];
    cube.a[11] = t.a[20];
    cube.a[12] = t.a[21];
    cube.a[13] = t.a[22];
    cube.a[14] = t.a[23];
    cube.a[15] = t.a[24];
    cube.a[16] = t.a[25];
    cube.a[17] = t.a[26];
    cube.a[18] = t.a[27];
    //L face
    cube.a[39] = t.a[37];
    cube.a[42] = t.a[38];
    cube.a[45] = t.a[39];
    cube.a[44] = t.a[42];
    cube.a[43] = t.a[45];
    cube.a[40] = t.a[44];
    cube.a[37] = t.a[43];
    cube.a[38] = t.a[40];
    cube.a[41] = t.a[41];
    //R face
    cube.a[54] = t.a[52];
    cube.a[51] = t.a[53];
    cube.a[48] = t.a[54];
    cube.a[47] = t.a[51];
    cube.a[46] = t.a[48];
    cube.a[49] = t.a[47];
    cube.a[52] = t.a[46];
    cube.a[53] = t.a[49];
    cube.a[50] = t.a[50];
    //F face
    cube.a[1] = t.a[10];
    cube.a[2] = t.a[11];
    cube.a[3] = t.a[12];
    cube.a[4] = t.a[13];
    cube.a[5] = t.a[14];
    cube.a[6] = t.a[15];
    cube.a[7] = t.a[16];
    cube.a[8] = t.a[17];
    cube.a[9] = t.a[18];
    //B face
    cube.a[25] = t.a[34];
    cube.a[26] = t.a[35];
    cube.a[27] = t.a[36];
    cube.a[22] = t.a[31];
    cube.a[23] = t.a[32];
    cube.a[24] = t.a[33];
    cube.a[19] = t.a[28];
    cube.a[20] = t.a[29];
    cube.a[21] = t.a[30];
}
