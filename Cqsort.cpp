#include "Cqsort.h"
template<class T>
void Qsort<T>::qsort( bool(*cmp)(T *a , T *b) = HeapSort<T>::cmp_ , T *st , T *en) {
	if(Sort<T>::size <= 2) {
		if(*st > *en) HeapSort<T>::swap(st ,en);
		return;
	}
	T *stt = st;
	T *enn = en;
	T *c = (st + (HeapSort<T>::size>>1));
	if( (*c < *st && *st < *en) || (*c > *st && *st > *en) ) {
		c = st;
	}
	else if( (*en > *c && *en < *st) || (*en < *c && *en > *st)) {
		c = en;
	}
	int size1 = 1 , size2 = 1;
	while(st != en) {
		while(cmp(st ,c) && st != en) {
			size1++;
			st++;
		}
		while(cmp(c,en) && st != en) {
			en--;
			size2++;
		}
		Sort<T>::swap(st , en);
		if(en != st && *st == *en) {
			en--;
			size2++;
		}
	}
	swap(st , c);
	qsort( cmp , size1  , stt , stt + size1 - 1 );
	qsort( cmp , size2 + 1 , stt + size - 1 - size2  , enn);
}

// signed main() {
// 	int arr[10] = {-1 , -4 , 3 , -13 , 44 ,21 , 4 , -3 , -33 , 45};
// //	int arr[] = {217480770,-769241043,-2032548806,2086552081,-1587577147,1685876467,-1044566486,-2038496971,553593958,1041611626};
// 	int n = 10;

// 	for(int i = 0 ; i < n ; i++) {
// 		cin >> arr[i];
// 	}
// 	bool(*func)(int *a , int *b) = [](int *a , int *b) {return *a < *b;};
// 	int * st = arr;
// 	int * en = arr + n - 1;
// 	qsort(arr , func , n , st , en);
// 	for(auto &p:arr) {
// 		cout << p << ' ';
// 	}
// 	return 0;
// }
