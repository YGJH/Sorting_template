#include "Cnnode.h"

template<class T>
inline void NNode<T>::swap(T &a, T &b) {
	T tmp = a;
	a = b;
	b = tmp;
}