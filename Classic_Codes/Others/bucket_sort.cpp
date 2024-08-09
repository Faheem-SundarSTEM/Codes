# include <iostream>
# include <vector>
# include <algorithm>
# include <cmath>
# define all(x) (x).begin(),(x).end()
using namespace std ;

vector <double> G[10] ; // 10 is the number of the buckets ...

signed main(){
	int n ;cin >> n;
	for(int i=0;i < n;i++){
		double w ; cin >> w ;
		int ind = floor(w*n) ;
		G[ind].push_back(w);
	}
	for(int i=0;i < 10;i++){
		sort(all(G[i]));
	}
	for(int i=0;i < 10 ;i++){
		for(auto j:G[i]){
			cout << j << ' ' ;
		}
	}cout << endl ;
	return 0 ;
}

