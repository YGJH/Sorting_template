#include <iostream>
using namespace std;
int c1 , c2 , ma;
template<typename T , typename V>
auto cmp = [](T &a , V &b) {return a > b;};
void heapfiy(auto func , int * a , int size  , int i = 0) {
    if(i >= size) return ;
    c1 = (i << 1) + 1;
    c2 = (i << 1) + 2;
    ma = i;
    if( c1 < size && func(a[c1], a[ma])) {
	    ma = c1;
    }
    if( c2 < size && func(a[c2] , a[ma])) {
	    ma = c2;
    }
    if(ma != i) {
 	swap(a[ma] , a[i]);
	heapfiy(func , a , size , ma);
    }
}
template<typename T>
void build_heap(T *a , int size) {
	for(int i = ((size -1) >> 1) ; i>=0 ; i--) {
		heapfiy(cmp<int&,int&>, a , size , i);
	}
return ;
}
template<typename T>
void heap_sort(T *a , int size) {
	build_heap(a , size);
	while(size--){
		swap(a[0] , a[size]);
		heapfiy(cmp<int& , int&>, a , size , 0);
	}
return ;
}

int main()  {
    int arr[] = {4, 10 , 2 ,3 ,5};
	heap_sort(arr , 5);
	for(const auto &p : arr) {
		cerr << p << endl;
	}
	return 0;
}
