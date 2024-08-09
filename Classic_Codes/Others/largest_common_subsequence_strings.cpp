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

using namespace std ;
int lcs(string X, string Y, int m, int n){
    int dp[m + 1][n + 1] ;
    for(int i = 0; i <= m ; i++){
        for(int j = 0; j <= n ; j++){
            if(i == 0 || j == 0)
                dp[i][j] = 0;
            else if (X[i - 1] == Y[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[m][n] ;
}
signed main(){
    string s , ss ; 
    cin >> s >> ss ;
    int m = s.size();
    int n = ss.size();
    int ww = lcs(s,ss,m,n) ;
    cout << ww << endl ;
    return 0 ;
}
