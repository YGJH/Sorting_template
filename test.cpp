#include <iostream>
using namespace std;

void hsort(int arr[] , int size , int i) {
	int ma = i;
	if(i >= size) return ;
	int c1 = i * 2 + 1;
	int c2 = i * 2 + 2;
	if(c1 < size && arr[ma] < arr[c1]){
		ma = c1;
	}
	if(c2 < size && arr[ma] < arr[c2]){
		ma = c2;
	}
	if(ma != i) {
		int tmp = arr[ma];
		arr[ma] = arr[i];
		arr[i] = tmp;
		hsort(arr , size , ma);
	}
return;
}

signed main() {

	int arr[] = {4 , 10 , 3 , 5 , 1 , 2};
	hsort(arr , 6 , 0);
	for(int i = 0 ; i < 6 ; i++) {
		cout << arr[i] << endl;
	}

	return 0 ;
}

