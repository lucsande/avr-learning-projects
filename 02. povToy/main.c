/* Blinker Demo */

// ------- Preamble -------- //
#include <avr/io.h>     /* Defines pins, ports, etc */
#include <util/delay.h> /* Functions to waste time */

void setPortDVoltage(uint8_t values)
{
  PORTD = values;
  _delay_ms(2);
}

int main(void)
{

  // -------- Inits --------- //
  /* Data Direction Register D: writing a one to the bit enables output. */
  DDRD |= 0b11111111;

  // ------ Event loop ------ //
  while (1)
  {
    setPortDVoltage(0b00001110);
    setPortDVoltage(0b00011000);
    setPortDVoltage(0b10111101);
    setPortDVoltage(0b01110110);
    setPortDVoltage(0b00111100);
    setPortDVoltage(0b00111100);
    setPortDVoltage(0b00111100);
    setPortDVoltage(0b01110110);
    setPortDVoltage(0b10111101);
    setPortDVoltage(0b00011000);
    setPortDVoltage(0b00001110);

    setPortDVoltage(0b00000000);
    _delay_ms(10);
  }

  /* This line is never reached */
  return 0;
}
