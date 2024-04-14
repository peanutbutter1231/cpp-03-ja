#pragma once

#include "led_controller.h"

class LedController{
    public:
        LedController();
        void turnOn();
        void turnOff();
        bool getState();

    private:
        bool ledState;
};