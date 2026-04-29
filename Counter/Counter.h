#ifndef COUNTER_H
#define COUNTER_H

class Counter
{
private:
    int count;
    int minLimit;
    int maxLimit;

public:
    Counter(int minLimit, int maxLimit);

    void increment();
    void decrement();

    int getCurrent() const;
};

#endif