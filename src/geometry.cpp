#include "PocketCube.h"

bool CHECK_F(GLfloat a[][4][3], int i)
{
    for (int j = 0; j < 4; j++)
        if (a[i][j][0] - Ox < 9) return false;
    return true;

}
bool CHECK_R(GLfloat a[][4][3], int i)
{
    for (int j = 0; j < 4; j++)
        if (a[i][j][2] - Oz > -9) return false;
    return true;
}
bool CHECK_U(GLfloat a[][4][3], int i)
{
    for (int j = 0; j < 4; j++)
        if (a[i][j][1] - Oy < 9)  return false;
    return true;
}
bool CHECK_D(GLfloat a[][4][3], int i)
{
    for (int j = 0; j < 4; j++)
        if (a[i][j][1] - Oy > -9)  return false;
    return true;
}
bool CHECK_L(GLfloat a[][4][3], int i)
{
    for (int j = 0; j < 4; j++)
        if (a[i][j][2] - Oz < 9)  return false;
    return true;
}
bool CHECK_B(GLfloat a[][4][3], int i)
{
    for (int j = 0; j < 4; j++)
        if (a[i][j][0] - Ox > -9)  return false;
    return true;
}
bool CHECK_ALL(Cube t)
{
    if (t.a[1] == t.a[2] && t.a[1] == t.a[3] && t.a[1] == t.a[4] && t.a[1] == t.a[5] && t.a[1] == t.a[6] && t.a[1] == t.a[7] && t.a[1] == t.a[8] && t.a[1] == t.a[9] &&
        t.a[10] == t.a[11] && t.a[10] == t.a[12] && t.a[10] == t.a[13] && t.a[10] == t.a[14] && t.a[10] == t.a[15] && t.a[10] == t.a[16] && t.a[10] == t.a[17] && t.a[10] == t.a[18] &&
        t.a[19] == t.a[20] && t.a[19] == t.a[21] && t.a[19] == t.a[22] && t.a[19] == t.a[23] && t.a[19] == t.a[24] && t.a[19] == t.a[25] && t.a[19] == t.a[26] && t.a[19] == t.a[27] &&
        t.a[28] == t.a[29] && t.a[28] == t.a[30] && t.a[28] == t.a[31] && t.a[28] == t.a[32] && t.a[28] == t.a[33] && t.a[28] == t.a[34] && t.a[28] == t.a[35] && t.a[28] == t.a[36] &&
        t.a[37] == t.a[38] && t.a[37] == t.a[39] && t.a[37] == t.a[40] && t.a[37] == t.a[41] && t.a[37] == t.a[42] && t.a[37] == t.a[43] && t.a[37] == t.a[44] && t.a[37] == t.a[45] &&
        t.a[46] == t.a[47] && t.a[46] == t.a[48] && t.a[46] == t.a[49] && t.a[46] == t.a[50] && t.a[46] == t.a[51] && t.a[46] == t.a[52] && t.a[46] == t.a[53] && t.a[46] == t.a[54]
        )
        return true;
    else return false;
}
int inter(float f) {
    float x = abs(floor(f) - f);
    float y = abs(floor(f) + 1 - f);
    if (x < y) return floor(f);
    else return floor(f) + 1;
}
bool CHECK_CUBE(GLfloat a[][4][3], GLfloat b[][4][3], GLfloat c[][4][3], GLfloat d[][4][3], GLfloat e[][4][3], GLfloat f[][4][3]) {
    int n = 0;
    GLfloat p = 0.001;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 3; j++) {
            if (abs(inter(a[i][0][j]) - a[i][0][j]) <= p) n++;
        }
    }
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 3; j++) {
            if (abs(inter(b[i][0][j]) - b[i][0][j]) <= p) n++;
        }
    }
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 3; j++) {
            if (abs(inter(c[i][0][j]) - c[i][0][j]) <= p) n++;
        }
    }
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 3; j++) {
            if (abs(inter(d[i][0][j]) - d[i][0][j]) <= p) n++;
        }
    }
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 3; j++) {
            if (abs(inter(e[i][0][j]) - e[i][0][j]) <= p) n++;
        }
    }
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 3; j++) {
            if (abs(inter(f[i][0][j]) - f[i][0][j]) <= p) n++;
        }
    }
    if (n == 162) return true;
    else return false;
}
//处理键盘鼠标事件，实现旋转和平移效果
void turn_fF(int USELESS)

