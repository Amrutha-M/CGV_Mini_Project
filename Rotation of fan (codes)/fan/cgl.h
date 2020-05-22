#include<GL/glut.h>

void CGL_Init2D(float x1, float x2, float x3, float x4) {
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glColor3f(0.0, 0.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(x1, x2, x3, x4);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

void CGL_Init3D(float x1, float x2, float x3, float x4, float x5, float x6) {

	glClearColor(1.0, 1.0, 1.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3f(0.0, 0.0, 0.0);
	glEnable(GL_DEPTH_TEST);

	glDepthMask(GL_TRUE);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glFrustum(x1, x2, x3, x4, x5, x6);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}




