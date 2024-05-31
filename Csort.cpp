#include "Csort.h"
#include <iostream>
template<class T>
void Sort<T>::print() {
    tmp = 0;
    while(tmp < size ) {
        std::cout << *(arr + tmp);
        tmp++;
        if(tmp < size) putchar(' ');
    }
    std::cout << '\n';
}
template<class T>
void Sort<T>::swap(T &a, T &b) {
	T tmp = a;
	a = b;
	b = tmp;
}