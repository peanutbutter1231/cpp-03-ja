#include <iostream>

#include "units.hpp"
#include "pressure_sensor.hpp"
#include "temperature_sensor.hpp"
#include "cpu_temperature.hpp"
#include "cabin_temperature.hpp"
#include "tire_pressure.hpp"

int main() {
    CPUTemperature cpuTemp;
    CabinTemperature cabinTemp;
    TirePressure tirePressure;

    std::cout << "CPU Temperature: " << cpuTemp.read().value << " Kelvin" << std::endl;
    std::cout << "Cabin Temperature: " << cabinTemp.read().value << " Kelvin" << std::endl;
    std::cout << "Tire Pressure: " << tirePressure.read().value << " Psi" << std::endl;

    return 0;
}