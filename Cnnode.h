#ifndef __NNODE__
#define __NNODE__
template<class T>
class NNode {
    protected:
        T * arr;
    public:
        void swap(T &a , T &b);
        // int tmp = 0;
        // void print(T *st , T *en , void(*p)(T &a)) ;
        virtual void sort(T *st ,T *en , bool(*cmp)(T &a , T &b)) = 0;
};
#endif