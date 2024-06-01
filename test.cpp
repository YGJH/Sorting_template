#include <cstdio>
using namespace std;
int T;
inline void swap(int & a , int &b) {
    T = a;
    a = b;
    b = T;
}
namespace mysort{
    template<typename T>
    void sort(T *st , T *en , bool(*cmp)(T &a , T &b) ) {
        T * enn = en;
        int siz = (en - st);
        T *stt = st;
        en--;
        if(siz == 2) {
            if(!cmp(*st , *en)) swap(*st ,*en);
            return;
        }
        else if ( siz < 2 ) {
            return ;
        }
        T c = *(st + (siz>>1));
        if( (c < *st && *st < *en) || (c > *st && *st > *en) ) {
            c = *st;
        }
        else if( (*en > c && *en < *st) || (*en < c && *en > *st)) {
            c = *en;
        }
        while(st != en) {
            while(cmp(*st , c) && st != en) {
                st++;
            }
            while(cmp(c , *en) && st != en) {
                en--;
            }
            swap(*st , *en);
            if(en != st && *en == *st) {
                st++;
            }
        }
        sort(stt , st, cmp);
        sort(st+1,  enn , cmp);
    }
}
const int MXN = 1e5 + 1;
int arr[MXN];
int i , n ;
signed main() {
    scanf("%d" , &n);
    for(i = 0 ; i < n ; i++) {
        scanf("%d" , &arr[i]);
    }
    mysort::sort<int>( arr , arr + n , [](int &a , int &b){return a < b;});
    for(i = 0 ; i < n ; i ++) {
        printf("%d " , arr[i]);
    }
}
