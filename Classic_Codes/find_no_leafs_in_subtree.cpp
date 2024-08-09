//   M_u_h_a_m_m_a_d - S.A.W  (B.B.U.H) 

// # include <bits/stdc++.h>
# include <iostream>
# include <vector>  
# include <algorithm>
# include <cmath>
# include <set>
# include <map>
# include <deque> 
# include <climits>
using namespace std ;
# define int long long 
# define all(x) (x).begin(),(x).end()
# define sowhat ios::sync_with_stdio(false); cin.tie(0) ;
# define print(a) for(auto i:a){cout<<i<<' ';}cout<<endl;
# define in binary_search

const int N = 2*1e5 + 11 ;
vector<vector<int>> G(N);
vector <int> leafs(N,0);

void dfs(int v ,int p){ // instead of parent you can use bool seen(N) ;
    bool leaf = 1 ;
    for(int u : G[v]){
        if(u != p){
            dfs(u,v) ;
            leafs[v] += leafs[u] ;
            leaf = 0 ; 
        }
    }
    if(leaf)
        leafs[v] = 1;
}

signed main() {
    sowhat ;

    int n , m;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    dfs(1,0); // loop if different components .
    // print() ... leafs().... 
    return 0 ;    
}
