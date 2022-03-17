//Source file for Evan Warren
#include <stdio.h>
#include <string.h>
#include <iostream>
//#include <GL/glx.h>
#include "defs.h"
#include "group.h"




Enemy::Enemy() {
	pos[0] = 0.0f;	//(Flt)(gl.xres/2);
	pos[1] = 0.0f;	//(Flt)(gl.yres/2);
	pos[2] = 0.0f;
	VecZero(dir);
	VecZero(vel);
	VecZero(acc);
	angle = 0.0;
	color[0] = color[1] = color[2] = 1.0;
}
