# include <iostream>
# include <vector>
using namespace std;
int ternary_search(int start, int end, int ser, vector <int> arr){
	while (end >= start) {
		int mid1 = end / 3 ;
        int mid2 = end - (end - start) / 3;
		if(arr[mid1] == ser) {
			return mid1 ;
		}
		if (arr[mid2] == ser) {
			return mid2 ;
		}
		if (ser < arr[mid1]){
			end = mid1 - 1 ;
		}
		else if (ser > arr[mid2]) {
			start = mid2 + 1 ;
		}
		else {
			start = mid1 + 1;
			end = mid2 - 1;
		}
	}
	return -1 ;
}
int main(){
	vector <int> arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int start  = 0; 
	int end = 9; 
	int ser = 11; 
	cout << ternary_search(start, end, ser, arr) << endl ;
}