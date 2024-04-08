#pragma once

template <typename T>
T clamp(T value, T min_value, T max_value){
    return std::max(std::min(value, max_value), min_value);
}
