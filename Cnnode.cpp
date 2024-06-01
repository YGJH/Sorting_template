#include "Cnndoe.h"
// template<class T>
// void NNode<T>::print(T *st , T *en, void(*p)(T &a)) {
//     T *tmp = st;
//     int size = (en - st); 
//     while(tmp != en) {
//         p(*tmp);
//         tmp++;
//     }
//     std::cout << '\n';
// }
template<class T>
inline void NNode<T>::swap(T &a, T &b) {
	T tmp = a;
	a = b;
	b = tmp;
}