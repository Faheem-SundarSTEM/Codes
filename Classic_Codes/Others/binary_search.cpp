# include <iostream>
# include <vector>
using namespace std ;
int bin(vector <int> a ,int ser){ 
    int start = 0, end = a.size() ;
    while (start <= end){
        int mid = (start + end) / 2; 
        if(a[mid] < ser)
            start = mid + 1;
        else if(a[mid] > ser)
            end = mid - 1;
        else
            return mid ;
  }
  return -1 ;
}
int main () {
 	vector <int> a = {-1,0,3,5,9,12} ;
 	int aa ; cin >> aa ;
 	cout << bin(a,aa) << endl;;
}
