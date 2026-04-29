#include "SmartArray.h"
#include <iostream>

SmartArray::SmartArray(int n)
{   
    this->size = n;
    this->data = new int[n];
    for (int i = 0; i < n; i++)
        data[i] = 0;
}

SmartArray::~SmartArray()
{
    delete[] this->data;
    std::cout << "Memory free" << std::endl;
}

void SmartArray::setElement(int index, int value)
{
    if (index >= 0 && index < this->size)
        this->data[index] = value;
        return;
    std::cout << "Error: wrong index!" << std::endl;
}

int SmartArray::getElemet(int index) const
{
    if (index >= 0 && index < this->size)
        return this->data[index];

    std::cout << "Error: wrong index!" << std::endl;
    return -1;
}