#include "Cqsort.cpp"
#include "Cheap.cpp"
template <class T>
class Sort {
    private:
        static constexpr bool(*cmp_)(T &a , T &b) = [](T &a , T &b)->bool { return a < b; };
    public:
        Sort(T *st , T *en , bool(*cmp)(T &a , T &b) = cmp_ ) {
            if(en - st < 100) {
                HeapSort<T> he(st);
                he.sort(st , en , cmp );
            }
            else {
                Qsort<T> qq(st);
                qq.sort(st , en , cmp);
            }
        }
        void print(T *st , T *en, void(*p)(T &a));
};