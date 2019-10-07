/*
 *  Name:           Motor Driver
 *  Header:         MotorDriver.h
 *  
 *  Description:    Motor Driver Library
 * 
 *  Chipsets:       L298 H Bridge / Full Bridge
 * 
 *  Author:         Rithvik Nishad (https://github.com/rithviknishad)
 *  Created on:     October 7, 2019 [20:49 IST]
 *  Last Updated:   October 7, 2019 [21:30 IST]
 * 
 */

class Motor
{
    private:

    int pin_IN1, pin_IN2, pin_EN;

    public:

    void Initialize(int ina, int inb, int en);

    Motor(int in1, int in2, int en);
    Motor(Motor & motor);

    void set(int speed);
};