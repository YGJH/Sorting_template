#ifndef __HEAP__
#define __HEAP__
#include "Csort.cpp"
template<typename T>
class HeapSort : virtual public Sort<T>{
    public:
    int c1 , c2 , ma;
    void swap(T &a  , T &b);
    void heapfiy(bool(*func)(T &a , T &b), int i = 0);
    void build_heap( bool(*cmp)(T &a , T &b));
    virtual void sort(bool(*cmp)(T &a , T &b) = Sort<T>::cmp_) override;
    HeapSort<T>(T * arr , int size) : Sort<T> (arr , size) {} ;
};



#endif