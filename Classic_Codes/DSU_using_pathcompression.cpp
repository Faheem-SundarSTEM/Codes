# include <iostream>
# include <vector>
using namespace std;

const int N = 1e5+10;
vector<int> par(N,-1);

int root(int v){
	return (par[v] == -1)? v : par[v] = root(par[v]); 
}

inline void merge(int u,int v){
	if((u = root(u)) == (v = root(v))) 
		return;
	par[u] = v;
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