#ifndef __NNODE__
#define __NNODE__
template<class T>
class NNode {
    public:
        void swap(T &a , T &b);
        virtual void sort(T *st ,T *en , bool(*cmp)(T &a , T &b)) = 0;
};
#endif