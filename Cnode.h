#ifndef __SORT__
#define __SORT__
#include <iostream>
template<class T>
class Node {
    protected:
        T * arr;
    public:
        void swap(T &a , T &b);
        int tmp = 0;
        void print(T *st , T *en , void(*p)(T &a)) ;
        virtual void sort(T *st ,T *en , bool(*cmp)(T &a , T &b)) = 0;
};
#endif