#include <windows.h>
#include <GL/glut.h>
#include<math.h>>






void display() {

	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

///Face

    ///Blue

     glBegin(GL_QUADS);
	glColor3ub(0, 0, 400);

    glVertex2f(-.2,.80);
	glVertex2f(-.2,.55);
	glVertex2f(.25,.55);
	glVertex2f(.25,.80);
     ///shing left
	glVertex2f(-.2,1.0);
	glVertex2f(-.2,.80);
	glVertex2f(-.05,.80);
	glVertex2f(-.05,1.0);

	///shing right
	glVertex2f(.1,1.0);
	glVertex2f(.1,.80);
	glVertex2f(.25,.80);
	glVertex2f(.25,1.0);

    ///yellow
    glBegin(GL_QUADS);
	glColor3ub(208, 206, 400);

	glVertex2f(-.2,.55);
	glVertex2f(-.2,.40);
	glVertex2f(.25,.40);
	glVertex2f(.25,.55);
    glEnd();
///Body

    ///outer ash
	glBegin(GL_QUADS);
	glColor3ub(208, 206, 208);

	glVertex2f(-.4,.40);
	glVertex2f(-.4,-.10);
	glVertex2f(.45,-.10);
	glVertex2f(.45,.40);

	glEnd();



	///inner ash
	glBegin(GL_QUADS);
	glColor3ub(208, 206, 300);

	glVertex2f(-.22,.25);
	glVertex2f(-.22,.05);
	glVertex2f(.28,.05);
	glVertex2f(.28,.25);

	glEnd();

	///hands upper ash left

	glBegin(GL_QUADS);
	glColor3ub(208, 206, 208);

	glVertex2f(-.55,.25);
	glVertex2f(-.55,.05);
	glVertex2f(-.4,.05);
	glVertex2f(-.4,.25);

	glEnd();

	///hands upper ash right

	glBegin(GL_QUADS);
	glColor3ub(208, 206, 208);

	glVertex2f(.45,.25);
	glVertex2f(.45,.05);
	glVertex2f(.60,.05);
	glVertex2f(.60,.25);

	glEnd();

	///hands upper yellow right

	glBegin(GL_QUADS);
	glColor3ub(208, 206, 300);

	glVertex2f(.45,.05);
	glVertex2f(.45,-.10);
	glVertex2f(.60,-.10);
	glVertex2f(.60,.05);

	glEnd();

	///hands upper yellow left

	glBegin(GL_QUADS);
	glColor3ub(208, 206, 300);

	glVertex2f(-.55,.05);
	glVertex2f(-.55,-.10);
	glVertex2f(-.4,-.10);
	glVertex2f(-.4,.05);

	glEnd();

	///hands upper blue right

	glBegin(GL_QUADS);
	glColor3ub(0, 0, 400);

	glVertex2f(.45,-.10);
	glVertex2f(.45,-.25);
	glVertex2f(.60,-.25);
	glVertex2f(.60,-.10);

	///hands upper blue left

	glBegin(GL_QUADS);
	glColor3ub(0, 0, 400);

	glVertex2f(-.55,-.10);
	glVertex2f(-.55,-.25);
	glVertex2f(-.40,-.25);
	glVertex2f(-.40,-.10);

	glEnd();

    ///black back right
    glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);

	glVertex2f(.45,-.25);
	glVertex2f(.45,-.75);
	glVertex2f(.60,-.75);
	glVertex2f(.60,-.25);
	 glEnd();

	  ///black back left
    glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);

	glVertex2f(-.55,-.25);
	glVertex2f(-.55,-.75);
	glVertex2f(-.40,-.75);
	glVertex2f(-.40,-.25);
	 glEnd();

///black back middle
    glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);

	glVertex2f(-.10,-.25);
	glVertex2f(-.10,-.75);
	glVertex2f(.10,-.75);
	glVertex2f(.10,-.25);
    glEnd();

	///body lower yellow

	glBegin(GL_QUADS);
	glColor3ub(208, 206, 300);

	glVertex2f(-.4,-.10);
	glVertex2f(-.4,-.25);
	glVertex2f(.45,-.25);
	glVertex2f(.45,-.10);

	glEnd();

	///body lower blue

	glBegin(GL_QUADS);
	glColor3ub(0, 0, 400);

	glVertex2f(-.4,-.25);
	glVertex2f(-.4,-.40);
	glVertex2f(.45,-.40);
	glVertex2f(.45,-.25);

    glVertex2f(-.25,-.25);
	glVertex2f(-.25,-.60);
	glVertex2f(.30,-.60);
	glVertex2f(.30,-.25);

	glEnd();

	///leg ash left

	glBegin(GL_QUADS);
	glColor3ub(400, 400, 400);

	glVertex2f(-.4,-.40);
	glVertex2f(-.4,-.85);
	glVertex2f(-.25,-.85);
	glVertex2f(-.25,-.40);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(208, 206, 208);
	glVertex2f(-.25,-.60);
	glVertex2f(-.25,-.85);
	glVertex2f(-.10,-.85);
	glVertex2f(-.10,-.60);


	glEnd();

	///leg ash right

	glBegin(GL_QUADS);
	glColor3ub(208, 206, 208);

	glVertex2f(.45,-.40);
	glVertex2f(.45,-.85);
	glVertex2f(.25,-.85);
	glVertex2f(.25,-.40);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(400,400,400);
	glVertex2f(.25,-.60);
	glVertex2f(.25,-.85);
	glVertex2f(.10,-.85);
	glVertex2f(.10,-.60);


	glEnd();

	///leg blue right

	glBegin(GL_QUADS);
	glColor3ub(0, 0, 200);

	glVertex2f(.45,-.85);
	glVertex2f(.45,-.95);
	glVertex2f(.25,-.95);
	glVertex2f(.25,-.85);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(0, 0, 100);
	glVertex2f(.25,-.85);
	glVertex2f(.25,-.95);
	glVertex2f(.10,-.95);
	glVertex2f(.10,-.85);


	glEnd();

	///leg blue left

	glBegin(GL_QUADS);
	glColor3ub(0, 0, 200);

	glVertex2f(-.25,-.85);
	glVertex2f(-.25,-.95);
	glVertex2f(-.10,-.95);
	glVertex2f(-.10,-.85);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(0, 0, 100);
	glVertex2f(-.4,-.85);
	glVertex2f(-.4,-.95);
	glVertex2f(-.25,-.95);
	glVertex2f(-.25,-.85);


	glEnd();

    glFlush();  // Render now
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("My Car");
	glutInitWindowSize(700, 400);

	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
