#include <cstdint>
#include <iostream>
#include "lib.h"

std::uint32_t modulo(const std::uint32_t number_a, const std::uint32_t number_b)
{
    if (number_b == 0 )
    {
        return 0;
    }
    std::uint32_t division = number_a / number_b;
    return number_a - division * number_b;
}

std::uint32_t sum_of_digits(std::uint32_t number)
{
    std::uint32_t digit_cnt = 0;
    do
    {
        number = number / 10;
        digit_cnt++;
    } while (number > 0);

    return digit_cnt;
}

std::uint32_t cross_sum(std::uint32_t number)
{
    if (sum_of_digits(number) == 1)
    {
        return number;
    }
    else
    {
        std::uint32_t cross_sum = 0;
        std::uint32_t digits = sum_of_digits(number);
        for (std::uint32_t i = 0; i < digits; i++)
        {
            std::uint32_t modulo_number = modulo(number, 10);
            cross_sum = cross_sum + modulo_number;
            number = (number - modulo_number)/10;
        }
        return cross_sum;
    }

}
/*
#include <cstdint>
#include <iostream>


int main()
{
    std::uint32_t cross_sum = 0;
    std::uint32_t number = 157;
    for (std::uint32_t i = 0; i < 3; i++)
    {
        std::uint32_t modulo_number = number % 10;
        cross_sum = cross_sum + modulo_number;
        number = (number - modulo_number)/10;
    }
    std::cout << cross_sum << "\n";
    return 0;
}

*/
