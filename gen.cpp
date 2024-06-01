#include <bits/stdc++.h>
using namespace std;

signed main() {
	mt19937 now(chrono::steady_clock::now().time_since_epoch().count());
	uniform_int_distribution<> gen(-100 , 1000);
	const int N = 1e5;
	cout << N << endl;
	for(int i = 0 ; i < N ; i++) {
		cout << gen(now) << endl;
	}
	return 0;
}
