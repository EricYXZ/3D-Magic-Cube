#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include <GL/glew.h>
#include <GL/glut.h>
#include <GL/freeglut.h>
#include <GL/gl.h>
#include <gl/GLU.h>
#include <easyx.h>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Cube
{
    int a[55] = { 0 };
    queue<char> step;
};

extern char Version_Information[];
extern int f1, f2, f3, f4, f5, f6, f_allX, f_allx, f_allY, f_ally, f_allZ, f_allz, f_left, f_right, f_up, f_down, f_front, f_behind;
extern const float PI;
extern const float ag;
extern const float l;
extern const float clr;
extern float R, G, B;
extern int CHANGE, idx, stop, Flag, OK, Angle;
extern char Path_Record[100000];
extern float Ox, Oy, Oz;
extern float lookx, lookz, looky;
extern bool LEFT_isDragging;
extern bool RIGHT_isDragging;
extern bool MIDDLE_isDragging;
extern float rot;
extern int speed;
extern IMAGE Show_How_Use;
extern GLuint textureID;
extern Cube cube, Aim_Cube;

extern GLfloat red[18][4][3];
extern GLfloat green[18][4][3];
extern GLfloat orange[18][4][3];
extern GLfloat blue[18][4][3];
extern GLfloat white[18][4][3];
extern GLfloat yellow[18][4][3];
extern GLfloat color[6][3];
extern GLfloat texture[4][4];

void init();
void inite_cube_color();
void Inite_EasyX();
void Draw_TEXT(int x, int y, int w, int h, const char* text);
bool CHECK_F(GLfloat a[][4][3], int i);
bool CHECK_R(GLfloat a[][4][3], int i);
bool CHECK_U(GLfloat a[][4][3], int i);
bool CHECK_D(GLfloat a[][4][3], int i);
bool CHECK_L(GLfloat a[][4][3], int i);
bool CHECK_B(GLfloat a[][4][3], int i);
bool CHECK_ALL(Cube t);
int inter(float f);
bool CHECK_CUBE(GLfloat a[][4][3], GLfloat b[][4][3], GLfloat c[][4][3], GLfloat d[][4][3], GLfloat e[][4][3], GLfloat f[][4][3]);
void turn_fF(int USELESS);
void turn_fR(int USELESS);
void turn_fU(int USELESS);
void turn_fD(int USELESS);
void turn_fL(int USELESS);
void turn_fB(int USELESS);
void turn_ff(int USELESS);
void turn_fr(int USELESS);
void turn_fu(int USELESS);
void turn_fd(int USELESS);
void turn_fl(int USELESS);
void turn_fb(int USELESS);
void turn_allX(int USELESS);
void turn_allx(int USELESS);
void turn_allY(int USELESS);
void turn_ally(int USELESS);
void turn_allZ(int USELESS);
void turn_allz(int USELESS);
void move_left(int USELESS);
void move_right(int USELESS);
void move_up(int USELESS);
void move_down(int USELESS);
void move_front(int USELESS);
void move_behind(int USELESS);
void move_F();
void move_R();
void move_U();
void move_D();
void move_L();
void move_B();
void move_f();
void move_r();
void move_u();
void move_d();
void move_l();
void move_b();
void move_X();
void move_x();
void move_Y();
void move_y();
void move_Z();
void move_z();
void CORRECT_Y(int a[]);
void CORRECT_XZ(int a[]);
void SOLVE_WHITE_ORANGE_RIDGE(int a[]);
void SOLVE_WHITE_GREEN_RIDGE(int a[]);
void SOLVE_WHITE_RED_RIDGE(int a[]);
void SOLVE_WHITE_BLUE_RIDGE(int a[]);
void SOLVE_ORANGE_GREEN_CORNOR(int a[]);
void SOLVE_GREEN_RED_CORNOR(int a[]);
void SOLVE_RED_BLUE_CORNOR(int a[]);
void SOLVE_BLUE_ORANDE_CORNOR(int a[]);
void SOLVE_ORANGE_GREEN_RIDGE(int a[]);
void SOLVE_GREEN_RED_RIDGE(int a[]);
void SOLVE_RED_BLUE_RIDGE(int a[]);
void SOLVE_BLUE_ORANGE_RIDGE(int a[]);
void SOLVE_ORIENT(int a[]);
void SOLVE_PERMUT(int a[]);
void TRANS_COLOR(int a[]);
void FIND_RECOVER_PATH();
void AUTOMATIC_RECOVERY(int idx);
void performNextScrambleMove(int idx);
void Scramblecube();
void Mos_Left_turn_look(int USELESS);
void Mos_Right_turn_look(int USELESS);
void Mos_Middle_turn_look(int USELESS);
void GL_mouseCallback(int button, int state, int x, int y);
void onKeyboard(unsigned char key, int x, int y);
void loadTexture(const char* filename);
void myDisplay();