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
    // heap sort
//    HeapSort<int> hep(arr);
 ////   hep.sort(arr , arr + n , [](int &a , int &b) -> bool { return a < b; }) ;
  ////  hep.print(arr , arr + n);
//
   //  Quick sort
     Qsort<int> qq(arr);
     qq.sort(arr , arr + n  , [](int &a , int &b)->bool{return a < b;});
     qq.print(arr , arr + n);
    return 0;

}
