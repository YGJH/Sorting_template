#include <iostream>
#include "Cqsort.cpp"
using namespace std;
const int MXN = 1e5+1;
int n;
 class Book{
    public:
    int id;
    string name;
    bool operator<(Book &a) const{
        return id < a.id;
    }
    bool operator>(Book &a)const{
        return id > a.id;
    }
    bool operator==(Book &a) const{
        return id==a.id && name == a.name;
    }
};
template <typename T>
constexpr static bool(*cmp_)(T &a , T &b) = [](T &a , T &b) { return a < b ;};
template<typename T>
inline void sort(T *st , T *en , bool(*cmp)(T &a , T &b) = cmp_<T> ) {
    if(en - st <= 100) {
        HeapSort<T> he(st);
        he.sort(st , en , cmp );
        he.print(st , en, [](T &b) { cout << b.id  << b.name << endl;});
    }
    else {
        Qsort<T> qq(st);
        qq.sort(st , en , cmp);
        qq.print(st,en , [](T &b) {cout << b.id  << b.name << endl;});
    }
}
Book arr[MXN];
// int arr[MXN];
signed main() {
    std::cin >> n;
    for(int i = 0 ; i < n ; i++) {
        std::cin >> arr[i].id;
        getline(cin, arr[i].name);
    }
    // for(int i = 0 ; i < n ; i++) {
    //     cin >> arr[i];
    // }
    // heap sort
    // HeapSort<Book> hep(arr);
    // hep.sort(arr , arr + n , [](Book &a , Book &b) -> bool { return a > b; }) ;
    // hep.print(arr , arr + n , [](Book&a){cout << a.id << ' ' << a.name << endl;});

    // Quick sort;
    // Qsort<Book> qq(arr);
    // qq.sort(arr , arr +Book, tmp<Book>);
    // qq.print(arr , arr + n, [](Book &a) {std::cout << a.id << ' ' << a.name << std::endl;});
    
    sort<Book>(arr , arr + n );
    // for(int i = 0 ; i < n ; i++) {
    //     cout << arr[i] << endl;
    // }

    return 0;

}
