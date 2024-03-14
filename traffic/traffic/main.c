/*
 * traffic.c
 *
 * Created: 8/13/2023 11:05:33 PM
 * Author : user
 */ 


#include "STD_TYPES.h"
#define F_CPU 1000000UL
#include <avr/io.h>
#include "INTERFACE.h"
#include "Seven_Segments.h"
#include "BIT_MATH.h"
#include <util/delay.h>


int main(void)
{
	inti_Seven_Segment();
	MDIO_voidSetPortDirection(DIO_PORTA,OUTPUT);
	
	u8 number;
	while (1)
	{
	 
	 for(number=10 ; number>3 ; number--)
	 {
		 Display_Num(number);
		 MDIO_voidSetPinValue(DIO_PORTA,DIO_PIN0,HIGH);
		 MDIO_voidSetPinValue(DIO_PORTA,DIO_PIN2,LOW);
		 MDIO_voidSetPinValue(DIO_PORTA,DIO_PIN1,LOW);
		 _delay_ms(8000);
	 }
	 
	 
	 for(number=3 ; number>0 ; number--)
	 {
		 Display_Num(number);
		 MDIO_voidSetPinValue(DIO_PORTA,DIO_PIN2,LOW);
		 MDIO_voidSetPinValue(DIO_PORTA,DIO_PIN0,LOW);
		 MDIO_voidSetPinValue(DIO_PORTA,DIO_PIN1,HIGH);
		_delay_ms(8000);

	 }
		
		for(number=10 ; number>0 ; number--)
		{
					Display_Num(number);
		MDIO_voidSetPinValue(DIO_PORTA,DIO_PIN1,LOW);
		MDIO_voidSetPinValue(DIO_PORTA,DIO_PIN0,LOW);
		MDIO_voidSetPinValue(DIO_PORTA,DIO_PIN2,HIGH);
		_delay_ms(8000);

		}
		

	}
}