#include "Sort.h"
#include <iostream>
template<class T>
void Sort<T>::print(T *st , T *en, void(*p)(T &a)) {
    T *tmp = st;
    int size = (en - st); 
    while(tmp != en) {
        p(*tmp);
        tmp++;
    }
    std::cout << '\n';
}