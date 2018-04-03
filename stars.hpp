//stars.cpp
//solarsystem
//

#ifndef stars_hpp
#define stars_hpp

#include <GL/glut.h>

class Star
{
public:
	GLfloat radius;
	GLfloat speed, selfSpeed;
	GLfloat distance;
	GLfloat rgbaColor[4];

	Star* parentStar;

	Star(GLfloat radius, GLfloat distance, GLfloat speed, GLfloat selfSpeed, Star* parentStar);

	void drawStar();
	virtual void draw()
	{
		drawStar();
	}

	virtual void update(long timeSpan);

protected:
	GLfloat alphaSelf, alpha;	

};


class Planet : public Star
{
public:
	Planet(GLfloat radius, GLfloat distance, GLfloat speed, GLfloat selSpeed, Star*  parentStar, GLfloat rgbColor[3]);

	void drawPlanet();
	virtual void draw()
	{
		
		drawStar();
	}

};

class LightPlanet : public Planet
{
public:
	LightPlanet(GLfloat Radius, GLfloat Distance, GLfloat Speed, GLfloat selfSpeed, Star* parentStar, GLfloat rgbColor[]);

	void drawLight();
	virtual void draw()
	{
		drawLight();
		drawPlanet();
		drawStar();
	}

};

#endif
