#include "traffic_light.hpp"

int trafficLightDuration(TrafficLightState state) {
    switch (state) {
        case TrafficLightState::red:
            return 30; // Red light duration in seconds
        case TrafficLightState::yellow:
            return 5; // Yellow light duration in seconds
        case TrafficLightState::green:
            return 45; // Green light duration in seconds
        default:
            return 0; // Invalid state (fallback)
    }
}