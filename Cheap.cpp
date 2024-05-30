#include "Cheap.h"

template<typename T>
void HeapSort<T>::swap(T &a, T &b) {
	T tmp = a;
	a = b;
	b = a;
	return ;
}
template<typename T>
void HeapSort<T>::heapfiy(bool(*func)(T &a , T &b) , int i) {
    if(i >= Sort<T>::size) return ;
    c1 = (i << 1) + 1;
    c2 = (i << 1) + 2;
    ma = i;
    if( c1 < Sort<T>::size && func(Sort<T>::arr[ma], Sort<T>::arr[c1])) {
	    ma = c1;
    }
    if( c2 < Sort<T>::size && func(Sort<T>::arr[ma] , Sort<T>::arr[c1])) {
	    ma = c2;
    }
    if(ma != i) {
		swap(Sort<T>::arr[ma] , Sort<T>::arr[i]);
		heapfiy(func , ma);
    }
}
template<typename T>
void HeapSort<T>::build_heap(bool(*cmp)(T &a , T &b)) {
	for(int i = ((Sort<T>::size -1) >> 1) ; i>=0 ; i--) {
		heapfiy(cmp, i);
	}
	return ;
}
template<typename T>
void HeapSort<T>::sort(bool(*cmp)(T &a , T &b) ) {
	build_heap(cmp);
	while(Sort<T>::size--){
		swap(Sort<T>::arr[0] , Sort<T>::arr[Sort<T>::size]);
		heapfiy( cmp , 0);
	}
return ;
}