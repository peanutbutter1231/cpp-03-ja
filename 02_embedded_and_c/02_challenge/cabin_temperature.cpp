#include "units.hpp"
#include "cabin_temperature.hpp"

temperature::kelvin CabinTemperature::read() const{
    return temperature::kelvin(25.0);
}
