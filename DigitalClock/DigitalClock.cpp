#include "DigitalClock.h"
#include <iostream>
#include <iomanip>

DigitalClock::DigitalClock(unsigned int hours, unsigned int minutes, unsigned int seconds)
{
    if (hours > 23 || hours < 0)
        this->hours = 0;
    else
        this->hours = hours;
    if (minutes > 59 || minutes < 0)
        this->minutes = 0;
    else
        this->minutes = minutes;
    if (seconds > 59 || seconds < 0)
        this->seconds = 0;
    else
        this->seconds = seconds;
}

DigitalClock::~DigitalClock() { std::cout << "Clock was deleted" << std::endl; }

void DigitalClock::display() const
{
    std::cout << std::setfill('0')
              << std::setw(2) << this->hours << ":"
              << std::setw(2) << this->minutes << ":"
              << std::setw(2) << this->seconds << std::endl;
}

void DigitalClock::tick()
{
    unsigned int seconds = this->hours * 3600 + this->minutes * 60 + this->seconds + 1;

    this->hours = seconds / 3600;
    this->minutes = seconds / 60 % 60;
    this->seconds = seconds % 3600;
}