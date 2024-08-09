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

#define INF 1e9
const int N = 1e3 + 10;
int matrix[N][N];
int n , m;
void floyid()
{ 
	for(int i = 0 ; i <  n ; i++){
		for(int j = 0 ; j < n ; j++){
			for(int k = 0;k< n ; k++){
				if(matrix[j][i] == INF or matrix[k][i] == INF)
					continue;
				matrix[j][k] = min(matrix[j][k] , matrix[j][i] + matrix[i][k]);					
			}
		}
	}
	// print ;;
	for(int i =0;i <= n ;i++){
		for(int j =0 ;j <= n ;j++){
			if(matrix[i][j] == INF)
				cout << i << " -> "<< j <<   " not lies on graph." << endl ;
			else 
				cout<<i <<" -> "<<j<<" = "<<matrix[i][j]<<endl;
		}
	}		
}
signed main(){
	cin >> n >> m; // n is # node  m is  # edges ;
	for(int i= 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			if(i == j)
				matrix[i][j]=0;
			else{
					matrix[i][j] =  INF;
			}
		}
	}
	while(m--){
		int u,v,w;
		cin >> u >> v >> w;
		matrix[u][v] = w;
		matrix[v][u] = w;
	}
	floyid();
	return 0 ;
}
