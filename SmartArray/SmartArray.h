#ifndef SMARTARRAY_H
#define SMARTARRAY_H

class SmartArray
{
    private:
        int size;
        int* data;
    
    public:
        SmartArray(int n);

        ~SmartArray();

        void setElement(int index, int value);

        int getElemet(int index) const;
};

#endif