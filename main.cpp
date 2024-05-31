#include <iostream>
#include "Cqsort.cpp"
// #include "Cheap.cpp"
using namespace std;
const int MXN = 1e5;
int arr[MXN];
int n;
signed main() {
    std::cin >> n;
    for(int i = 0 ; i < n ; i++) {
        std::cin >> arr[i];
    }
    Qsort<int> qq(arr);
    // HeapSort<int> hep(arr , sz);
    // hep.sort([](int &a , int &b) -> bool { return a < b; }) ;
    // hep.print();
    qq.sort(arr , arr + n  , [](int &a , int &b)->bool{return a < b;});
    qq.print(arr , arr + n);
    return 0;

}