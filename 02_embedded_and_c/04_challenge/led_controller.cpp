#include <iostream>

#include "led_controller.hpp"

LedController::LedController(){
    led_init();
}

void LedController::turnOn(){
    led_on();
//    ledState = true;
}

void LedController::turnOff(){
    led_off();
//    ledState = false;
}

bool LedController::getState(){
    return led_get_state();
}