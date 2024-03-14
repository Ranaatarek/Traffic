#ifndef INTERFACE_H_
#define INTERFACE_H_
#include "STD_TYPES.h"
#define  DIO_PORTA 0
#define  DIO_PORTB 1
#define  DIO_PORTC 2
#define  DIO_PORTD 3

#define  DIO_PIN0 0
#define  DIO_PIN1 1
#define  DIO_PIN2 2
#define  DIO_PIN3 3
#define  DIO_PIN4 4 
#define  DIO_PIN5 5
#define  DIO_PIN6 6
#define  DIO_PIN7 7

#define  INPUT 0
#define  OUTPUT 1

#define HIGH 1
#define LOW 0

void MDIO_voidSetPinDir(u8 copy_port,u8 copy_pin,u8 dir);
void MDIO_voidSetPinValue(u8 copy_port,u8 copy_pin,u8 val);

#endif /* INTERFACE_H_ */