#include "led.h"
#include "delay.h"
#include "sys.h"
#include "usart.h"
#include "lcd.h"
#include "key.h"  
#include "24cxx.h" 
#include "myiic.h"
#include "touch.h" 
#include "GUI.h"
//#include "usmart.h"
#include "adc.h"
#include "stm32f10x_dma.h"

void Inits(void);//��ʼ��
void Mouse_display(void);//��ʾ���

 int main(void)
 { 

	POINT_COLOR=RED;//��������Ϊ��ɫ 
	Inits();
	 DMA_Cmd(DMA1_Channel1,ENABLE);  
	LCD_Clear(WHITE);//����
	 while(1)
	 {
		 Mouse_display();
		 GUI_draw();
		 GUI_scan();
//		 GUI_draw_sin();
//		 GUI_draw_sawtooth();
//		 GUI_draw_triangle();
//		 GUI_draw_square();
	 }
}
 
 void Mouse_display(void)
{
		LCD_Display_Dir(0);//����
		TP_Scan(0);
		 //LCD_Draw_Circle(tp_dev.x[0],tp_dev.y[0],7);
}

void Inits()
{
	delay_init();	    	 //��ʱ������ʼ��	  
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); //����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ�
	uart_init(9600);	 	//���ڳ�ʼ��Ϊ9600
	LED_Init();		  		//��ʼ����LED���ӵ�Ӳ���ӿ�
	lcddev.dir = 1;			//����
	tp_dev.touchtype = 0x81;//������������
	LCD_Init();			   	//��ʼ��LCD 
	KEY_Init();				//������ʼ��		 	
	tp_dev.init();			//��������ʼ��
	//usmart_dev.init(72); 	//��ʼ��USMART		
		Adc_Init();
	
}

