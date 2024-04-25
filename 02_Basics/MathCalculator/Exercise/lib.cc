#include <cstdint>
#include <iostream>
#include <cmath>
#include "lib.h"

double calculate_pi(const std::uint32_t num_iterations)
{
    double current_sum = 0.0;
    for (std::uint32_t i = 0; i < num_iterations; i++)
    {
        current_sum = current_sum + (1.0 / (4.0 * i + 1.0)) - (1.0 / (4.0 * i + 3.0));
    }
    return current_sum * 4.0;
}

void print_dec_to_bin(std::uint16_t value)
{
    std::cout << "bin2dec of " << value << ": ";
    constexpr std::int8_t data_length = 8;
    constexpr std::int8_t n = data_length - 1;
    for (std::int8_t i = n; i >= 0; i--)
    {
        std::uint16_t pow_uint8 = static_cast<std::uint16_t>(pow(2,i));
        if (value < pow_uint8)
        {
            std::cout << "0";
        }
        else
        {
            std::cout << "1";

            value = value - pow_uint8;
        }
    }
}
