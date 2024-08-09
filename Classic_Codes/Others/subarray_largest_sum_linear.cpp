# include <iostream> 
# include <vector> 
using namespace std ;
void max_subarray(vector<int> a ,int size){
	int max_sum = -999999,start = 0 , end = 0 ;;
	int sum = 0 ,starti = 0 ;
	for(int i = 0; i < size ;i++){
		sum += a[i] ;
		if (sum > max_sum){
			max_sum = sum ;
			start = starti ;
			end = i + 1 ; 
		}
		if(sum <= 0){
			sum = 0 ;
			starti = i + 1 ; 
		}
	}
	cout << "max_sum = " << max_sum << '\n';
	cout << "start = " << start <<  '\n' ;
	cout << "end = " << end - 1 << endl ;
}
signed main(){
	int w;cin >> w ;
	vector <int> a ;
	for(int i=0 ;i < w;i++){
		int s ;cin>> s ;
		a.push_back(s) ;
	}

	// vector <int> a = {-5,-2,-1,-3,-4};
	max_subarray(a,w) ;
}

