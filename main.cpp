#include <iostream>
// #include "Cqsort.cpp"
#include "Sort.h"
using namespace std;
const int MXN = 1e3;
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
Book arr[MXN];
signed main() {
    std::cin >> n;
    for(int i = 0 ; i < n ; i++) {
        // std::cin >> arr[i].id >> arr[i].name;
        std::cin >> arr[i].id;
        getline(cin, arr[i].name);
    }
    // heap sort
    // HeapSort<int> hep(arr);
    // hep.sort(arr , arr + n , [](int &a , int &b) -> bool { return a < b; }) ;
    // hep.print(arr , arr + n);

    // Quick sort;
    // Qsort<Book> qq(arr);
    // qq.sort(arr , arr + n);
    // qq.print(arr , arr + n, [](Book &a) {std::cout << a.id << ' ' << a.name << std::endl;});
    return 0;

}
