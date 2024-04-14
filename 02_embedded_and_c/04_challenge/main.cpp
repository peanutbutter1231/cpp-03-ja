#include "led_controller.hpp"

#include <iostream>

int main(){
    LedController ledcontroller;

    ledcontroller.turnOn();
    if(ledcontroller.getState()){
        std::cout << "LED is ON." << std::endl;
    }

    ledcontroller.turnOff();
    if(!ledcontroller.getState()){
        std::cout << "LED is OFF." << std::endl;
    }

    return 0;
}