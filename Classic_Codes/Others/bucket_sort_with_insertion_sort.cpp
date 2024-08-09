# include <iostream>
# include <vector>
# include <algorithm>
# include <cmath>
# define all(x) (x).begin(),(x).end()
using namespace std ;


vector <double> G[10] ; // 10 is the number of the buckets ...

void insertion(int ind){
	int i, j ;double k;
	for(i = 1 ; i < G[ind].size() ; i++){
		k = G[ind][i] ;
		j = i - 1 ;
		while (j >= 0 && G[ind][j] > k){
			G[ind][j + 1] = G[ind][j] ;
			j -- ;  
		}
		G[ind][j+1] = k ; 
	}	
}

void solve(int n){
	for(int i=0;i<n;i++)
		insertion(i);
}

signed main(){
	int n ;cin >> n;
	for(int i=0;i < n;i++){
		double w ; cin >> w ;
		int ind = floor(w*10) ;
		G[ind].push_back(w) ;
	}
	solve(n) ;
	// print();
	for(int i=0;i < 10 ;i++){
		for(auto j:G[i]){
			cout << j << ' ' ;
		}
	}cout << endl ;
	return 0 ;
}

