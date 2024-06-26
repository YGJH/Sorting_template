#ifndef __QSORT__
#define __QSORT__
#include "Cheap.cpp"
template<class T>
class Qsort : virtual public Node<T>{
    public:
        Qsort<T>() = default;
        virtual void sort (T *st , T *en , bool(*cmp)(T &a , T &b)) override;
};

#endif