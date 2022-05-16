#include <GL/glut.h>
float angle[20],oldX=0;
int angleID=0;///0:第0個關節,1:第1個關節,2:第2個關節
void keyboarad(unsigned char key,int x,int y)
{
    if(key=='1') angleID=1;///預設這是第一個
    if(key=='2') angleID=2;
    if(key=='3') angleID=3;
    if(key=='4') angleID=4;
}
void mouse(int button,int state,int x,int y)
{///mouse按下去
    oldX=x;
}
void motion(int x,int y)
{
    angle[angleID]+=(x-oldX);
    oldX=x;
    glutPostRedisplay();///重畫畫面Re display
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,1);///白色的
    glRectf(0.3,0.5,-0.3,-0.2);///身體
    glPushMatrix();///右半邊
        glTranslatef(0.3,0.5,0);///(3)等下要掛0.5,0.5
        glRotatef(angle[1],0,0,1);///(2)旋轉
        glTranslatef(-0.3,-0.4,0);///(1)先把旋轉中心放正中心
        glColor3f(1,0,0);///紅色的
        glRectf(0.3,0.5,0.8,0.3);///上手臂
        glPushMatrix();
            glTranslatef(0.8,0.4,0);///(3)把下手肘掛在關節上
            glRotatef(angle[2],0,0,1);///(2)旋轉
            glTranslatef(-0.8,-0.4,0);///(1)把下手肘的旋轉中心,放正中心
            glColor3f(0,1,0);///綠色的
            glRectf(0.8,0.5,1.1,0.3);///再畫右下手肘
        glPopMatrix();
    glPopMatrix();

    glPushMatrix();///左半邊
        glTranslatef(-0.3,0.5,0);///(3)等下要掛0.5,0.5
        glRotatef(angle[3],0,0,1);///(2)旋轉
        glTranslatef(0.3,-0.4,0);///(1)先把旋轉中心放正中心
        glColor3f(1,0,0);///紅色的
        glRectf(-0.3,0.5,-0.8,0.3);///上手臂
        glPushMatrix();
            glTranslatef(-0.8,0.4,0);///(3)把下手肘掛在關節上
            glRotatef(angle[4],0,0,1);///(2)旋轉
            glTranslatef(0.8,-0.4,0);///(1)把下手肘的旋轉中心,放正中心
            glColor3f(0,1,0);///綠色的
            glRectf(-0.8,0.5,-1.1,0.3);///再畫左下手肘
        glPopMatrix();
    glPopMatrix();

    glutSwapBuffers();
}
int main(int argc,char**argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH);
    ///glutInitWindowSize(600,600);
    glutCreateWindow("week03 rect many TRT");
    glutKeyboardFunc(keyboarad);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutDisplayFunc(display);///不放Idle
    glutMainLoop();
}
