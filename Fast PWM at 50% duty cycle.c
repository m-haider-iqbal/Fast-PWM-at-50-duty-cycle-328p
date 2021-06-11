
//Fast PWM at 50% duty cycle

#include <Arduino.h>
void setup() 
{
//Timer Initialize
  TCCR0A = 0b01000011; //Fast PWM Mode
  TCCR0B = 0b00001001;
  OCR0A = 63; 
  DDRD = 1 << 6;
}

void loop() 
{

}

// M HAIDER IQBAL
