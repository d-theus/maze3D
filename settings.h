#ifndef SETTINGS_H
#define SETTINGS_H

#include <math.h>

#define WIDTH 560
#define HEIGHT 560
#define WIDTH 670
#define HEIGHT 670
#define PLANE_HS 100.0 //“ут и далее HS = half of a side
#define SIDE_LENGTH 20
#define HS (float)PLANE_HS/SIDE_LENGTH
#define BALL_R HS*0.8
#define G_ACC 9.81
#define DEG_TO_RAD M_PI/180
#define TIMER_INTERVAL 20
#define FRICTION 0.99

enum ncolors{c_black, c_white, c_gray, c_red, c_green, c_blue, c_orange, c_yellow, c_lblue, c_magenta};


#endif // SETTINGS_H
