#ifndef _GUI_H_
#define _GUI_H_

#include "lcd.h"
#include "touch.h"
#include "delay.h"
#include "led.h" 
#include "lcd.h"


#define   LeftorRight_Num  10     //左移或右移一次为10个点


void GUI_draw(void);
void GUI_scan(void);
void GUI_draw_sin(void);
void GUI_draw_sawtooth(void);
void GUI_draw_triangle(void);
void GUI_draw_square(void);

void GUI_draw_left(void);

#endif
