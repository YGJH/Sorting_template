#ifndef __QSORT__
#define __QSORT__
#include "Cheap.cpp"
class Qsort : public HeapSort{
    private:

    public:
        void qsort( bool(*cmp)(int *a , int *b) = Sort<T>::cmp_ ,int size , int *st , int *en);
};

#endif