#include "Cheap.h"
using namespace std;

template<class T>
void HeapSort<T>::heapfiy(bool(*func)(T &a , T &b) , int i) {
    if(i >= Sort<T>::size) return ;
    int c1 = (i << 1) + 1;
    int c2 = (i << 1) + 2;
    int ma = i;
    if( c1 < Sort<T>::size && func(Sort<T>::arr[ma], Sort<T>::arr[c1])) {
	    ma = c1;
    }
    if( c2 < Sort<T>::size && func(Sort<T>::arr[ma] , Sort<T>::arr[c2])) {
	    ma = c2;
    }
    if(ma != i) {

		this->swap(Sort<T>::arr[ma] , Sort<T>::arr[i]);
		heapfiy(func , ma);
    }
}
template<class T>
void HeapSort<T>::build_heap(bool(*cmp)(T &a , T &b)) {
	for(int i = ((Sort<T>::size -1) >> 1) ; i>=0 ; i--) {
		heapfiy(cmp, i);
	}
	return ;
}
template<class T>
void HeapSort<T>::sort(bool(*cmp)(T &a , T &b) ) {
	this->print();
	build_heap(cmp);
	this->print();
	int size_ = Sort<T>::size;
	while(Sort<T>::size--){
		this->swap(Sort<T>::arr[0] , Sort<T>::arr[Sort<T>::size]);
		heapfiy( cmp , 0);
	}
	Sort<T>::size = size_;
return ;
}