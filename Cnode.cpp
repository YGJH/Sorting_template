#include "Cnode.h"
template<class T>
inline void Node<T>::swap(T &a, T &b) {
	T tmp = a;
	a = b;
	b = tmp;
}