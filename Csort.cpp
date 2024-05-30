#include "Csort.h"
#include <iostream>
template<typename T>
void Sort<T>::print() {
    tmp = 0;
    while(tmp < size ) {
        std::cout << *(arr + tmp);
        tmp++;
        if(tmp < size) putchar(' ');
    }
    std::cout << '\n';
}