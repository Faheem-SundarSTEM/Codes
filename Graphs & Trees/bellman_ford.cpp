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

# define INF 1e7
const int N = 1e3 + 10;
int G[N][N];

// directed graph ;
void solve(int V, int E){
	int D[V] ;
	for (int i = 0; i < V; i++)
		D[i] = INF ;
	D[0] = 0 ;
	for (int i = 0; i < V - 1; i++) {
		for (int j = 0; j < E; j++) {
			if (D[G[j][0]] != INF && D[G[j][0]] + G[j][2] < D[G[j][1]]){
				D[G[j][1]] = D[G[j][0]] + G[j][2];
			}
		}
	}
	for (int i = 0; i <= V; i++) // Vertex Distance from Source
		cout <<  0 <<  " -> "<< i << " = " << D[i] << endl;
}
signed main(){
	int V , E;
	cin >> V >> E;
	for (int i = 0 ;i < E ;i++){
		for(int j = 0 ;j < 3 ;j++){
			int a ;cin >> a ;
			G[i][j] = a ;
		}
	}cout << endl ;
	solve(V, E);
	return 0;
}
