#include <iostream>
using namespace std;
void sort(int *arr , int a , int b) {
	if(a == b || a >= b) return;
	int c = (a + b) >> 1;
	if( (arr[c] > arr[a] && arr[a] < arr[b]) || (arr[c] < arr[a] && arr[a] > arr[b])) {
		c = a;
	}
	else if( (arr[b] > arr[a] && arr[b] < arr[c]) || (arr[b] < arr[a] && arr[b] > arr[c]) ) {
		c = b;
	}
	int bb=b, aa=a;	
	while(a < b) {
		while(arr[a] < arr[c]&&a<b) {
			a++;
		}
		while(arr[b] > arr[c] && a < b) {
			b--;
		}
		swap(arr[a] , arr[b]);
	}
	swap(arr[c] , arr[a]);
	sort(arr , aa , a - 1);
	sort(arr , a + 1 , bb);
}


signed main() {
	int arr[10] = {5 ,3 ,2 ,1 ,4 , 6 ,7 ,8 ,9, 10};
	int n = 10;

	sort( arr , 0 , 9 );
	for(auto &p : arr) {
		cout << p << endl;
	}

	return 0;
}
