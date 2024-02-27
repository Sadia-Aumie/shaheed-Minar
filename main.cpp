#include<iostream>
#include<windows.h>
#include<GL/glut.h>
#include<stdlib.h>
#include<cmath>

 char title[]="code";
 float x=0, y=0, z=0;

void display()

{
glMatrixMode(GL_MODELVIEW);

glTranslated(x,y,z);

//circle
    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++)
    {
        double angle = i * 3.14159265 / 180.0;
        double x =  ((cos(angle))+0.63 ) ;
        double y =  ((sin(angle))+2 );
        double z = -12.0;
        glVertex3d(x, y, z);
        }

glEnd();

glBegin(GL_QUADS);

{

 glColor3f(1,0.5,0);            ///surface1
        glVertex3f(0.22,-0.05,-0.5);
        glVertex3f(0.22,0.055,-0.8);
        glVertex3f(-0.10,0.055,-0.8);
        glVertex3f(-0.10,-0.05,-0.5);


 glColor3f(0.5,.35,.052);          ///surface2
        glVertex3f(0.13,0.015,-0.7);
        glVertex3f(0.13,0.035,-0.8);
        glVertex3f(-0.05,0.035,-0.8);
        glVertex3f(-0.05,0.015,-0.7);


glColor3f(0.5,0.5,0.5);
        glVertex3f(-0.0025,0.22,-0.8);  ///1
        glVertex3f(0.00,0.22,-0.8);
        glVertex3f(0.00,0.025,-0.8);
        glVertex3f(-0.0025,0.025,-0.8);

glColor3f(0.5,0.5,0.5);
        glVertex3f(-0.018,0.22,-0.8);   ///2
        glVertex3f(-0.016,0.22,-0.8);
        glVertex3f(-0.016,0.025,-0.8);
        glVertex3f(-0.018,0.025,-0.8);



        glColor3f(0.5,0.5,0.5);
        glVertex3f(0.0225,0.22,-0.8); ///3
        glVertex3f(0.02,0.22,-0.8);
        glVertex3f(0.02,0.025,-0.8);
        glVertex3f(0.0225,0.025,-0.8);

glColor3f(0.5,0.5,0.5);
        glVertex3f(0.0925,0.22,-0.8);  ///6
        glVertex3f(0.09,0.22,-0.8);
        glVertex3f(0.09,0.025,-0.8);
        glVertex3f(0.0925,0.025,-0.8);

        glColor3f(0.5,0.5,0.5);
        glVertex3f(0.0425,0.22,-0.8); ///4
        glVertex3f(0.04,0.22,-0.8);
        glVertex3f(0.04,0.025,-0.8);
        glVertex3f(0.0425,0.025,-0.8);

glColor3f(0.5,0.5,0.5);
        glVertex3f(0.0725,0.22,-0.8); ///5
        glVertex3f(0.07,0.22,-0.8);
        glVertex3f(0.07,0.025,-0.8);
        glVertex3f(0.0725,0.025,-0.8);



        glColor3f(1,1,1);//1st
        glVertex3f(-0.03,0.22,-0.8);
        glVertex3f(-0.04,0.22,-0.8);
        glVertex3f(-0.04,0.025,-0.8);
        glVertex3f(-0.03,0.025,-0.8);


         glColor3f(1,1,1);                       ///light
        glVertex3f(0.15,0.22,-0.8);
        glVertex3f(0.19,0.22,-0.8);
        glVertex3f(0.19,0.025,-0.8);
        glVertex3f(0.15,0.025,-0.8);






glVertex3f(0.13,0.22,-0.8);            ///2nd
        glVertex3f(0.12,0.22,-0.8);
        glVertex3f(0.12,0.025,-0.8);
        glVertex3f(0.13,0.025,-0.8);

 glVertex3f(-0.03,0.22,-0.8); ///3nd
        glVertex3f(0.12,0.22,-0.8);
        glVertex3f(0.12,0.21,-0.8);
        glVertex3f(-0.03,0.21,-0.8);




glColor3f(0.5,.35,.052);                       ///light2
        glVertex3f(0.15,0.07,-0.8);
        glVertex3f(0.19,0.07,-0.8);
        glVertex3f(0.19,0.025,-0.8);
        glVertex3f(0.15,0.025,-0.8);


glColor3f(1,1,1);            ///siri  1
        glVertex3f(0.22,-0.05,-0.5);
        glVertex3f(0.22,-0.058,-0.5);
        glVertex3f(-0.10,-0.058,-0.5);
        glVertex3f(-0.10,-0.05,-0.5);
glColor3f(1,0.5,0);            ///siri
        glVertex3f(0.25,-0.08,-0.5);
        glVertex3f(0.265,-0.070,-0.6);
        glVertex3f(-0.12,-0.070,-0.6);
        glVertex3f(-0.12,-0.08,-0.5);

glColor3f(1,1,1);            ///siri  3
        glVertex3f(0.25,-0.09,-0.5);
        glVertex3f(0.25,-0.08,-0.5);
        glVertex3f(-0.12,-0.08,-0.5);
        glVertex3f(-0.12,-0.09,-0.5);






    glEnd();









glutSwapBuffers();


}



}

void reshape(GLsizei width,GLsizei height){
if(height == 0) height =1;
GLfloat aspect =(GLfloat)width/(GLfloat)height;
glViewport(0,0,width,height);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluPerspective(45.0f,aspect,0.1f,100.0f);
 glClearColor(1.0, 1.0, 1.0, 1.0);

}

int main(int argc,char** argv){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_DOUBLE);
glutInitWindowSize(1500,1000);
glutInitWindowPosition(0, 0);
glutCreateWindow(title);
glutDisplayFunc(display);
glutReshapeFunc(reshape);
glutMainLoop();
return 0;





}
