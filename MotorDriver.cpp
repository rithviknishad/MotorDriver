#include "MotorDriver.h"

Motor::Motor(uint8_t ina, uint8_t inb, uint8_t en)
{
    PIN_IN1 = ina;
    PIN_IN2 = inb;
    PIN_EN = en;

    pinMode( PIN_IN1, OUTPUT);
    pinMode( PIN_IN2, OUTPUT);
    pinMode( PIN_EN,  OUTPUT);

    digitalWrite(PIN_IN1, 0);
    digitalWrite(PIN_IN2, 0);
    digitalWrite(PIN_EN,  0);
}

void Motor::move(uint8_t direction, uint8_t speed)
{
    digitalWrite(PIN_IN1, direction & (1 << 0));
    digitalWrite(PIN_IN2, direction & (1 << 1));
    analogWrite(PIN_EN, (speed > 255) ? 255 : speed);    
}