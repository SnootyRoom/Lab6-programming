#ifndef SMARTARRAY_H
#define SMARTARRAY_H

class SmartArray
{
    private:
        unsigned int size;
        int* data;
    
    public:
        SmartArray(unsigned int n);

        ~SmartArray();

        void setElement(int index, int value);

        int getElemet(int index) const;
};

#endif