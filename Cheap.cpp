#include "Cheap.h"
using namespace std;

template<class T>
void HeapSort<T>::heapfiy(int size , bool(*func)(T &a , T &b) , int i) {
    if(i >= size) return ;
    int c1 = (i << 1) + 1;
    int c2 = (i << 1) + 2;
    int ma = i;
    if( c1 < size && func(Sort<T>::arr[ma], Sort<T>::arr[c1])) {
	    ma = c1;
    }
    if( c2 < size && func(Sort<T>::arr[ma] , Sort<T>::arr[c2])) {
	    ma = c2;
    }
    if(ma != i) {

		this->swap(Sort<T>::arr[ma] , Sort<T>::arr[i]);
		heapfiy(size ,func , ma);
    }
}
template<class T>
void HeapSort<T>::build_heap(bool(*cmp)(T &a , T &b) , int size) {
	for(int i = ((size -1) >> 1) ; i>=0 ; i--) {
		heapfiy(size ,cmp, i);
	}
	return ;
}
template<class T>
void HeapSort<T>::sort(T *st , T *en , bool(*cmp)(T &a , T &b) ) {
	int size = (en - st );
	build_heap(cmp , size);
	// int size_ = size;
	while(size--) {
		this->swap(Sort<T>::arr[0] , Sort<T>::arr[size]);
		heapfiy(size,  cmp , 0);
	}
return ;
}