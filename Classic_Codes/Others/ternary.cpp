# include <iostream>
# include <vector>
using namespace std ;
int ternary(vector <int> arr,int ser,int start , int end){
    int m1 = end/3 ;int m2 = (2*end) /  3 ; 
 	cout << m1 << ' ' << m2 << endl;
    if(arr[end-1] < ser && arr.size() == end){
 		return -1 ;
  	}
 	else{
    if (arr[m1] == ser){
        return m1 ;
    }if(arr[m2] == ser){
        return m2 ; 
    }
    if(ser < arr[m1]){
        start = start ; 
        end = m1 - 1 ;
        return ternary(arr,ser,start,end);
    }
    else if(ser > arr[m2]){
        start = m2 - 1  ; 
        end = end + 1 ;
        return ternary(arr,ser,start,end);
    }else if(arr[m1] < ser && arr[m2]>ser){
        start = m1 - 1 ;
        end = m2 - 1 ; 
        return ternary(arr,ser,start,end);
    }
    else {
        return -1;
    }
    }
}
int main() {
    vector <int> arr = {0,1,2,3,4,5,6,7,8,9,10};
    int start = 0;    
    int end = arr.size();
    int ser = 8 ;
    cout << ternary(arr,ser,start,end) << endl ;;
}
