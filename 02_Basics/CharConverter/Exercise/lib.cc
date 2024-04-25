#include "lib.h"
#include <iostream>

bool is_numeric(const char character)
{
    if (character >= '0' && character <= '9')
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool is_alpha(const char character)
{
    if (character >= 'A' && character <= 'z')
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool is_alpha_numeric(const char character)
{
    if (is_alpha(character) == true || is_numeric(character) == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool is_upper_case(const char character)
{
    if (character >= 'A' && character <= 'Z')
    {
        return true;
    }
    else
        return false;
}

bool is_lower_case(const char character)
{
    if (character >= 'a' && character <= 'z')
    {
        return true;
    }
    else
        return false;
}

char to_upper_case(const char character)
{
    if (is_lower_case(character) == true)
    {
        return character-32;
    }
    else
    {
        return character;
        /*std::cout << "No lower case character entered";
        return 0;*/
    }
}

char to_lower_case(const char character)
{
    if (is_upper_case(character) == true)
    {
        return character+32;
    }
    else
    {
        return character;
        /*std::cout << "No upper case character entered";
        return 0;*/
    }
}
