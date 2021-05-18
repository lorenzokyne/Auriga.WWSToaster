#ifndef SENSOR_H
#define SENSOR_H
#include "Sensor.h"
#endif
#include "Arduino.h"

class Motion : Sensor
{

public:
    Motion(int pin) : Sensor(pin){};
    void measureValue(char *value)
    {
        value[0] = '\0';
        int motionVal = digitalRead(this->pin);
        if (motionVal == HIGH)
        {
            int StrLen = sprintf(value, "%s", "Motion detected!");
            value[StrLen] = '\0';
        }
    }
};