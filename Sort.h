#include "Cqsort.h"
#include "Cheap.h"
template <class T>
class Sort : public Qsort<T> , public HeapSort<T>  {
    public:
        static void Sort(T *st , T *en) {
            if(en - st < 32) {
                HeapSort<T> he(st);
                he.sort(st , en);
            }
            else {
                Qsort<T> qq(st);
                qq.sort(st);
            }
        }
}