#include "GUI.h"

void GUI_draw(void)
{
	LCD_Display_Dir(0);//ÊúÆÁ
	LCD_DrawLine(50,50,50,270);//¾ØÐÎ¿ò
	LCD_DrawLine(200,50,200,270);
	LCD_DrawLine(50,50,200,50);
	LCD_DrawLine(50,270,200,270);
	LCD_DrawLine(125,50,125,270);
	
	LCD_DrawLine(50,105,200,105);
	LCD_DrawLine(50,160,200,160);
	LCD_DrawLine(50,215,200,215);

	LCD_Display_Dir(1);//ºáÆÁ
	LCD_ShowString(55,85,55,75,16,"LEFT");
	LCD_ShowString(110,85,55,75,16,"RIGHT");
	LCD_ShowString(165,85,55,75,16,"UP");
	LCD_ShowString(220,85,55,75,16,"DOWN");
	LCD_ShowString(10,85,55,75,16,"Move");
	
	LCD_ShowString(55,140,55,75,16,"Sin");
	LCD_ShowString(110,140,55,75,16,"Sawtooth");
	LCD_ShowString(165,140,55,75,16,"Triangle");
	LCD_ShowString(220,140,55,75,16,"Rectangular");
	LCD_ShowString(280,145,55,75,16,"Wave");




}

