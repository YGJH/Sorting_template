#include "Cqsort.h"
template<class T>
void Qsort<T>::sort(T *st , T *en , bool(*cmp)(T &a , T &b) ) {
	T * enn = en;
	int siz = (en - st);
	T *stt = st;
	en--;
	if(siz == 2) {
		if(!cmp(*st , *en)) NNode<T>::swap(*st ,*en);
		return;
	}
	else if ( siz < 2 ) {
		return ;
	}
	T c = *(st + (siz>>1));
	if( (cmp(*en , c) && cmp(*st , *en) ) || (cmp(c , *en) && cmp(*en , *st)) ){
		c = *en;
	}
	else if( (cmp(*st , c)&&cmp(*en , *st)) || (cmp(c , *st) && cmp(*st , *en)) ) {
		c = *en;
	}
	while(st != en) {
		while(cmp(*st , c) && st != en) {
			st++;
		}
		while(cmp(c , *en) && st != en) {
			en--;
		}
		NNode<T>::swap(*st , *en);
		if(en != st) {
			st++;
		}
	}
	sort(stt , st, cmp);
	sort(st+1,  enn , cmp);
}

