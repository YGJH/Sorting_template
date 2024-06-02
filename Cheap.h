#ifndef __HEAP__
#define __HEAP__
#include "Cnode.cpp"
template<class T>
class HeapSort:  public Node<T>{
    private:
    void heapfiy(T * st ,int size ,bool(*func)(T &a , T &b), int i = 0);
    void build_heap(T *st , bool(*cmp)(T &a , T &b) , int size );
    public:
    virtual void sort(T *st , T *en , bool(*cmp)(T &a , T &b)) override;
    HeapSort<T>() = default;
};
#endif