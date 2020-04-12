#include "oled_config.h"
/* ��Ļ�����ļ����� */
#include "oled_driver.h"

extern unsigned char  ScreenBuffer[SCREEN_ROW][SCREEN_COLUMN];
extern unsigned char TempBuffer[SCREEN_ROW][SCREEN_COLUMN];
unsigned int OledTimeMs=0;

//��ʼ��ͼ�ο⣬�뽫Ӳ����ʼ����Ϣ�������
void DriverInit(void)
{
	I2C_Configuration();
	OLED_Init();
}

//Ϊ�ϲ��ṩӲ�������ӿ�OLED_FILL
void UpdateScreenBuffer(void)
{
	OLED_FILL(ScreenBuffer[0]);
}
//Ϊ�ϲ��ṩӲ�������ӿ�OLED_FILL
void UpdateTempBuffer(void)
{
	OLED_FILL(TempBuffer[0]);
}

//�뽫�˺�������1ms�ж��Ϊͼ���ṩʱ��
void OledTimeMsFunc(void)
{
	if (OledTimeMs != 0x00)
	{ 
	 OledTimeMs--;
	}
}
////д��һ���ֽ�
//static void WriteByteBuffer(u8 colnum,u8 row,u8 data)
//{
//	Screen_buffer[colnum][row]=data;
//}

////��һ���ֽ�
//static unsigned char ReadByteBuffer(unsigned char colnum,unsigned char row)
//{
//	return Screen_buffer[colnum][row];
//}

