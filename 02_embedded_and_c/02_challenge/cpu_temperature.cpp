#include "units.hpp"
#include "cpu_temperature.hpp"

temperature::kelvin CPUTemperature::read() const
{
    return temperature::kelvin(70.0);
}