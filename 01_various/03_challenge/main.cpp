#include <iostream>

#include "templates.hpp"

int main()
{
    // 出力: 1 (true)
    std::cout << allTrue(true, true, true) << std::endl;
    // 出力: 0 (false)
    std::cout << allTrue(true, false, true) << std::endl;
    // 出力: 1 (true)
    std::cout << allTrue() << std::endl;

    return 0;
}