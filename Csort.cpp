#include "Csort.h"
#include <iostream>
template<class T>
void Sort<T>::print(T *st , T *en) {
    T *tmp = st;
    int size = (en - st); 
    while(tmp != en) {
        std::cout << *tmp;
        tmp++;
        if(tmp != en)
            putchar(' ');
    }
    std::cout << '\n';
}
template<class T>
inline void Sort<T>::swap(T &a, T &b) {
	T tmp = a;
	a = b;
	b = tmp;
}