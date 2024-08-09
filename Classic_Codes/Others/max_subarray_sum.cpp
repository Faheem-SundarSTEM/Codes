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

signed main(){
	int n;
	cin >> n;
	int arr[n+1] ,perfix[n+1];
	for(int i =0;i < n;i++)
		cin >> arr[i] ;
	perfix[0] = 0 ;
	for(int i=0 ;i < n;i++)
		perfix[i+1] = perfix[i] + arr[i] ;
	int mn = 0 ,res = 0 ;;
	for(int i = 0;i <= n;i++){
		res = max(res,perfix[i]-mn) ;
		mn = min(mn , perfix[i]) ;
	}
	cout << res << endl ;
}
