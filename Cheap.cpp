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
    if(i >= this->size) return ;
    c1 = (i << 1) + 1;
    c2 = (i << 1) + 2;
    ma = i;
    if( c1 < this->size && func(this->arr[ma], this->arr[c1])) {
	    ma = c1;
    }
    if( c2 < this->size && func(this->arr[ma] , this->arr[c1])) {
	    ma = c2;
    }
    if(ma != i) {
		swap(this->arr[ma] , this->arr[i]);
		heapfiy(func , ma);
    }
}
template<typename T>
void HeapSort<T>::build_heap(bool(*cmp)(T &a , T &b)) {
	for(int i = ((this->size -1) >> 1) ; i>=0 ; i--) {
		heapfiy(cmp, i);
	}
	return ;
}
template<typename T>
void HeapSort<T>::sort(bool(*cmp)(T &a , T &b) ) {
	build_heap(cmp);
	while(this->size--){
		swap(this->arr[0] , this->arr[this->size]);
		heapfiy( cmp , 0);
	}
return ;
}