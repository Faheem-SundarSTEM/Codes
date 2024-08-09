# include <iostream>
# include <map>
# include <vector>
using namespace std;
// all the prime factors of the number x .
int main(){// 
    int x;
    cin >> x ;
    map <int,int> a;
    for (int j = 2; j * j <= x; j++) {
        while (x % j == 0) {
            x /= j ;
            a[j]++ ;
        }
    }
    if (x != 1) {
        a[x]++;
    }
    for(auto i:a){
        cout << i.first << ' ' << i.second << endl;
    }
}
