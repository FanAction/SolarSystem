//main.cpp
//solarsystem

#include <GL/glut.h>
#include "solarsystem.hpp"
#include <stdio.h>

#define WINDOW_X_POS 50
#define WINDOW_Y_POS 50
#define WIDTH 700
#define HEIGHT 700

//The SolarSystem Instance
SolarSystem solarSystem;

void onDisplay(void)
{
	solarSystem.onDisplay();
}

void onUpdate(void)
{
	solarSystem.onUpdate();
}

void onKeyboard(unsigned char key, int x, int y)
{
	solarSystem.onKeyboard(key, x, y);
}


int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
	glutInitWindowPosition(WINDOW_X_POS, WINDOW_Y_POS);
	glutCreateWindow("SolarSystem at shiyanlou");
	glutDisplayFunc(onDisplay);
	glutIdleFunc(onUpdate);
	glutKeyboardFunc(onKeyboard);
	glutMainLoop();
	printf("Hello SolarSystem\n");
	return 0;
}
