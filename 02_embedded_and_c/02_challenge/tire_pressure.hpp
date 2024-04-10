#pragma once

#include "units.hpp"
#include "pressure_sensor.hpp"

class TirePressure : public PressureSensor {
public:
    pressure::psi read() override;
};
