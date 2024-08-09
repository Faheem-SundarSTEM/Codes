# include <iostream>
# include <vector>  
# define pb push_back
using namespace std ;

void solve(vector <int> v ,int k){
	vector <int> freq(k+1);
	for(int i : v)
		freq[i]++ ;
	for(int i=0;i <= k;i++){
		for(int j=0 ;j < freq[i];j++){
			cout << i << ' ';
		}
	}
	cout << endl ;
}
signed main(){
	int n,k,w ;
	cin >> n >> k;
	vector <int> v;
	for(int i=0;i < n;i++){
		cin >> w; v.pb(w);
	}
	solve(v,k);
	return 0;
}
// time O(n+k) ;
