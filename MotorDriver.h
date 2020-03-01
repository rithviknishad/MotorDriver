/*
 *  Name:           Motor Driver
 *  Header:         MotorDriver.h
 *  
 *  Description:    Motor Driver Library
 * 
 *  L298 H Bridge
 * 
 *  Author:         Rithvik Nishad (https://github.com/rithviknishad)
 *  Created on:     October 7, 2019
 * 
 */

#ifndef __motor_driver_h
#define __motor_driver_h

#define STANDBY     0
#define FORAWRD     (1 << 0)
#define BACKWARD    (1 << 1)
#define BRAKE       ((1 << 0) | (1 << 1))

#define SUPERFAST   255
#define FAST        200
#define NORMAL      150
#define SLOW        80
#define SUPERSLOW   40

class Motor
{
    uint8_t PIN_IN1, PIN_IN2, PIN_EN;

    public:

    Motor(uint8_t in1, uint8_t in2, uint8_t en);

    void move(uint8_t direction = FORAWRD, uint8_t speed = 255);
};

#endif