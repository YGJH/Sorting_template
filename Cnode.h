#ifndef __SORT__
#define __SORT__
#include <iostream>
template<class T>
class Node {
    protected:
        static constexpr void(*p_)(T &a) = [](T &a) {std::cout << a << std::endl;};
    public:
        void swap(T &a , T &b);
        int tmp = 0;
        void print(T *st , T *en , void(*p)(T &a) = p_) ;
        virtual void sort(T *st ,T *en , bool(*cmp)(T &a , T &b)) = 0;
};
#endif