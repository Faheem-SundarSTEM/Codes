# include <iostream>
# include <vector>
# include <set>
# include <algorithm>
using namespace std;
int max_array_sum(vector<int> a , int size){
	int maxx = -9999999 ; 
	for(int i = 0 ; i < size ; i++){
		int aw = -999999,sum_max = 0 ;
		for(int ii = i ; ii < size; ii++){
			sum_max += a[ii] ; 
			aw = max(aw,sum_max) ;
		}
		// int f = max_element(aw.begin(),aw.end())-aw.begin(); error...
		maxx = max(maxx,aw);
	}
	return maxx ; 
}
int main() {
	int w ;cin >> w ;
	vector <int> a(w);
	for(int i = 0 ; i < w;i++){
		cin >> a[i];
	}
	cout << max_array_sum(a , w) << endl;
}


































