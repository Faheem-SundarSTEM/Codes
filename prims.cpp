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
# define f_Actoral ios::sync_with_stdio(false); cin.tie(0) ;
# define print(a) for(auto i:a){cout<<i<<' ';}cout<<endl ;
// M_u_h_a_m_m_a_d  S.A.W  ...</>... 
// a == 97 ; 0 == 48  ; A  == 65 ;

# define int long long
# define ed pair<int ,int>
const int N = 1e6+10 ;
vector <ed> G[N];
set<ed> po ;
bool s1[N] ;
signed main (){
	int n,m;
	cin >> n >> m ;
	for(int i =0 ;i < m;i++){
		int u,v,w;
		cin >> u >> v >> w ;
		G[u].push_back({w,v}) ;
		G[v].push_back({w,u}) ;
	}
	po.insert({0,1}) ;
	int ans = 0 ;
	while(po.size()){
		ed x = *po.begin() ;
		po.erase (x) ;
		int v = x.second ;
		int w = x.first  ;
		if(s1[v]){
			continue ;
		}
		s1[v] = true ;
		ans += w ;
		for(auto i:G[v]){
			po.insert(i) ;
		}
	}
	cout << ans << endl ;
} 
