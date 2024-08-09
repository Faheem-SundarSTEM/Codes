# include <iostream>
# include <vector>
using namespace std ;

int binary_rec(vector <int> a , int start,int end,int ser){ 
    int mid = (end + start) / 2 ;
    if (end >= start){
    if (a[mid] == ser){
        return  mid ;
    }if(ser < a[mid] ){
        end = mid - 1 ;
        return binary_rec(a ,start,end,ser) ; 
    }else if (ser > a[mid]){
        start = mid + 1 ;
        return binary_rec(a ,start,end,ser) ;
    }//else {return -1;}
    }
    return -1  ; 
}
int main () {
 	vector <int> a = {1,2,3,4,5,6,7,8,9,10} ;
 	int aa ; cin >> aa ;
 	cout << binary_rec(a,0,10,aa) << endl;;
}