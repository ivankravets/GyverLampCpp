#pragma once
#include <Arduino.h>

class GyverTimer
{
public:
    static void Initialize(const char* poolServerName, int timeOffset, int updateInterval, uint32_t timerInterval);
    static void Process();
    static void SetInterval(uint32_t timerInterval);
    static void ForceUpdate();
    static String FormattedTime();
    static String ClockTime();
};
