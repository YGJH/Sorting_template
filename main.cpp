#include "Cqsort.cpp"
using namespace std;
const int MXN = 1e5+1;
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
template <typename T>
constexpr static bool(*cmp_)(T &a , T &b) = [](T &a , T &b) { return a < b ;};
template<typename T>
inline void sort(T *st , T *en , bool(*cmp)(T &a , T &b) = cmp_<T> ) {
    if(en - st <= 32) {
        HeapSort<T> he;
        he.sort(st , en , cmp );
        he.print(st , en, [](T &b) { cout << b.id  << b.name << endl;});
    }
    else {
        Qsort<T> qq;
        qq.sort(st , en , cmp);
        qq.print(st,en , [](T &b) {cout << b.id  << b.name << endl;});
    }
}
Book arr[MXN];
signed main() {
    std::cin >> n;
    for(int i = 0 ; i < n ; i++) {
        std::cin >> arr[i].id;
        getline(cin, arr[i].name);
    }
    sort<Book>(arr , arr + n );
    return 0;

}
