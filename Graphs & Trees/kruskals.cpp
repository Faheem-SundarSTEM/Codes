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

#define int long long
#define edge pair<int,pair<int,int>>
#define w first
#define f  second.first
#define s  second.second

int n,m ;
const int N = 2e5+12;

int arr[N];
vector<int> adj[N] ;
vector <edge> Vec ;

int ans = 0 ;

void merge(int a,int b){
	a = arr[a];
	b = arr[b];
	if(adj[a].size() > adj[b].size()){
		swap(a,b);
	}
	for(auto x : adj[a])
	{
		arr[x] = b;
		adj[b].push_back(x);
	}
	adj[a].clear();
}
signed main(){
	cin >> n >> m;
	for(int i = 1 ; i<= n ; i ++){
		arr[i]=i;
	}
	for(int i = 1;i<= m ; i ++ ){
		edge e;
		cin >> e.f >> e.s >> e.w;
		Vec.push_back(e);
	}
	sort(Vec.begin() , Vec.end());
	for(auto x : Vec){
		if(arr[x.f] == arr[x.s])
			continue;
		merge(x.f,x.s);
		ans += x.w;
	}
	cout<<ans<<endl;
	return 0;
}
