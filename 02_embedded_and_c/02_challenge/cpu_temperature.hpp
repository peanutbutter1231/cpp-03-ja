#pragma once

#include "units.hpp"
#include "temperature_sensor.hpp"

class CPUTemperature : public TemperatureSensor {
public:
    temperature::kelvin read() const override;
};