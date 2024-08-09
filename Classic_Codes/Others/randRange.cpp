# include <bits/stdc++.h>
using namespace std;

void random_values(vector<int> arr,int len){
	// To obtain a time-based seed
	// Shuffling our array
	shuffle(arr.begin(), arr.end(), default_random_engine(0));
	// Printing our array
	for (int i = 0 ; i < len ; ++i){
		cout << arr[i] << " ";
	}
	cout << endl;
}
// Driver code
int main(){
	vector <int> a;
	int start = 10;
	int end = 18 ;
	for (int i = start ;i < end ; i++){
		a.push_back(i) ;	
	}
	int len = a.size() ;
	random_values(a , len);
	return 0;
}