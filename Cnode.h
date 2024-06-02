#ifndef __NODE__
#define __NODE__
template<class T>
class Node {
    public:
        void swap(T &a , T &b);
        virtual void sort(T *st ,T *en , bool(*cmp)(T &a , T &b)) = 0;
};
#endif