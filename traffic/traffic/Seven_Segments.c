#include "Seven_Segments.h"
#include <avr/io.h>
#include "INTERFACE.h"
#include "STD_TYPES.h"
#include <util/delay.h>


void inti_Seven_Segment(){
	MDIO_voidSetPortDirection(DIO_PORTC,OUTPUT);
	MDIO_voidSetPortDirection(DIO_PORTD,OUTPUT);
	
}
void Enable(u8 num){
	switch(num){
		case 1:MDIO_voidSetPinValue(DIO_PORTD,DIO_PIN0,HIGH);break;
		case 2:MDIO_voidSetPinValue(DIO_PORTD,DIO_PIN1,HIGH);break;
	}
}
void Disable(u8 number){
	switch(number){
		case 1:MDIO_voidSetPinValue(DIO_PORTD,DIO_PIN0,LOW);
		  break;
		case 2:MDIO_voidSetPinValue(DIO_PORTD,DIO_PIN1,LOW);
		  break;
	}
}
void Seven_Segment_Display(u8 number1,u8  number2)
{
 u8 List[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
	PORTC=List[number1];
	PORTD=List[number2];
	_delay_ms(300);
}
void Display_Num(u8 number)
{
	u8 right=number%10;
	number/=10;
	Seven_Segment_Display(number,right);
}
