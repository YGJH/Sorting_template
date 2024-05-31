#ifndef __SORT__
#define __SORT__
template<class T>
class Sort {
    protected:
        T * arr;
        int size;
        static constexpr bool(*cmp_)(T &a , T &b) = [](T &a , T &b) -> bool {return a < b;};
    public:
        void swap(T &a , T &b);
        int tmp = 0;
        Sort(T *arr , int size) {
            this -> arr = arr;
            this -> size = size ;
        }
        void print();
        virtual void sort(bool(*cmp)(T &a , T &b) = cmp_) = 0;
};
#endif