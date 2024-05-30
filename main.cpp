#include <iostream>
#include "Cheap.cpp"
using namespace std;
bool cmp(int &a , int &b) {
    return a < b;
}
signed main() {
    int arr[] = {4, 10 , 2 ,3 ,5};
    HeapSort<int> hsort(arr , 5);
    hsort.print();
    hsort.sort([](int &a , int &b) ->bool { return a > b ;});
    hsort.print();
    return 0;

}