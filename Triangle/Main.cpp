#include <Windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
	//drawing the body of the hut polygon(square)
	glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(-0.4f, -0.4f);
	glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.4f, -0.4f);
	glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.4f, 0.4f);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.4f, 0.4f);
    glEnd();

	//drawing the lines
	glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);//green
    glVertex2f(-0.43f, -0.43f);
    glVertex2f(0.43f, -0.43f);

	glColor3f(0.0f, 0.0f, 1.0f); //Blue
    glVertex2f(0.43f, -0.43f);
    glVertex2f(0.43f, 0.43f);

     glColor3f(1.0f, 0.0f, 0.0f); //Red
    glVertex2f(-0.43f, 0.43f);
    glVertex2f(-0.43f, -0.43f);
	 glEnd();

	 //drawing traingles   
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 1.0f); //Blue
    glVertex2f(-0.5f, 0.4f);
    glColor3f(1.0f, 0.0f, 0.0f); //Red
    glVertex2f(0.5f, 0.4f);
    glColor3f(0.0f, 1.0f, 0.0f); //Green
    glVertex2f(0.0f, 0.9f);
	glEnd();
	//drawing points of the square

	glPointSize(5.0);
	glBegin(GL_POINTS);
	glColor3f(1.0f, 0.0f, 1.0f); //magenta
    glVertex3f(-0.4f, -0.4f, 0.0f);
    glVertex3f(0.4f, -0.4f, 0.0f);
    glVertex3f(0.4f, 0.4f, 0.0f);
    glVertex3f(-0.4f, 0.4f, 0.0f);
	glEnd();

	//drawing points of the triangle
	glBegin(GL_POINTS);
    glColor3f(1.0f, 0.0f, 1.0f); 
    glVertex2f(-0.5f, 0.4f);
    glVertex2f(0.5f, 0.4f); 
    glVertex2f(0.0f, 0.9f);
    glEnd();

	//door
	glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 1.0f);  
    glVertex2f(-0.1f, -0.4f);
    glVertex2f(0.1f, -0.4f);
    glVertex2f(0.1f, 0.0f);
    glVertex2f(-0.1f, 0.0f);
    glEnd();

	//window
	 glBegin(GL_QUADS);
    glColor3f(.0f, 1.0f, 1.0f);  
    glVertex2f(0.2f, -0.1f);
    glVertex2f(0.4f, -0.1f);
    glVertex2f(0.4f, 0.1f);
    glVertex2f(0.2f, 0.1f);
    glEnd();

	glFlush();
}
   
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(300, 300);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("MY HUT");
	

    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}

