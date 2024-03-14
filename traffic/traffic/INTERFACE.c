#include "INTERFACE.h"
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "avr/io.h"
void MDIO_voidSetPinDir(u8 copy_port,u8 copy_pin,u8 dir){
	
	if (dir==OUTPUT)
	{
		switch(copy_port){
			case DIO_PORTA: SET_BIT(DDRA,copy_pin);break;
			case DIO_PORTB: SET_BIT(DDRB,copy_pin);break;
			case DIO_PORTC: SET_BIT(DDRC,copy_pin);break;
			case DIO_PORTD: SET_BIT(DDRD,copy_pin);break;
		}
	}
	else if (dir==INPUT)
	{
		switch(copy_port){
			case DIO_PORTA: CLEAR_BIT(DDRA,copy_pin);break;
			case DIO_PORTB: CLEAR_BIT(DDRB,copy_pin);break;
			case DIO_PORTC: CLEAR_BIT(DDRC,copy_pin);break;
			case DIO_PORTD: CLEAR_BIT(DDRD,copy_pin);break;
		}
	}
	
}

void MDIO_voidSetPinValue(u8 copy_port,u8 copy_pin,u8 val){
	if(val==LOW)
	{
		switch(copy_port){
			case DIO_PORTA: CLEAR_BIT(PORTA,copy_pin);break;
			case DIO_PORTB: CLEAR_BIT(PORTB,copy_pin);break;
			case DIO_PORTC: CLEAR_BIT(PORTC,copy_pin);break;
			case DIO_PORTD: CLEAR_BIT(PORTD,copy_pin);break;
	   }
	}
	else if (val==HIGH)
	{
		switch(copy_port){
			case DIO_PORTA: SET_BIT(PORTA,copy_pin);break;
			case DIO_PORTB: SET_BIT(PORTB,copy_pin);break;
			case DIO_PORTC: SET_BIT(PORTC,copy_pin);break;
			case DIO_PORTD: SET_BIT(PORTD,copy_pin);break;
		}
	}
	
}

void MDIO_voidSetPortDirection(u8 Copy_u8Port, u8 Copy_u8Direction){
	
	if (Copy_u8Direction==OUTPUT)
	{
		switch(Copy_u8Port){
			case DIO_PORTA: DDRA=0xff;break;
			case DIO_PORTB: DDRB=0xff;break;
			case DIO_PORTC: DDRC=0xff;break;
			case DIO_PORTD: DDRD=0xff;break;
		}
	}
	else if (Copy_u8Port==INPUT)
	{
		switch(Copy_u8Port){
			case DIO_PORTA: DDRA=0x00;break;
			case DIO_PORTB: DDRB=0x00;break;
			case DIO_PORTC: DDRC=0x00;break;
			case DIO_PORTD: DDRD=0x00;break;
		}
	}
	
}

void MDIO_TogglePin(u8 Copy_u8Port, u8 Copy_u8Pin){
	switch(Copy_u8Port){
	   case DIO_PORTA:TOGGLE_BIT(PORTA,Copy_u8Pin);break;
	   case DIO_PORTB:TOGGLE_BIT(PORTB,Copy_u8Pin);break;
	   case DIO_PORTC:TOGGLE_BIT(PORTC,Copy_u8Pin);break;
	   case DIO_PORTD:TOGGLE_BIT(PORTD,Copy_u8Pin);break;
	}
}