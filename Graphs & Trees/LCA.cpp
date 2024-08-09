// M_u_h_a_m_m_a_d  S.A.W  ...</>... 

// # include <bits/stdc++.h>
# include <iostream>
# include <vector>  
# include <algorithm>
# include <cmath>
# include <set>
# include <map>
# include <string>
# include <climits>
using namespace std ;
# define int long long
# define all(x) (x).begin(),(x).end()
# define sowhat ios::sync_with_stdio(false); cin.tie(0) ;
# define print(a) for(auto i:a){cout<<i<<' ';}cout<<endl ;


const int N = 2*1e5+7;
bool seen[N];
vector<int> G[N];
int h[N],lg=20;
int par[N][20];

void dfs(int u){
	seen[u] = true;
	for (int i:G[u])
		if (!seen[i]){
			h[i] = h[u]+1;
			par[i][0]=u;
			dfs(i);
		}
}

int move_upward(int u,int x){
	for (int i=0;i<lg;i++)
		if (x&(1<<i))
			u = par[u][i];
	return u;
}

int lca(int u,int v){
	int x = u,y = v;
	if (h[u] > h[v])
		swap(u,v);
	if(h[v] > h[u])
		v = move_upward(v,h[v]-h[u]);
	if (v == u)
		return u;
	for(int i=lg-1;i>=0;i--)
		if (par[u][i]!=par[v][i]){
			u = par[u][i];
			v = par[v][i];
		}
	return par[u][0];
}

signed main(){
	sowhat ;;

	int n , m;
	cin>> n >> m;
	for (int i=0;i < n-1;i++){
		int u,v;
		cin >> u >> v;
		G[u].push_back(v);
		G[v].push_back(u);
	}
	dfs(1);
	for (int i=1;i < lg;i++)
		for (int j=1; j <= n;j++)
			par[j][i] = par[par[j][i-1]][i-1];
	for (int i=0;i<m;i++){
		int u,v;
		cin >> u >> v;
		cout <<  h[u]+h[v] - 2*h[lca(u,v)] << endl;
	}
	return 0;
}
