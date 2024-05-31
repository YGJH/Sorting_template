#include <iostream>
#include "Cqsort.cpp"
// #include "Cheap.cpp"
using namespace std;

signed main() {
    int arr[] = {10 , 5, 4 ,3 , 2};
    int sz = sizeof(arr) / sizeof(int);
    Qsort<int> qq(arr , sz);
    qq.sort([](int &a , int &b) -> bool {return a < b} , arr , arr + sz);
    return 0;

}