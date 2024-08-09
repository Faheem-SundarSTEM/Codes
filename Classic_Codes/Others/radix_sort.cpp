# include <iostream>
# include <vector>  
# include <cmath>
# include <algorithm>
using namespace std ;
# define int long long
# define all(x) (x).begin(),(x).end()
# define print(a) for(auto i:a){cout<<i<<' ';}cout<<endl;

void solve(vector <int> v,int mx ,int n){
	for(int i=0;i < mx; i++){
		vector <int> temp(n),freq(10);
		int p = pow(10,i) ;
		for (int i = 0; i < n; i++)
			freq[(v[i] / p) % 10] ++ ;
		print(freq);
		for (int i = 1; i < 10; i++)
			freq[i] += freq[i - 1] ;
		print(freq);
		for (int i = n-1 ;i >= 0; i--){
			temp[--freq[(v[i] / p) % 10]] = v[i];
			// or -1 above and .. freq[(v[i] / p) % 10] -- ;
		}
		v = temp;
	}
	print(v);
}

signed main(){
	int n ;cin >> n;
	vector <int> v(n);
	int mx = 0;
	for(int i=0 ;i < n;i++){
		cin >> v[i];
		mx = max(mx , v[i]);
	}
	string s = to_string(mx);
	mx = s.size() ;
	solve(v,mx,n);
	return 0;
}
// time O(mx*n) ; and in many problems mx <= 6 ;