# include <iostream>
# include <vector>
using namespace std;

const int N = 1e5+10 ;
vector<int> par(N,-1);
vector<int> sz(N,1);

inline int root(int v){
	while(par[v] != -1)
		v = par[v];
	return v; 
}
inline void merge(int u,int v){
	u = root(u) ; v = root(v) ;
	if(u == v) return;
	if(sz[u] < sz[v]) swap(u , v);
	par[v] = u;
	sz[u] += sz[v] ;
}

inline bool same(int u, int v){
	return (root(u)==root(v)?1:0);
}

int main(){
	ios::sync_with_stdio(false); cin.tie(0) ;
	int n , q;
	cin >> n >> q ;
	for(int i=0 ;i < q;i++){
		string s;
		cin >> s;
		int a ,b ;
		cin >> a >> b ;
		if(s == "union"){
			merge(a,b);
		}
		else{
			if(same(a,b))
				cout << "YES" << endl;
			else
				cout << "NO" << endl ;
		}
	} 	
}