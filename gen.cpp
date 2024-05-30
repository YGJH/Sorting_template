#include <bits/stdc++.h>
using namespace std;

signed main() {
	mt19937 now(chrono::steady_clock::now().time_since_epoch().count());
	uniform_int_distribution<> gen(INT32_MIN , INT32_MAX);
	const int N = 10;
	for(int i = 0 ; i < N ; i++) {
		cout << gen(now) << endl;
	}
	return 0;
}
