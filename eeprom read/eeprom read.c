/*
 * eeprom_read.c
 *
 * Created: 22-01-2017 15:10:30
 *  Author: HP
 */ 





#include <avr/io.h>
#include "USART_128.h"
#include <avr/eeprom.h>


int main(void)
{
	USART_Init(12,0);
	long int i,c;
	int j,k;
	int a,b;
	int p=0x02;
	unsigned char data;
	for (i=0;i<10;i++)
	{
		j=i>>8;
		k=(i & 0x00FF);
		
		unsigned int Address=a;
		eeprom_write_byte(p,j);
		eeprom_write_byte(p+1,k);
		a=eeprom_read_byte(p);
		b=eeprom_read_byte(p+1);
		c=(256*a)+b;
		
		
	
	}

	
    while(1)
    {
		
		
		 	USART_TransmitString("a",0);
		 	USART_TransmitNumber(a,0);
		 	USART_Transmitchar(0x0d,0);
		 	USART_TransmitString("b",0);
		 	USART_TransmitNumber(b,0);
		 	USART_Transmitchar(0x0d,0);
		 	USART_TransmitString("c",0);
		 	USART_TransmitNumber(c,0);
		 	USART_Transmitchar(0x0d,0);
		
	
		
    }
}
