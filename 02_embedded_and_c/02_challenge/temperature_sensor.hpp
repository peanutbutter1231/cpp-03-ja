#pragma once

#include "units.hpp"

class TemperatureSensor {
public:
    virtual temperature::kelvin read() =0;
};