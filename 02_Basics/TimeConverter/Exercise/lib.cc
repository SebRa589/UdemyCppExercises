#include <cstdint>

#include "lib.h"

float convert_milliseconds_to_seconds(const float milliseconds)
{
    return milliseconds/1000.0F;
}

float convert_seconds_to_minutes(const float seconds)
{
    return seconds/60.0F;
}

float convert_minutes_to_hours(const float minutes)
{
    return minutes/60.0F;
}

float convert_milliseconds_to_minutes(const float milliseconds)
{
    //float scnds = convert_milliseconds_to_seconds(milliseconds);
    //return convert_seconds_to_minutes(scnds);
    return convert_seconds_to_minutes(convert_milliseconds_to_seconds(milliseconds));
    //return milliseconds/60000.0F;
}

float convert_milliseconds_to_hours(const float milliseconds)
{
    return convert_minutes_to_hours(convert_milliseconds_to_minutes(milliseconds));
}

float convert_seconds_to_hours(const float seconds)
{
    return convert_minutes_to_hours(convert_seconds_to_minutes(seconds));
}
