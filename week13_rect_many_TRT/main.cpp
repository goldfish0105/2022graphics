#include <GL/glut.h>
float angle[20],oldX=0;
int angleID=0;///0:��0�����`,1:��1�����`,2:��2�����`
void keyboarad(unsigned char key,int x,int y)
{
    if(key=='1') angleID=1;///�w�]�o�O�Ĥ@��
    if(key=='2') angleID=2;
    if(key=='3') angleID=3;
    if(key=='4') angleID=4;
}
void mouse(int button,int state,int x,int y)
{///mouse���U�h
    oldX=x;
}
void motion(int x,int y)
{
    angle[angleID]+=(x-oldX);
    oldX=x;
    glutPostRedisplay();///���e�e��Re display
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,1);///�զ⪺
    glRectf(0.3,0.5,-0.3,-0.2);///����
    glPushMatrix();///�k�b��
        glTranslatef(0.3,0.5,0);///(3)���U�n��0.5,0.5
        glRotatef(angle[1],0,0,1);///(2)����
        glTranslatef(-0.3,-0.4,0);///(1)������त�ߩ񥿤���
        glColor3f(1,0,0);///���⪺
        glRectf(0.3,0.5,0.8,0.3);///�W���u
        glPushMatrix();
            glTranslatef(0.8,0.4,0);///(3)��U��y���b���`�W
            glRotatef(angle[2],0,0,1);///(2)����
            glTranslatef(-0.8,-0.4,0);///(1)��U��y�����त��,�񥿤���
            glColor3f(0,1,0);///��⪺
            glRectf(0.8,0.5,1.1,0.3);///�A�e�k�U��y
        glPopMatrix();
    glPopMatrix();

    glPushMatrix();///���b��
        glTranslatef(-0.3,0.5,0);///(3)���U�n��0.5,0.5
        glRotatef(angle[3],0,0,1);///(2)����
        glTranslatef(0.3,-0.4,0);///(1)������त�ߩ񥿤���
        glColor3f(1,0,0);///���⪺
        glRectf(-0.3,0.5,-0.8,0.3);///�W���u
        glPushMatrix();
            glTranslatef(-0.8,0.4,0);///(3)��U��y���b���`�W
            glRotatef(angle[4],0,0,1);///(2)����
            glTranslatef(0.8,-0.4,0);///(1)��U��y�����त��,�񥿤���
            glColor3f(0,1,0);///��⪺
            glRectf(-0.8,0.5,-1.1,0.3);///�A�e���U��y
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
    glutDisplayFunc(display);///����Idle
    glutMainLoop();
}