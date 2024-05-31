#ifndef __QSORT__
#define __QSORT__
#include "Cheap.cpp"
template<class T>
class Qsort : public HeapSort<T>{
    public:
        Qsort<T>(T *arr , int size) : HeapSort<T>(*arr , size) {};
        void qsort( bool(*cmp)(int *a , int *b) = HeapSort<T>::cmp_ , T *st , T *en);
};

#endif