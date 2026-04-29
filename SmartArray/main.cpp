#include "SmartArray.h"
#include <iostream>

void printArray(const SmartArray &array, int n)
{
    for(int i = 0; i < n; i++) 
        std::cout<<array.getElemet(i)<<" ";
    std::cout<<std::endl;
}

int main(int, char **)
{   
    int n = 10;
    SmartArray array1(n);

    std::cout<<"Array1 elements"<<std::endl;
    printArray(array1, n);


    std::cout<<"Creating temp array"<<std::endl;
    if(true)
    {
        SmartArray tempArray(5);
        printArray(tempArray, 5);
    }

    std::cout<<"Filling array1"<<std::endl;
    for(int i = 0; i < n; i++) 
        array1.setElement(i, i);

    printArray(array1, n);

    return 0;
}