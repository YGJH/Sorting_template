#include "Sort.cpp"
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
        std::cin >> arr[i].id;
        getline(cin, arr[i].name);
    }
    Sort<Book> sort(arr ,arr + n);
    sort.print(arr , arr + n , [](Book &a) { cout << a.id << a.name << endl;});
    return 0;

}
