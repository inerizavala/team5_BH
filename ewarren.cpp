//Source file for Evan Warren
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <GL/glx.h>
#include "defs.h"
#include "group.h"
#include "fonts.h"
/*
Enemy::Enemy() 
{
	pos[0] = 0.0f;	//(Flt)(gl.xres/2);
	pos[1] = 0.0f;	//(Flt)(gl.yres/2);
	pos[2] = 0.0f;
	VecZero(dir);
	VecZero(vel);
	VecZero(acc);
	angle = 0.0;
	color[0] = color[1] = color[2] = 1.0;
}
*/
void Credits::showPage(int xres, int yres) 
{
	Rect r;
	r.bot = yres - 50;
	r.left = xres / 2;
	r.center = 1;
	ggprint16(&r, 16, 0x00ffffff, "CREDITS:");
	ggprint8b(&r, 16, 0x00ffffff, "BRADLEY TATE");
	ggprint8b(&r, 16, 0x00ffffff, "EVAN WARREN");
	ggprint8b(&r, 16, 0x00ffffff, "IRVIN NERI");
	ggprint8b(&r, 16, 0x00ffffff, "JULIAN PEREYRA");

	 //makes a yellow triangle 
	  glColor3ub(255,255,0);
	  glPushMatrix();
	  //glTranslatef(g.ship.pos[0], g.ship.pos[1], g.ship.pos[2]);
	  //float angle = atan2(ship.dir[1], ship.dir[0]);
	  //glRotatef(g.ship.angle, 0.0f, 0.0f, 1.0f);
	  glBegin(GL_TRIANGLES);
	  glVertex2f(0.0f, 0.0f);
	  glVertex2f(xres/2.0, yres);
	  glVertex2f( xres, 0.0f);
	  glEnd();
	  glPopMatrix();
	 
}

void Score::increaseScore(int num)
{
	score = score + num;
	score_flag = !score_flag;
}

//int NEW_MAX_BULLETS = 99;
//int max_bullet_flag = 0;

void ewarrenFunction(int number) 
{
	if (number % 2) {
		std::cout << number << " is odd.\n";
	} else {
		std::cout << number << " is even.\n";
	}
}

int ewarrenFunction2(int num)
{
	if (num < 0) {
		return 1;
	} else {
		return 0;
	}
}
