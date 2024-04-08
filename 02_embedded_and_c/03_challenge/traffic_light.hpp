#pragma once

#include <iostream>

enum class TrafficLightState {
    red,
    yellow,
    green
};

int trafficLightDuration(TrafficLightState state);

