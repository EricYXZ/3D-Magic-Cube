#include "PocketCube.h"

void myDisplay()
{

    glClearColor(R, G, B, 0.0f);
    glEnable(GL_DEPTH_TEST);

    glDepthFunc(GL_LEQUAL);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, textureID);

    //红色
    glBegin(GL_QUADS);
    for (int i = 0; i < 18; i++)
        for (int j = 0; j < 4; j++)
        {
            if (i >= 9) {
                glColor3f(color[0][0], color[0][1], color[0][2]);
                glVertex3f(red[i][j][0], red[i][j][1], red[i][j][2]);
            }
            else {
                glColor3f(clr, clr, clr);
                glVertex3f(red[i][j][0], red[i][j][1], red[i][j][2]);
            }
        }
    if (int i = 0) {
        glTexCoord2f(0.0f, 0.0f); glVertex3f(red[i][0][0], red[i][0][1], red[0][0][2]);
        glTexCoord2f(1.0f, 0.0f); glVertex3f(red[i][1][0], red[i][1][1], red[i][1][2]);
        glTexCoord2f(1.0f, 1.0f); glVertex3f(red[i][2][0], red[i][2][1], red[i][2][2]);
        glTexCoord2f(0.0f, 1.0f); glVertex3f(red[i][3][0], red[i][3][1], red[i][3][2]);
    }
        
    glEnd();

    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 1.0f); glVertex3f(red[9][0][0], red[9][0][1], red[9][0][2]);
    glTexCoord2f(1.0f, 1.0f); glVertex3f(red[9][1][0], red[9][1][1], red[9][1][2]);
    glTexCoord2f(1.0f, 0.0f); glVertex3f(red[9][2][0], red[9][2][1], red[9][2][2]);
    glTexCoord2f(0.0f, 0.0f); glVertex3f(red[9][3][0], red[9][3][1], red[9][3][2]);
    glEnd();



    //绿色
    glBegin(GL_QUADS);
    for (int i = 0; i < 18; i++)
        for (int j = 0; j < 4; j++)
        {
            if (i >= 9) {
                glColor3f(color[1][0], color[1][1], color[1][2]);
                glVertex3f(green[i][j][0], green[i][j][1], green[i][j][2]);
            }
            else {
                glColor3f(clr, clr, clr);
                glVertex3f(green[i][j][0], green[i][j][1], green[i][j][2]);
            }
        }
    glEnd();

    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 1.0f); glVertex3f(green[9][0][0], green[9][0][1], green[9][0][2]);
    glTexCoord2f(1.0f, 1.0f); glVertex3f(green[9][1][0], green[9][1][1], green[9][1][2]);
    glTexCoord2f(1.0f, 0.0f); glVertex3f(green[9][2][0], green[9][2][1], green[9][2][2]);
    glTexCoord2f(0.0f, 0.0f); glVertex3f(green[9][3][0], green[9][3][1], green[9][3][2]);
    glEnd();


    //橙色
    glBegin(GL_QUADS);
    for (int i = 0; i < 18; i++)
        for (int j = 0; j < 4; j++)
        {
            if (i >= 9) {
                glColor3f(color[2][0], color[2][1], color[2][2]);
                glVertex3f(orange[i][j][0], orange[i][j][1], orange[i][j][2]);
            }
            else {
                glColor3f(clr, clr, clr);
                glVertex3f(orange[i][j][0], orange[i][j][1], orange[i][j][2]);
            }
        }
    glEnd();

    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 1.0f); glVertex3f(orange[9][0][0], orange[9][0][1], orange[9][0][2]);
    glTexCoord2f(1.0f, 1.0f); glVertex3f(orange[9][1][0], orange[9][1][1], orange[9][1][2]);
    glTexCoord2f(1.0f, 0.0f); glVertex3f(orange[9][2][0], orange[9][2][1], orange[9][2][2]);
    glTexCoord2f(0.0f, 0.0f); glVertex3f(orange[9][3][0], orange[9][3][1], orange[9][3][2]);
    glEnd();

    //蓝色
    glBegin(GL_QUADS);
    for (int i = 0; i < 18; i++)
        for (int j = 0; j < 4; j++)
        {
            if (i >= 9) {
                glColor3f(color[3][0], color[3][1], color[3][2]);
                glVertex3f(blue[i][j][0], blue[i][j][1], blue[i][j][2]);
            }
            else {
                glColor3f(clr, clr, clr);
                glVertex3f(blue[i][j][0], blue[i][j][1], blue[i][j][2]);
            }
        }
    glEnd();

    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 1.0f); glVertex3f(blue[9][0][0], blue[9][0][1], blue[9][0][2]);
    glTexCoord2f(1.0f, 1.0f); glVertex3f(blue[9][1][0], blue[9][1][1], blue[9][1][2]);
    glTexCoord2f(1.0f, 0.0f); glVertex3f(blue[9][2][0], blue[9][2][1], blue[9][2][2]);
    glTexCoord2f(0.0f, 0.0f); glVertex3f(blue[9][3][0], blue[9][3][1], blue[9][3][2]);
    glEnd();




    //黄色
    glBegin(GL_QUADS);
    for (int i = 0; i < 18; i++)
        for (int j = 0; j < 4; j++)
        {
            if (i >= 9) {
                glColor3f(color[5][0], color[5][1], color[5][2]);
                glVertex3f(yellow[i][j][0], yellow[i][j][1], yellow[i][j][2]);
            }
            else {
                glColor3f(clr, clr, clr);
                glVertex3f(yellow[i][j][0], yellow[i][j][1], yellow[i][j][2]);
            }
        }
    glEnd();


    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 1.0f); glVertex3f(yellow[9][0][0], yellow[9][0][1], yellow[9][0][2]);
    glTexCoord2f(1.0f, 1.0f); glVertex3f(yellow[9][1][0], yellow[9][1][1], yellow[9][1][2]);
    glTexCoord2f(1.0f, 0.0f); glVertex3f(yellow[9][2][0], yellow[9][2][1], yellow[9][2][2]);
    glTexCoord2f(0.0f, 0.0f); glVertex3f(yellow[9][3][0], yellow[9][3][1], yellow[9][3][2]);
    glEnd();


    //白色
    glBegin(GL_QUADS);
    for (int i = 0; i < 18; i++)
        for (int j = 0; j < 4; j++)
        {
            if (i >= 9) {
                glColor3f(color[4][0], color[4][1], color[4][2]);
                glVertex3f(white[i][j][0], white[i][j][1], white[i][j][2]);
            }
            else {
                glColor3f(clr, clr, clr);
                glVertex3f(white[i][j][0], white[i][j][1], white[i][j][2]);
            }
        }
    glEnd();

    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 1.0f); glVertex3f(white[9][0][0], white[9][0][1], white[9][0][2]);
    glTexCoord2f(1.0f, 1.0f); glVertex3f(white[9][1][0], white[9][1][1], white[9][1][2]);
    glTexCoord2f(1.0f, 0.0f); glVertex3f(white[9][2][0], white[9][2][1], white[9][2][2]);
    glTexCoord2f(0.0f, 0.0f); glVertex3f(white[9][3][0], white[9][3][1], white[9][3][2]);
    glEnd();
  
    glFlush();
    glDisable(GL_TEXTURE_2D);
    glutSwapBuffers();

}
