#include "DigitalClock.h"
#include <iostream>

int main(int, char **)
{   
    DigitalClock clock(20, 31, 0);
    std::cout<<"Created clock: hours = 20 minutes = 31 seconds = 0"<<std::endl;
    std::cout<<"Display"<<std::endl;
    clock.display();

    std::cout<<"Clock ticks"<<std::endl;
    for (unsigned int i = 0; i < 61; i++)
    {
        clock.tick();
        if (i % 10 == 0)
            clock.display();
    }
    
    DigitalClock brokenClock(25, 90, -9);
    std::cout<<"Created clock: hours = 25 minutes = 90 seconds = -9"<<std::endl;
    brokenClock.display();
            

    return 0;
}