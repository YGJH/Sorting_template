#include <iostream>
using namespace std;
int tb[1000002];
void re(char *tmp) {
	int i = 0;
	int kk = 0;
	bool w=0;
	char c;
	while( i < 10 )  {
		tb[i] = 0;
		w = 0;
		c = tmp[kk++];
		while(c < '0' || c > '9' && kk < 200) {
			w|=(c=='-');
			c = tmp[kk++];
		}
		while(c >= '0' && c <= '9' && kk < 200 ) {
			tb[i] = (tb[i] << 1) + (tb[i] << 3) + (c & 15) ;
			c=tmp[kk++];
		}
		if(w) tb[i] = tb[i] * -1;
		i++;
	}
}

signed main() {
	while(1) {
		system("./gen > input");
		system("./main < input > output");
		FILE *ac = fopen("output" , "r+");
		int size ;
		fseek(ac , 0 , SEEK_END);
		size = ftell(ac);
		rewind(ac);
		char tmp[3000000];
		fread(tmp , size , 1 , ac);
		re(tmp);
		for(int i = 1 ; i < 10 ; i++) {
			if(tb[i] > tb[i-1]){
				cout << "-1" << endl;
				return 0;
			}
		}
		cout << "correct" << endl;
		delete ac;
	}
}

