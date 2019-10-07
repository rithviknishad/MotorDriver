#include <Arduino.h>
#include "MotorDriver.h"

void MotorDriver::Initialize(int ina, int inb, int en)
{
    pin_IN1 = ina;
    pin_IN2 = inb;
    pin_EN = en;

    pinMode(pin_IN1, OUTPUT);
    pinMode(pin_IN2, OUTPUT);
    pinMode(pin_EN, OUTPUT);

    digitalWrite(pin_IN1, 0);
    digitalWrite(pin_IN2, 0);
}

Motor::Motor(int ina, int inb, int en)
{
    Initialize(ina, inb, en);
}

Motor::Motor(Motor & motor)
{
    Initialize(motor.pin_IN1, motor.pin_IN2, motor.pin_EN);
}

void Motor::set(int speed)
{
    digitalWrite(pin_IN1, speed >= 0);
    digitalWrite(pin_IN2, speed <= 0);

    if (speed < 0)
        speed *= -1;

    analogWrite(pin_EN, (speed > 255) ? 255 : speed);    
}