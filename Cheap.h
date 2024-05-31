#ifndef __HEAP__
#define __HEAP__
#include "Csort.cpp"
template<class T>
class HeapSort: virtual public Sort<T>{
    private:
    void heapfiy(bool(*func)(T &a , T &b), int i = 0);
    void build_heap( bool(*cmp)(T &a , T &b));
    public:
    virtual void sort(bool(*cmp)(T &a , T &b) = Sort<T>::cmp_) override;
    HeapSort<T>(T * arr , int size) : Sort<T> (arr , size) {} ;
};



#endif