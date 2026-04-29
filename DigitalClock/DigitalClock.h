#ifndef DIGITALCLOCK_H
#define DIGITALCLOCK_H

class DigitalClock
{
    private:
        unsigned int hours;
        unsigned int minutes;
        unsigned int seconds;

    public:
        DigitalClock(unsigned int hours, unsigned int minutes, unsigned int seconds);

        ~DigitalClock();

        void display() const;
        void tick();
};

#endif