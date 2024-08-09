// # include <bits/stdc++.h>
# include <iostream>
# include <vector>  
# include <algorithm>
# include <cmath>
# include <set>
# include <map>
# include <string>
# include <deque>
# include <climits>
using namespace std ;
# define int long long
# define all(x) (x).begin(),(x).end()
# define f_Actorial ios::sync_with_stdio(false); cin.tie(0) ;
# define print(a) for(auto i:a){cout<<i<<' ';}cout<<endl ;
// M_u_h_a_m_m_a_d  S.A.W  ...</>... 
// a == 97 ; 0 == 48  ; A  == 65 ;

int inf = 1e9 ;
signed main(){
    f_Actorial ;
    int n ;
    cin >> n;
    vector <int> v(n) ;
    for(int i =0;i < n;i++)
        cin >> v[i] ; 
    int dp[n+1] ;
    dp[0] = -inf ;
    for(int i=1;i < n+1;i++)
        dp[i] = inf ;
    for(int i =0;i < n;i++){
        int x = v[i] ;
        int id = lower_bound(dp,dp+n,x) - dp ;
        dp[id]=x;
    }
    int ans = 0 ;
    for(int i=0;i <= n;i++){
        if(dp[i]!=inf)
            ans = i ;
    }
    cout << ans << endl;
}
// rem f_Actorial ...