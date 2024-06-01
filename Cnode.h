#ifndef __NODE__
#define __NODE__
#include <iostream>
template<class T>
class Node {
    protected:
        T * arr;
        static constexpr bool(*cmp_)(T &a , T &b) = [](T &a , T &b) -> bool {return a < b;};
    public:
        void swap(T &a , T &b);
        // int tmp = 0;
        // void print(T *st , T *en , void(*p)(T &a)) ;
        virtual void sort(T *st ,T *en , bool(*cmp)(T &a , T &b) = cmp_) = 0;
};
#endif