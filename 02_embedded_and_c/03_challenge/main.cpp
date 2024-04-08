#include "traffic_light.hpp"

#include <iostream>

int main() {
    // Example usage
    std::cout << "Red light duration: " << trafficLightDuration(TrafficLightState::RED) << " seconds" << std::endl;
    std::cout << "Yellow light duration: " << trafficLightDuration(TrafficLightState::YELLOW) << " seconds" << std::endl;
    std::cout << "Green light duration: " << trafficLightDuration(TrafficLightState::GREEN) << " seconds" << std::endl;

    return 0;
}