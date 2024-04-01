#include <iostream>
#include <chrono>

#include "timer.hpp"

Timer::Timer() : start_time(std::chrono::high_resolution_clock::now()) {}

Timer::~Timer() {
    auto end_time = std::chrono::high_resolution_clock::now();
    auto elapsed_time = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time).count();
    std::cout << elapsed_time << std::endl;
}