{
    if (f2 < 9)
    {
        //红色变
        for (int i = 0; i < 18; i++)
            if (CHECK_F(red, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat ty = red[i][j][1] - Oy;
                    GLfloat tz = red[i][j][2] - Oz;
                    red[i][j][1] = (ty * cos(ag)) - ((tz * sin(ag)) * CHANGE) + Oy;
                    red[i][j][2] = ((ty * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        //绿色变
        for (int i = 0; i < 18; i++)
            if (CHECK_F(green, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat ty = green[i][j][1] - Oy;
                    GLfloat tz = green[i][j][2] - Oz;
                    green[i][j][1] = (ty * cos(ag)) - ((tz * sin(ag)) * CHANGE) + Oy;
                    green[i][j][2] = ((ty * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        //橙色变
        for (int i = 0; i < 18; i++)
            if (CHECK_F(orange, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat ty = orange[i][j][1] - Oy;
                    GLfloat tz = orange[i][j][2] - Oz;
                    orange[i][j][1] = (ty * cos(ag)) - ((tz * sin(ag)) * CHANGE) + Oy;
                    orange[i][j][2] = ((ty * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        //蓝色变
        for (int i = 0; i < 18; i++)
            if (CHECK_F(blue, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat ty = blue[i][j][1] - Oy;
                    GLfloat tz = blue[i][j][2] - Oz;
                    blue[i][j][1] = (ty * cos(ag)) - ((tz * sin(ag)) * CHANGE) + Oy;
                    blue[i][j][2] = ((ty * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        //白色变
        for (int i = 0; i < 18; i++)
            if (CHECK_F(white, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat ty = white[i][j][1] - Oy;
                    GLfloat tz = white[i][j][2] - Oz;
                    white[i][j][1] = (ty * cos(ag)) - ((tz * sin(ag)) * CHANGE) + Oy;
                    white[i][j][2] = ((ty * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        //黄色变
        for (int i = 0; i < 18; i++)
            if (CHECK_F(yellow, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat ty = yellow[i][j][1] - Oy;
                    GLfloat tz = yellow[i][j][2] - Oz;
                    yellow[i][j][1] = (ty * cos(ag)) - ((tz * sin(ag)) * CHANGE) + Oy;
                    yellow[i][j][2] = ((ty * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        glutPostRedisplay();
        glutTimerFunc(10, turn_fF, 1);
        f2++;
    }
    else {
        f2 = 0;
        if (Flag) AUTOMATIC_RECOVERY(++idx);
    }
}
void turn_ff(int USELESS)

{
    if (f2 < 9)
    {
        //红色变
        for (int i = 0; i < 18; i++)
            if (CHECK_F(red, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat ty = red[i][j][1] - Oy;
                    GLfloat tz = red[i][j][2] - Oz;
                    red[i][j][1] = (ty * cos(ag)) + ((tz * sin(ag)) * CHANGE) + Oy;
                    red[i][j][2] = (-(ty * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        //绿色变
        for (int i = 0; i < 18; i++)
            if (CHECK_F(green, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat ty = green[i][j][1] - Oy;
                    GLfloat tz = green[i][j][2] - Oz;
                    green[i][j][1] = (ty * cos(ag)) + ((tz * sin(ag)) * CHANGE) + Oy;
                    green[i][j][2] = (-(ty * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        //橙色变
        for (int i = 0; i < 18; i++)
            if (CHECK_F(orange, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat ty = orange[i][j][1] - Oy;
                    GLfloat tz = orange[i][j][2] - Oz;
                    orange[i][j][1] = (ty * cos(ag)) + ((tz * sin(ag)) * CHANGE) + Oy;
                    orange[i][j][2] = (-(ty * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        //蓝色变
        for (int i = 0; i < 18; i++)
            if (CHECK_F(blue, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat ty = blue[i][j][1] - Oy;
                    GLfloat tz = blue[i][j][2] - Oz;
                    blue[i][j][1] = (ty * cos(ag)) + ((tz * sin(ag)) * CHANGE) + Oy;
                    blue[i][j][2] = (-(ty * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        //白色变
        for (int i = 0; i < 18; i++)
            if (CHECK_F(white, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat ty = white[i][j][1] - Oy;
                    GLfloat tz = white[i][j][2] - Oz;
                    white[i][j][1] = (ty * cos(ag)) + ((tz * sin(ag)) * CHANGE) + Oy;
                    white[i][j][2] = (-(ty * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        //黄色变
        for (int i = 0; i < 18; i++)
            if (CHECK_F(yellow, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat ty = yellow[i][j][1] - Oy;
                    GLfloat tz = yellow[i][j][2] - Oz;
                    yellow[i][j][1] = (ty * cos(ag)) + ((tz * sin(ag)) * CHANGE) + Oy;
                    yellow[i][j][2] = (-(ty * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        glutPostRedisplay();
        glutTimerFunc(10, turn_ff, 1);
        f2++;
    }
    else {
        f2 = 0;
        if (Flag) AUTOMATIC_RECOVERY(++idx);
    }
}
void turn_fR(int USELESS)
{
    if (f1 < 9)
    {
        //红色变
        for (int i = 0; i < 18; i++)
            if (CHECK_R(red, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = red[i][j][0] - Ox;
                    GLfloat ty = red[i][j][1] - Oy;
                    red[i][j][0] = (tx * cos(ag)) - ((ty * sin(ag)) * CHANGE) + Ox;
                    red[i][j][1] = ((tx * sin(ag)) * CHANGE) + (ty * cos(ag)) + Oy;
                }
            }

        //绿色变
        for (int i = 0; i < 18; i++)
            if (CHECK_R(green, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = green[i][j][0] - Ox;
                    GLfloat ty = green[i][j][1] - Oy;
                    green[i][j][0] = (tx * cos(ag)) - ((ty * sin(ag)) * CHANGE) + Ox;
                    green[i][j][1] = ((tx * sin(ag)) * CHANGE) + (ty * cos(ag)) + Oy;
                }
            }

        //橙色变
        for (int i = 0; i < 18; i++)
            if (CHECK_R(orange, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = orange[i][j][0] - Ox;
                    GLfloat ty = orange[i][j][1] - Oy;
                    orange[i][j][0] = (tx * cos(ag)) - ((ty * sin(ag)) * CHANGE) + Ox;
                    orange[i][j][1] = ((tx * sin(ag)) * CHANGE) + (ty * cos(ag)) + Oy;
                }
            }

        //蓝色变
        for (int i = 0; i < 18; i++)
            if (CHECK_R(blue, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = blue[i][j][0] - Ox;
                    GLfloat ty = blue[i][j][1] - Oy;
                    blue[i][j][0] = (tx * cos(ag)) - ((ty * sin(ag)) * CHANGE) + Ox;
                    blue[i][j][1] = ((tx * sin(ag)) * CHANGE) + (ty * cos(ag)) + Oy;
                }
            }

        //白色变
        for (int i = 0; i < 18; i++)
            if (CHECK_R(white, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = white[i][j][0] - Ox;
                    GLfloat ty = white[i][j][1] - Oy;
                    white[i][j][0] = (tx * cos(ag)) - ((ty * sin(ag)) * CHANGE) + Ox;
                    white[i][j][1] = ((tx * sin(ag)) * CHANGE) + (ty * cos(ag)) + Oy;
                }
            }

        //黄色变
        for (int i = 0; i < 18; i++)
            if (CHECK_R(yellow, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = yellow[i][j][0] - Ox;
                    GLfloat ty = yellow[i][j][1] - Oy;
                    yellow[i][j][0] = (tx * cos(ag)) - ((ty * sin(ag)) * CHANGE) + Ox;
                    yellow[i][j][1] = ((tx * sin(ag)) * CHANGE) + (ty * cos(ag)) + Oy;
                }
            }
        glutPostRedisplay();
        glutTimerFunc(10, turn_fR, 1);
        f1++;
    }
    else {
        f1 = 0;
        if (Flag)  AUTOMATIC_RECOVERY(++idx);
    }
}
void turn_fr(int USELESS)
{
    if (f1 < 9)
    {
        //红色变
        for (int i = 0; i < 18; i++)
            if (CHECK_R(red, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = red[i][j][0] - Ox;
                    GLfloat ty = red[i][j][1] - Oy;
                    red[i][j][0] = (tx * cos(ag)) + ((ty * sin(ag)) * CHANGE) + Ox;
                    red[i][j][1] = (-(tx * sin(ag)) * CHANGE) + (ty * cos(ag)) + Oy;
                }
            }

        //绿色变
        for (int i = 0; i < 18; i++)
            if (CHECK_R(green, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = green[i][j][0] - Ox;
                    GLfloat ty = green[i][j][1] - Oy;
                    green[i][j][0] = (tx * cos(ag)) + ((ty * sin(ag)) * CHANGE) + Ox;
                    green[i][j][1] = (-(tx * sin(ag)) * CHANGE) + (ty * cos(ag)) + Oy;
                }
            }

        //橙色变
        for (int i = 0; i < 18; i++)
            if (CHECK_R(orange, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = orange[i][j][0] - Ox;
                    GLfloat ty = orange[i][j][1] - Oy;
                    orange[i][j][0] = (tx * cos(ag)) + ((ty * sin(ag)) * CHANGE) + Ox;
                    orange[i][j][1] = (-(tx * sin(ag)) * CHANGE) + (ty * cos(ag)) + Oy;
                }
            }

        //蓝色变
        for (int i = 0; i < 18; i++)
            if (CHECK_R(blue, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = blue[i][j][0] - Ox;
                    GLfloat ty = blue[i][j][1] - Oy;
                    blue[i][j][0] = (tx * cos(ag)) + ((ty * sin(ag)) * CHANGE) + Ox;
                    blue[i][j][1] = (-(tx * sin(ag)) * CHANGE) + (ty * cos(ag)) + Oy;
                }
            }

        //白色变
        for (int i = 0; i < 18; i++)
            if (CHECK_R(white, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = white[i][j][0] - Ox;
                    GLfloat ty = white[i][j][1] - Oy;
                    white[i][j][0] = (tx * cos(ag)) + ((ty * sin(ag)) * CHANGE) + Ox;
                    white[i][j][1] = (-(tx * sin(ag)) * CHANGE) + (ty * cos(ag)) + Oy;
                }
            }

        //黄色变
        for (int i = 0; i < 18; i++)
            if (CHECK_R(yellow, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = yellow[i][j][0] - Ox;
                    GLfloat ty = yellow[i][j][1] - Oy;
                    yellow[i][j][0] = (tx * cos(ag)) + ((ty * sin(ag)) * CHANGE) + Ox;
                    yellow[i][j][1] = (-(tx * sin(ag)) * CHANGE) + (ty * cos(ag)) + Oy;
                }
            }
        glutPostRedisplay();
        glutTimerFunc(10, turn_fr, 1);
        f1++;
    }
    else {
        f1 = 0;
        if (Flag)  AUTOMATIC_RECOVERY(++idx);
    }
}
void turn_fU(int USELESS)
{
    if (f3 < 9)
    {
        //红色变
        for (int i = 0; i < 18; i++)
            if (CHECK_U(red, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = red[i][j][0] - Ox;
                    GLfloat tz = red[i][j][2] - Oz;
                    red[i][j][0] = (tx * cos(ag)) - ((tz * sin(ag)) * CHANGE) + Ox;
                    red[i][j][2] = ((tx * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        for (int i = 0; i < 18; i++)
            if (CHECK_U(green, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = green[i][j][0] - Ox;
                    GLfloat tz = green[i][j][2] - Oz;
                    green[i][j][0] = (tx * cos(ag)) - ((tz * sin(ag)) * CHANGE) + Ox;
                    green[i][j][2] = ((tx * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        for (int i = 0; i < 18; i++)
            if (CHECK_U(orange, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = orange[i][j][0] - Ox;
                    GLfloat tz = orange[i][j][2] - Oz;
                    orange[i][j][0] = (tx * cos(ag)) - ((tz * sin(ag)) * CHANGE) + Ox;
                    orange[i][j][2] = ((tx * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        for (int i = 0; i < 18; i++)
            if (CHECK_U(blue, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = blue[i][j][0] - Ox;
                    GLfloat tz = blue[i][j][2] - Oz;
                    blue[i][j][0] = (tx * cos(ag)) - ((tz * sin(ag)) * CHANGE) + Ox;
                    blue[i][j][2] = ((tx * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        for (int i = 0; i < 18; i++)
            if (CHECK_U(white, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = white[i][j][0] - Ox;
                    GLfloat tz = white[i][j][2] - Oz;
                    white[i][j][0] = (tx * cos(ag)) - ((tz * sin(ag)) * CHANGE) + Ox;
                    white[i][j][2] = ((tx * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        for (int i = 0; i < 18; i++)
            if (CHECK_U(yellow, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = yellow[i][j][0] - Ox;
                    GLfloat tz = yellow[i][j][2] - Oz;
                    yellow[i][j][0] = (tx * cos(ag)) - ((tz * sin(ag)) * CHANGE) + Ox;
                    yellow[i][j][2] = ((tx * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }
        glutPostRedisplay();
        glutTimerFunc(10, turn_fU, 1);
        f3++;

    }
    else {
        f3 = 0;
        if (Flag) AUTOMATIC_RECOVERY(++idx);
    }
}
void turn_fu(int USELESS)
{
    if (f3 < 9)
    {
        //红色变
        for (int i = 0; i < 18; i++)
            if (CHECK_U(red, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = red[i][j][0] - Ox;
                    GLfloat tz = red[i][j][2] - Oz;
                    red[i][j][0] = (tx * cos(ag)) + ((tz * sin(ag)) * CHANGE) + Ox;
                    red[i][j][2] = (-(tx * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        for (int i = 0; i < 18; i++)
            if (CHECK_U(green, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = green[i][j][0] - Ox;
                    GLfloat tz = green[i][j][2] - Oz;
                    green[i][j][0] = (tx * cos(ag)) + ((tz * sin(ag)) * CHANGE) + Ox;
                    green[i][j][2] = (-(tx * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        for (int i = 0; i < 18; i++)
            if (CHECK_U(orange, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = orange[i][j][0] - Ox;
                    GLfloat tz = orange[i][j][2] - Oz;
                    orange[i][j][0] = (tx * cos(ag)) + ((tz * sin(ag)) * CHANGE) + Ox;
                    orange[i][j][2] = (-(tx * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        for (int i = 0; i < 18; i++)
            if (CHECK_U(blue, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = blue[i][j][0] - Ox;
                    GLfloat tz = blue[i][j][2] - Oz;
                    blue[i][j][0] = (tx * cos(ag)) + ((tz * sin(ag)) * CHANGE) + Ox;
                    blue[i][j][2] = (-(tx * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        for (int i = 0; i < 18; i++)
            if (CHECK_U(white, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = white[i][j][0] - Ox;
                    GLfloat tz = white[i][j][2] - Oz;
                    white[i][j][0] = (tx * cos(ag)) + ((tz * sin(ag)) * CHANGE) + Ox;
                    white[i][j][2] = (-(tx * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        for (int i = 0; i < 18; i++)
            if (CHECK_U(yellow, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = yellow[i][j][0] - Ox;
                    GLfloat tz = yellow[i][j][2] - Oz;
                    yellow[i][j][0] = (tx * cos(ag)) + ((tz * sin(ag)) * CHANGE) + Ox;
                    yellow[i][j][2] = (-(tx * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }
        glutPostRedisplay();
        glutTimerFunc(10, turn_fu, 1);
        f3++;

    }
    else {
        f3 = 0;
        if (Flag) AUTOMATIC_RECOVERY(++idx);
    }
}
void turn_fD(int USELESS)
{
    if (f4 < 9)
    {
        //红色变
        for (int i = 0; i < 18; i++)
            if (CHECK_D(red, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = red[i][j][0] - Ox;
                    GLfloat tz = red[i][j][2] - Oz;
                    red[i][j][0] = (tx * cos(ag)) - ((tz * sin(ag)) * CHANGE) + Ox;
                    red[i][j][2] = ((tx * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        for (int i = 0; i < 18; i++)
            if (CHECK_D(green, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = green[i][j][0] - Ox;
                    GLfloat tz = green[i][j][2] - Oz;
                    green[i][j][0] = (tx * cos(ag)) - ((tz * sin(ag)) * CHANGE) + Ox;
                    green[i][j][2] = ((tx * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        for (int i = 0; i < 18; i++)
            if (CHECK_D(orange, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = orange[i][j][0] - Ox;
                    GLfloat tz = orange[i][j][2] - Oz;
                    orange[i][j][0] = (tx * cos(ag)) - ((tz * sin(ag)) * CHANGE) + Ox;
                    orange[i][j][2] = ((tx * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        for (int i = 0; i < 18; i++)
            if (CHECK_D(blue, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = blue[i][j][0] - Ox;
                    GLfloat tz = blue[i][j][2] - Oz;
                    blue[i][j][0] = (tx * cos(ag)) - ((tz * sin(ag)) * CHANGE) + Ox;
                    blue[i][j][2] = ((tx * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        for (int i = 0; i < 18; i++)
            if (CHECK_D(white, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = white[i][j][0] - Ox;
                    GLfloat tz = white[i][j][2] - Oz;
                    white[i][j][0] = (tx * cos(ag)) - ((tz * sin(ag)) * CHANGE) + Ox;
                    white[i][j][2] = ((tx * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        for (int i = 0; i < 18; i++)
            if (CHECK_D(yellow, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = yellow[i][j][0] - Ox;
                    GLfloat tz = yellow[i][j][2] - Oz;
                    yellow[i][j][0] = (tx * cos(ag)) - ((tz * sin(ag)) * CHANGE) + Ox;
                    yellow[i][j][2] = ((tx * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }
        glutPostRedisplay();
        glutTimerFunc(10, turn_fD, 1);
        f4++;

    }
    else
    {
        f4 = 0;
        if (Flag) AUTOMATIC_RECOVERY(++idx);
    }
}
void turn_fd(int USELESS)
{
    if (f4 < 9)
    {
        //红色变
        for (int i = 0; i < 18; i++)
            if (CHECK_D(red, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = red[i][j][0] - Ox;
                    GLfloat tz = red[i][j][2] - Oz;
                    red[i][j][0] = (tx * cos(ag)) + ((tz * sin(ag)) * CHANGE) + Ox;
                    red[i][j][2] = (-(tx * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        for (int i = 0; i < 18; i++)
            if (CHECK_D(green, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = green[i][j][0] - Ox;
                    GLfloat tz = green[i][j][2] - Oz;
                    green[i][j][0] = (tx * cos(ag)) + ((tz * sin(ag)) * CHANGE) + Ox;
                    green[i][j][2] = (-(tx * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        for (int i = 0; i < 18; i++)
            if (CHECK_D(orange, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = orange[i][j][0] - Ox;
                    GLfloat tz = orange[i][j][2] - Oz;
                    orange[i][j][0] = (tx * cos(ag)) + ((tz * sin(ag)) * CHANGE) + Ox;
                    orange[i][j][2] = (-(tx * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        for (int i = 0; i < 18; i++)
            if (CHECK_D(blue, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = blue[i][j][0] - Ox;
                    GLfloat tz = blue[i][j][2] - Oz;
                    blue[i][j][0] = (tx * cos(ag)) + ((tz * sin(ag)) * CHANGE) + Ox;
                    blue[i][j][2] = (-(tx * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        for (int i = 0; i < 18; i++)
            if (CHECK_D(white, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = white[i][j][0] - Ox;
                    GLfloat tz = white[i][j][2] - Oz;
                    white[i][j][0] = (tx * cos(ag)) + ((tz * sin(ag)) * CHANGE) + Ox;
                    white[i][j][2] = (-(tx * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        for (int i = 0; i < 18; i++)
            if (CHECK_D(yellow, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = yellow[i][j][0] - Ox;
                    GLfloat tz = yellow[i][j][2] - Oz;
                    yellow[i][j][0] = (tx * cos(ag)) + ((tz * sin(ag)) * CHANGE) + Ox;
                    yellow[i][j][2] = (-(tx * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }
        glutPostRedisplay();
        glutTimerFunc(10, turn_fd, 1);
        f4++;

    }
    else
    {
        f4 = 0;
        if (Flag) AUTOMATIC_RECOVERY(++idx);
    }
}
void turn_fL(int USELESS)
{
    if (f5 < 9)
    {

        //红色变
        for (int i = 0; i < 18; i++)
            if (CHECK_L(red, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = red[i][j][0] - Ox;
                    GLfloat ty = red[i][j][1] - Oy;
                    red[i][j][0] = (tx * cos(ag)) - ((ty * sin(ag)) * CHANGE) + Ox;
                    red[i][j][1] = ((tx * sin(ag)) * CHANGE) + (ty * cos(ag)) + Oy;
                }
            }

        //绿色变
        for (int i = 0; i < 18; i++)
            if (CHECK_L(green, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = green[i][j][0] - Ox;
                    GLfloat ty = green[i][j][1] - Oy;
                    green[i][j][0] = (tx * cos(ag)) - ((ty * sin(ag)) * CHANGE) + Ox;
                    green[i][j][1] = ((tx * sin(ag)) * CHANGE) + (ty * cos(ag)) + Oy;
                }
            }

        //橙色变
        for (int i = 0; i < 18; i++)
            if (CHECK_L(orange, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = orange[i][j][0] - Ox;
                    GLfloat ty = orange[i][j][1] - Oy;
                    orange[i][j][0] = (tx * cos(ag)) - ((ty * sin(ag)) * CHANGE) + Ox;
                    orange[i][j][1] = ((tx * sin(ag)) * CHANGE) + (ty * cos(ag)) + Oy;
                }
            }

        //蓝色变
        for (int i = 0; i < 18; i++)
            if (CHECK_L(blue, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = blue[i][j][0] - Ox;
                    GLfloat ty = blue[i][j][1] - Oy;
                    blue[i][j][0] = (tx * cos(ag)) - ((ty * sin(ag)) * CHANGE) + Ox;
                    blue[i][j][1] = ((tx * sin(ag)) * CHANGE) + (ty * cos(ag)) + Oy;
                }
            }

        //白色变
        for (int i = 0; i < 18; i++)
            if (CHECK_L(white, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = white[i][j][0] - Ox;
                    GLfloat ty = white[i][j][1] - Oy;
                    white[i][j][0] = (tx * cos(ag)) - ((ty * sin(ag)) * CHANGE) + Ox;
                    white[i][j][1] = ((tx * sin(ag)) * CHANGE) + (ty * cos(ag)) + Oy;
                }
            }

        //黄色变
        for (int i = 0; i < 18; i++)
            if (CHECK_L(yellow, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = yellow[i][j][0] - Ox;
                    GLfloat ty = yellow[i][j][1] - Oy;
                    yellow[i][j][0] = (tx * cos(ag)) - ((ty * sin(ag)) * CHANGE) + Ox;
                    yellow[i][j][1] = ((tx * sin(ag)) * CHANGE) + (ty * cos(ag)) + Oy;
                }
            }
        glutPostRedisplay();
        glutTimerFunc(10, turn_fL, 1);
        f5++;
    }
    else
    {
        f5 = 0;
        if (Flag) AUTOMATIC_RECOVERY(++idx);
    }
}
void turn_fl(int USELESS)
{
    if (f5 < 9)
    {

        //红色变
        for (int i = 0; i < 18; i++)
            if (CHECK_L(red, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = red[i][j][0] - Ox;
                    GLfloat ty = red[i][j][1] - Oy;
                    red[i][j][0] = (tx * cos(ag)) + ((ty * sin(ag)) * CHANGE) + Ox;
                    red[i][j][1] = (-(tx * sin(ag)) * CHANGE) + (ty * cos(ag)) + Oy;
                }
            }

        //绿色变
        for (int i = 0; i < 18; i++)
            if (CHECK_L(green, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = green[i][j][0] - Ox;
                    GLfloat ty = green[i][j][1] - Oy;
                    green[i][j][0] = (tx * cos(ag)) + ((ty * sin(ag)) * CHANGE) + Ox;
                    green[i][j][1] = (-(tx * sin(ag)) * CHANGE) + (ty * cos(ag)) + Oy;
                }
            }

        //橙色变
        for (int i = 0; i < 18; i++)
            if (CHECK_L(orange, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = orange[i][j][0] - Ox;
                    GLfloat ty = orange[i][j][1] - Oy;
                    orange[i][j][0] = (tx * cos(ag)) + ((ty * sin(ag)) * CHANGE) + Ox;
                    orange[i][j][1] = (-(tx * sin(ag)) * CHANGE) + (ty * cos(ag)) + Oy;
                }
            }

        //蓝色变
        for (int i = 0; i < 18; i++)
            if (CHECK_L(blue, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = blue[i][j][0] - Ox;
                    GLfloat ty = blue[i][j][1] - Oy;
                    blue[i][j][0] = (tx * cos(ag)) + ((ty * sin(ag)) * CHANGE) + Ox;
                    blue[i][j][1] = (-(tx * sin(ag)) * CHANGE) + (ty * cos(ag)) + Oy;
                }
            }

        //白色变
        for (int i = 0; i < 18; i++)
            if (CHECK_L(white, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = white[i][j][0] - Ox;
                    GLfloat ty = white[i][j][1] - Oy;
                    white[i][j][0] = (tx * cos(ag)) + ((ty * sin(ag)) * CHANGE) + Ox;
                    white[i][j][1] = (-(tx * sin(ag)) * CHANGE) + (ty * cos(ag)) + Oy;
                }
            }

        //黄色变
        for (int i = 0; i < 18; i++)
            if (CHECK_L(yellow, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat tx = yellow[i][j][0] - Ox;
                    GLfloat ty = yellow[i][j][1] - Oy;
                    yellow[i][j][0] = (tx * cos(ag)) + ((ty * sin(ag)) * CHANGE) + Ox;
                    yellow[i][j][1] = (-(tx * sin(ag)) * CHANGE) + (ty * cos(ag)) + Oy;
                }
            }
        glutPostRedisplay();
        glutTimerFunc(10, turn_fl, 1);
        f5++;
    }
    else
    {
        f5 = 0;
        if (Flag) AUTOMATIC_RECOVERY(++idx);
    }
}
void turn_fB(int USELESS)
{
    if (f6 < 9)
    {
        //红色变
        for (int i = 0; i < 18; i++)
            if (CHECK_B(red, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat ty = red[i][j][1] - Oy;
                    GLfloat tz = red[i][j][2] - Oz;
                    red[i][j][1] = (ty * cos(ag)) - ((tz * sin(ag)) * CHANGE) + Oy;
                    red[i][j][2] = ((ty * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        //绿色变
        for (int i = 0; i < 18; i++)
            if (CHECK_B(green, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat ty = green[i][j][1] - Oy;
                    GLfloat tz = green[i][j][2] - Oz;
                    green[i][j][1] = (ty * cos(ag)) - ((tz * sin(ag)) * CHANGE) + Oy;
                    green[i][j][2] = ((ty * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        //橙色变
        for (int i = 0; i < 18; i++)
            if (CHECK_B(orange, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat ty = orange[i][j][1] - Oy;
                    GLfloat tz = orange[i][j][2] - Oz;
                    orange[i][j][1] = (ty * cos(ag)) - ((tz * sin(ag)) * CHANGE) + Oy;
                    orange[i][j][2] = ((ty * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        //蓝色变
        for (int i = 0; i < 18; i++)
            if (CHECK_B(blue, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat ty = blue[i][j][1] - Oy;
                    GLfloat tz = blue[i][j][2] - Oz;
                    blue[i][j][1] = (ty * cos(ag)) - ((tz * sin(ag)) * CHANGE) + Oy;
                    blue[i][j][2] = ((ty * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        //白色变
        for (int i = 0; i < 18; i++)
            if (CHECK_B(white, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat ty = white[i][j][1] - Oy;
                    GLfloat tz = white[i][j][2] - Oz;
                    white[i][j][1] = (ty * cos(ag)) - ((tz * sin(ag)) * CHANGE) + Oy;
                    white[i][j][2] = ((ty * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        //黄色变
        for (int i = 0; i < 18; i++)
            if (CHECK_B(yellow, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat ty = yellow[i][j][1] - Oy;
                    GLfloat tz = yellow[i][j][2] - Oz;
                    yellow[i][j][1] = (ty * cos(ag)) - ((tz * sin(ag)) * CHANGE) + Oy;
                    yellow[i][j][2] = ((ty * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        glutPostRedisplay();
        glutTimerFunc(10, turn_fB, 1);
        f6++;


    }
    else {
        f6 = 0;
        if (Flag) AUTOMATIC_RECOVERY(++idx);
    }
}
void turn_fb(int USELESS)
{
    if (f6 < 9)
    {
        //红色变
        for (int i = 0; i < 18; i++)
            if (CHECK_B(red, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat ty = red[i][j][1] - Oy;
                    GLfloat tz = red[i][j][2] - Oz;
                    red[i][j][1] = (ty * cos(ag)) + ((tz * sin(ag)) * CHANGE) + Oy;
                    red[i][j][2] = (-(ty * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        //绿色变
        for (int i = 0; i < 18; i++)
            if (CHECK_B(green, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat ty = green[i][j][1] - Oy;
                    GLfloat tz = green[i][j][2] - Oz;
                    green[i][j][1] = (ty * cos(ag)) + ((tz * sin(ag)) * CHANGE) + Oy;
                    green[i][j][2] = (-(ty * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        //橙色变
        for (int i = 0; i < 18; i++)
            if (CHECK_B(orange, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat ty = orange[i][j][1] - Oy;
                    GLfloat tz = orange[i][j][2] - Oz;
                    orange[i][j][1] = (ty * cos(ag)) + ((tz * sin(ag)) * CHANGE) + Oy;
                    orange[i][j][2] = (-(ty * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        //蓝色变
        for (int i = 0; i < 18; i++)
            if (CHECK_B(blue, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat ty = blue[i][j][1] - Oy;
                    GLfloat tz = blue[i][j][2] - Oz;
                    blue[i][j][1] = (ty * cos(ag)) + ((tz * sin(ag)) * CHANGE) + Oy;
                    blue[i][j][2] = (-(ty * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        //白色变
        for (int i = 0; i < 18; i++)
            if (CHECK_B(white, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat ty = white[i][j][1] - Oy;
                    GLfloat tz = white[i][j][2] - Oz;
                    white[i][j][1] = (ty * cos(ag)) + ((tz * sin(ag)) * CHANGE) + Oy;
                    white[i][j][2] = (-(ty * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        //黄色变
        for (int i = 0; i < 18; i++)
            if (CHECK_B(yellow, i))
            {
                for (int j = 0; j < 4; j++)
                {
                    GLfloat ty = yellow[i][j][1] - Oy;
                    GLfloat tz = yellow[i][j][2] - Oz;
                    yellow[i][j][1] = (ty * cos(ag)) + ((tz * sin(ag)) * CHANGE) + Oy;
                    yellow[i][j][2] = (-(ty * sin(ag)) * CHANGE) + (tz * cos(ag)) + Oz;
                }
            }

        glutPostRedisplay();
        glutTimerFunc(10, turn_fb, 1);
        f6++;


    }
    else {
        f6 = 0;
        if (Flag) AUTOMATIC_RECOVERY(++idx);
    }
}
void turn_allX(int USELESS)
{
    if (f_allX < 9)
    {
        for (int i = 0; i < 18; i++)
            for (int j = 0; j < 4; j++) {
                GLfloat ty = red[i][j][1] - Oy;
                GLfloat tz = red[i][j][2] - Oz;
                red[i][j][1] = (ty * cos(ag)) - (tz * sin(ag)) + Oy;
                red[i][j][2] = (ty * sin(ag)) + (tz * cos(ag)) + Oz;
            }
        for (int i = 0; i < 18; i++)
            for (int j = 0; j < 4; j++) {
                GLfloat ty = green[i][j][1] - Oy;
                GLfloat tz = green[i][j][2] - Oz;
                green[i][j][1] = (ty * cos(ag)) - (tz * sin(ag)) + Oy;
                green[i][j][2] = (ty * sin(ag)) + (tz * cos(ag)) + Oz;
            }

        for (int i = 0; i < 18; i++)
            for (int j = 0; j < 4; j++) {
                GLfloat ty = orange[i][j][1] - Oy;
                GLfloat tz = orange[i][j][2] - Oz;
                orange[i][j][1] = (ty * cos(ag)) - (tz * sin(ag)) + Oy;
                orange[i][j][2] = (ty * sin(ag)) + (tz * cos(ag)) + Oz;
            }

        for (int i = 0; i < 18; i++)
            for (int j = 0; j < 4; j++) {
                GLfloat ty = blue[i][j][1] - Oy;
                GLfloat tz = blue[i][j][2] - Oz;
                blue[i][j][1] = (ty * cos(ag)) - (tz * sin(ag)) + Oy;
                blue[i][j][2] = (ty * sin(ag)) + (tz * cos(ag)) + Oz;
            }

        for (int i = 0; i < 18; i++)
            for (int j = 0; j < 4; j++) {
                GLfloat ty = white[i][j][1] - Oy;
                GLfloat tz = white[i][j][2] - Oz;
                white[i][j][1] = (ty * cos(ag)) - (tz * sin(ag)) + Oy;
                white[i][j][2] = (ty * sin(ag)) + (tz * cos(ag)) + Oz;
            }

        for (int i = 0; i < 18; i++)
            for (int j = 0; j < 4; j++) {
                GLfloat ty = yellow[i][j][1] - Oy;
                GLfloat tz = yellow[i][j][2] - Oz;
                yellow[i][j][1] = (ty * cos(ag)) - (tz * sin(ag)) + Oy;
                yellow[i][j][2] = (ty * sin(ag)) + (tz * cos(ag)) + Oz;
            }


        glutPostRedisplay();
        glutTimerFunc(10, turn_allX, 1);

        f_allX++;
    }
    else {
        f_allX = 0;
        if (Flag) AUTOMATIC_RECOVERY(++idx);
    }

}
void turn_allx(int USELESS) {
    if (f_allx < 9)
    {
        for (int i = 0; i < 18; i++)
            for (int j = 0; j < 4; j++) {
                GLfloat ty = red[i][j][1] - Oy;
                GLfloat tz = red[i][j][2] - Oz;
                red[i][j][1] = (ty * cos(ag)) + (tz * sin(ag)) + Oy;
                red[i][j][2] = -(ty * sin(ag)) + (tz * cos(ag)) + Oz;
            }
        for (int i = 0; i < 18; i++)
            for (int j = 0; j < 4; j++) {
                GLfloat ty = green[i][j][1] - Oy;
                GLfloat tz = green[i][j][2] - Oz;
                green[i][j][1] = (ty * cos(ag)) + (tz * sin(ag)) + Oy;
                green[i][j][2] = -(ty * sin(ag)) + (tz * cos(ag)) + Oz;
            }

        for (int i = 0; i < 18; i++)
            for (int j = 0; j < 4; j++) {
                GLfloat ty = orange[i][j][1] - Oy;
                GLfloat tz = orange[i][j][2] - Oz;
                orange[i][j][1] = (ty * cos(ag)) + (tz * sin(ag)) + Oy;
                orange[i][j][2] = -(ty * sin(ag)) + (tz * cos(ag)) + Oz;
            }

        for (int i = 0; i < 18; i++)
            for (int j = 0; j < 4; j++) {
                GLfloat ty = blue[i][j][1] - Oy;
                GLfloat tz = blue[i][j][2] - Oz;
                blue[i][j][1] = (ty * cos(ag)) + (tz * sin(ag)) + Oy;
                blue[i][j][2] = -(ty * sin(ag)) + (tz * cos(ag)) + Oz;
            }

        for (int i = 0; i < 18; i++)
            for (int j = 0; j < 4; j++) {
                GLfloat ty = white[i][j][1] - Oy;
                GLfloat tz = white[i][j][2] - Oz;
                white[i][j][1] = (ty * cos(ag)) + (tz * sin(ag)) + Oy;
                white[i][j][2] = -(ty * sin(ag)) + (tz * cos(ag)) + Oz;
            }

        for (int i = 0; i < 18; i++)
            for (int j = 0; j < 4; j++) {
                GLfloat ty = yellow[i][j][1] - Oy;
                GLfloat tz = yellow[i][j][2] - Oz;
                yellow[i][j][1] = (ty * cos(ag)) + (tz * sin(ag)) + Oy;
                yellow[i][j][2] = -(ty * sin(ag)) + (tz * cos(ag)) + Oz;
            }


        glutPostRedisplay();
        glutTimerFunc(10, turn_allx, 1);

        f_allx++;
    }
    else {
        f_allx = 0;
        if (Flag) AUTOMATIC_RECOVERY(++idx);
    }
}
void turn_allY(int USELESS)
{
    if (f_allY < 9)
    {
        for (int i = 0; i < 18; i++)
            for (int j = 0; j < 4; j++) {
                GLfloat ty = red[i][j][0] - Ox;
                GLfloat tz = red[i][j][2] - Oz;
                red[i][j][0] = (ty * cos(ag)) - (tz * sin(ag)) + Ox;
                red[i][j][2] = (ty * sin(ag)) + (tz * cos(ag)) + Oz;
            }
        for (int i = 0; i < 18; i++)
            for (int j = 0; j < 4; j++) {
                GLfloat ty = green[i][j][0] - Ox;
                GLfloat tz = green[i][j][2] - Oz;
                green[i][j][0] = (ty * cos(ag)) - (tz * sin(ag)) + Ox;
                green[i][j][2] = (ty * sin(ag)) + (tz * cos(ag)) + Oz;
            }

        for (int i = 0; i < 18; i++)
            for (int j = 0; j < 4; j++) {
                GLfloat ty = orange[i][j][0] - Ox;
                GLfloat tz = orange[i][j][2] - Oz;
                orange[i][j][0] = (ty * cos(ag)) - (tz * sin(ag)) + Ox;
                orange[i][j][2] = (ty * sin(ag)) + (tz * cos(ag)) + Oz;
            }

        for (int i = 0; i < 18; i++)
            for (int j = 0; j < 4; j++) {
                GLfloat ty = blue[i][j][0] - Ox;
                GLfloat tz = blue[i][j][2] - Oz;
                blue[i][j][0] = (ty * cos(ag)) - (tz * sin(ag)) + Ox;
                blue[i][j][2] = (ty * sin(ag)) + (tz * cos(ag)) + Oz;
            }

        for (int i = 0; i < 18; i++)
            for (int j = 0; j < 4; j++) {
                GLfloat ty = white[i][j][0] - Ox;
                GLfloat tz = white[i][j][2] - Oz;
                white[i][j][0] = (ty * cos(ag)) - (tz * sin(ag)) + Ox;
                white[i][j][2] = (ty * sin(ag)) + (tz * cos(ag)) + Oz;
            }

        for (int i = 0; i < 18; i++)
            for (int j = 0; j < 4; j++) {
                GLfloat ty = yellow[i][j][0] - Ox;
                GLfloat tz = yellow[i][j][2] - Oz;
                yellow[i][j][0] = (ty * cos(ag)) - (tz * sin(ag)) + Ox;
                yellow[i][j][2] = (ty * sin(ag)) + (tz * cos(ag)) + Oz;
            }


        glutPostRedisplay();
        glutTimerFunc(10, turn_allY, 1);

        f_allY++;
    }
    else {
        f_allY = 0;
        if (Flag) AUTOMATIC_RECOVERY(++idx);
    }
}
void turn_ally(int USELESS)
{
    if (f_ally < 9)
    {
        for (int i = 0; i < 18; i++)
            for (int j = 0; j < 4; j++) {
                GLfloat ty = red[i][j][0] - Ox;
                GLfloat tz = red[i][j][2] - Oz;
                red[i][j][0] = (ty * cos(ag)) + (tz * sin(ag)) + Ox;
                red[i][j][2] = -(ty * sin(ag)) + (tz * cos(ag)) + Oz;
            }
        for (int i = 0; i < 18; i++)
            for (int j = 0; j < 4; j++) {
                GLfloat ty = green[i][j][0] - Ox;
                GLfloat tz = green[i][j][2] - Oz;
                green[i][j][0] = (ty * cos(ag)) + (tz * sin(ag)) + Ox;
                green[i][j][2] = -(ty * sin(ag)) + (tz * cos(ag)) + Oz;
            }

        for (int i = 0; i < 18; i++)
            for (int j = 0; j < 4; j++) {
                GLfloat ty = orange[i][j][0] - Ox;
                GLfloat tz = orange[i][j][2] - Oz;
                orange[i][j][0] = (ty * cos(ag)) + (tz * sin(ag)) + Ox;
                orange[i][j][2] = -(ty * sin(ag)) + (tz * cos(ag)) + Oz;
            }

        for (int i = 0; i < 18; i++)
            for (int j = 0; j < 4; j++) {
                GLfloat ty = blue[i][j][0] - Ox;
                GLfloat tz = blue[i][j][2] - Oz;
                blue[i][j][0] = (ty * cos(ag)) + (tz * sin(ag)) + Ox;
                blue[i][j][2] = -(ty * sin(ag)) + (tz * cos(ag)) + Oz;
            }

        for (int i = 0; i < 18; i++)
            for (int j = 0; j < 4; j++) {
                GLfloat ty = white[i][j][0] - Ox;
                GLfloat tz = white[i][j][2] - Oz;
                white[i][j][0] = (ty * cos(ag)) + (tz * sin(ag)) + Ox;
                white[i][j][2] = -(ty * sin(ag)) + (tz * cos(ag)) + Oz;
            }

        for (int i = 0; i < 18; i++)
            for (int j = 0; j < 4; j++) {
                GLfloat ty = yellow[i][j][0] - Ox;
                GLfloat tz = yellow[i][j][2] - Oz;
                yellow[i][j][0] = (ty * cos(ag)) + (tz * sin(ag)) + Ox;
                yellow[i][j][2] = -(ty * sin(ag)) + (tz * cos(ag)) + Oz;
            }


        glutPostRedisplay();
        glutTimerFunc(10, turn_ally, 1);

        f_ally++;
    }
    else {
        f_ally = 0;
        if (Flag) AUTOMATIC_RECOVERY(++idx);
    }
}
void turn_allZ(int USELESS)
{
    if (f_allZ < 9)
    {
        for (int i = 0; i < 18; i++)
            for (int j = 0; j < 4; j++) {
                GLfloat ty = red[i][j][1] - Oy;
                GLfloat tx = red[i][j][0] - Ox;
                red[i][j][1] = (ty * cos(ag)) - (tx * sin(ag)) + Oy;
                red[i][j][0] = (ty * sin(ag)) + (tx * cos(ag)) + Ox;
            }
        for (int i = 0; i < 18; i++)
            for (int j = 0; j < 4; j++) {
                GLfloat ty = green[i][j][1] - Oy;
                GLfloat tx = green[i][j][0] - Ox;
                green[i][j][1] = (ty * cos(ag)) - (tx * sin(ag)) + Oy;
                green[i][j][0] = (ty * sin(ag)) + (tx * cos(ag)) + Ox;
            }

        for (int i = 0; i < 18; i++)
            for (int j = 0; j < 4; j++) {
                GLfloat ty = orange[i][j][1] - Oy;
                GLfloat tx = orange[i][j][0] - Ox;
                orange[i][j][1] = (ty * cos(ag)) - (tx * sin(ag)) + Oy;
                orange[i][j][0] = (ty * sin(ag)) + (tx * cos(ag)) + Ox;
            }

        for (int i = 0; i < 18; i++)
            for (int j = 0; j < 4; j++) {
                GLfloat ty = blue[i][j][1] - Oy;
                GLfloat tx = blue[i][j][0] - Ox;
                blue[i][j][1] = (ty * cos(ag)) - (tx * sin(ag)) + Oy;
                blue[i][j][0] = (ty * sin(ag)) + (tx * cos(ag)) + Ox;
            }

        for (int i = 0; i < 18; i++)
            for (int j = 0; j < 4; j++) {
                GLfloat ty = white[i][j][1] - Oy;
                GLfloat tx = white[i][j][0] - Ox;
                white[i][j][1] = (ty * cos(ag)) - (tx * sin(ag)) + Oy;
                white[i][j][0] = (ty * sin(ag)) + (tx * cos(ag)) + Ox;
            }

        for (int i = 0; i < 18; i++)
            for (int j = 0; j < 4; j++) {
                GLfloat ty = yellow[i][j][1] - Oy;
                GLfloat tx = yellow[i][j][0] - Ox;
                yellow[i][j][1] = (ty * cos(ag)) - (tx * sin(ag)) + Oy;
                yellow[i][j][0] = (ty * sin(ag)) + (tx * cos(ag)) + Ox;
            }


        glutPostRedisplay();
        glutTimerFunc(10, turn_allZ, 1);

        f_allZ++;
    }
    else {
        f_allZ = 0;
        if (Flag) AUTOMATIC_RECOVERY(++idx);
    }

}
void turn_allz(int USELESS)
{
    if (f_allz < 9)
    {
        for (int i = 0; i < 18; i++)
            for (int j = 0; j < 4; j++) {
                GLfloat ty = red[i][j][1] - Oy;
                GLfloat tx = red[i][j][0] - Ox;
                red[i][j][1] = (ty * cos(ag)) + (tx * sin(ag)) + Oy;
                red[i][j][0] = -(ty * sin(ag)) + (tx * cos(ag)) + Ox;
            }
        for (int i = 0; i < 18; i++)
            for (int j = 0; j < 4; j++) {
                GLfloat ty = green[i][j][1] - Oy;
                GLfloat tx = green[i][j][0] - Ox;
                green[i][j][1] = (ty * cos(ag)) + (tx * sin(ag)) + Oy;
                green[i][j][0] = -(ty * sin(ag)) + (tx * cos(ag)) + Ox;
            }

        for (int i = 0; i < 18; i++)
            for (int j = 0; j < 4; j++) {
                GLfloat ty = orange[i][j][1] - Oy;
                GLfloat tx = orange[i][j][0] - Ox;
                orange[i][j][1] = (ty * cos(ag)) + (tx * sin(ag)) + Oy;
                orange[i][j][0] = -(ty * sin(ag)) + (tx * cos(ag)) + Ox;
            }

        for (int i = 0; i < 18; i++)
            for (int j = 0; j < 4; j++) {
                GLfloat ty = blue[i][j][1] - Oy;
                GLfloat tx = blue[i][j][0] - Ox;
                blue[i][j][1] = (ty * cos(ag)) + (tx * sin(ag)) + Oy;
                blue[i][j][0] = -(ty * sin(ag)) + (tx * cos(ag)) + Ox;
            }

        for (int i = 0; i < 18; i++)
            for (int j = 0; j < 4; j++) {
                GLfloat ty = white[i][j][1] - Oy;
                GLfloat tx = white[i][j][0] - Ox;
                white[i][j][1] = (ty * cos(ag)) + (tx * sin(ag)) + Oy;
                white[i][j][0] = -(ty * sin(ag)) + (tx * cos(ag)) + Ox;
            }

        for (int i = 0; i < 18; i++)
            for (int j = 0; j < 4; j++) {
                GLfloat ty = yellow[i][j][1] - Oy;
                GLfloat tx = yellow[i][j][0] - Ox;
                yellow[i][j][1] = (ty * cos(ag)) + (tx * sin(ag)) + Oy;
                yellow[i][j][0] = -(ty * sin(ag)) + (tx * cos(ag)) + Ox;
            }


        glutPostRedisplay();
        glutTimerFunc(10, turn_allz, 1);

        f_allz++;
    }
    else {
        f_allz = 0;
        if (Flag) AUTOMATIC_RECOVERY(++idx);
    }

}
void move_left(int USELESS) {
    if (f_left < 10) {
        for (int i = 0; i < 18; i++) {
            for (int j = 0; j < 4; j++) {
                red[i][j][0] = red[i][j][0] + l;
                orange[i][j][0] = orange[i][j][0] + l;
                green[i][j][0] = green[i][j][0] + l;
                blue[i][j][0] = blue[i][j][0] + l;
                white[i][j][0] = white[i][j][0] + l;
                yellow[i][j][0] = yellow[i][j][0] + l;
            }
        }
        Ox = Ox + l;
        f_left++;
        glutPostRedisplay();
        glutTimerFunc(10, move_left, 1);
    }
    else
        f_left = 0;
}
void move_right(int USELESS) {
    if (f_right < 10) {
        for (int i = 0; i < 18; i++) {
            for (int j = 0; j < 4; j++) {
                red[i][j][0] = red[i][j][0] - l;
                orange[i][j][0] = orange[i][j][0] - l;
                green[i][j][0] = green[i][j][0] - l;
                blue[i][j][0] = blue[i][j][0] - l;
                white[i][j][0] = white[i][j][0] - l;
                yellow[i][j][0] = yellow[i][j][0] - l;
            }
        }
        Ox = Ox - l;
        f_right++;
        glutPostRedisplay();
        glutTimerFunc(1, move_right, 1);
    }
    else
        f_right = 0;
}
void move_up(int USELESS) {
    if (f_up < 10) {
        for (int i = 0; i < 18; i++) {
            for (int j = 0; j < 4; j++) {
                red[i][j][1] = red[i][j][1] + l;
                orange[i][j][1] = orange[i][j][1] + l;
                green[i][j][1] = green[i][j][1] + l;
                blue[i][j][1] = blue[i][j][1] + l;
                white[i][j][1] = white[i][j][1] + l;
                yellow[i][j][1] = yellow[i][j][1] + l;

            }
        }
        Oy = Oy + l;
        f_up++;
        glutPostRedisplay();
        glutTimerFunc(1, move_up, 1);
    }
    else
        f_up = 0;
}
void move_down(int USELESS) {
    if (f_down < 10) {
        for (int i = 0; i < 18; i++) {
            for (int j = 0; j < 4; j++) {
                red[i][j][1] = red[i][j][1] - l;
                orange[i][j][1] = orange[i][j][1] - l;
                green[i][j][1] = green[i][j][1] - l;
                blue[i][j][1] = blue[i][j][1] - l;
                white[i][j][1] = white[i][j][1] - l;
                yellow[i][j][1] = yellow[i][j][1] - l;

            }
        }
        Oy = Oy - l;
        f_down++;
        glutPostRedisplay();
        glutTimerFunc(1, move_down, 1);
    }
    else
        f_down = 0;
}
void move_front(int USELESS) {
    if (f_front < 10) {
        for (int i = 0; i < 18; i++) {
            for (int j = 0; j < 4; j++) {
                red[i][j][2] = red[i][j][2] + l;
                orange[i][j][2] = orange[i][j][2] + l;
                green[i][j][2] = green[i][j][2] + l;
                blue[i][j][2] = blue[i][j][2] + l;
                white[i][j][2] = white[i][j][2] + l;
                yellow[i][j][2] = yellow[i][j][2] + l;

            }
        }
        Oz = Oz + l;
        f_front++;
        glutPostRedisplay();
        glutTimerFunc(1, move_front, 1);
    }
    else
        f_front = 0;
}
void move_behind(int USELESS) {
    if (f_behind < 10) {
        for (int i = 0; i < 18; i++) {
            for (int j = 0; j < 4; j++) {
                red[i][j][2] = red[i][j][2] - l;
                orange[i][j][2] = orange[i][j][2] - l;
                green[i][j][2] = green[i][j][2] - l;
                blue[i][j][2] = blue[i][j][2] - l;
                white[i][j][2] = white[i][j][2] - l;
                yellow[i][j][2] = yellow[i][j][2] - l;

            }
        }
        Oz = Oz - l;
        f_behind++;
        glutPostRedisplay();
        glutTimerFunc(1, move_behind, 1);
    }
    else
        f_behind = 0;
}
