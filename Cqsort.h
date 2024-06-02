#ifndef __QSORT__
#define __QSORT__
// #include "Cheap.cpp"
#include "Cnnode.cpp"
template<class T>
class Qsort : virtual public NNode<T>{
    public:
        Qsort<T>(T *arr) {
            this->arr = arr;
        };
        virtual void sort (T *st , T *en , bool(*cmp)(T &a , T &b)) override;
};

#endif