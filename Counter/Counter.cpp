#include "Counter.h"
#include <iostream>

Counter::Counter(int minLimit, int maxLimit) : count(minLimit), minLimit(minLimit), maxLimit(maxLimit) {}

void Counter::increment()
{
    if (this->count < this->maxLimit)
        this->count++;
}

void Counter::decrement()
{
    if (this->count > this->minLimit)
        this->count--;
}

int Counter::getCurrent() const
{
    return this->count;
}
