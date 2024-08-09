# include <iostream>
using namespace std ;

// Sum of 1,3,5 to form N ; all number of combinations ;

// Recursion  ... </> ...

int solve(int n){
	if(n < 0)
		return 0 ;
	if(n == 0)
		return 1 ;
	return solve(n-1) + solve(n-3) + solve(n-5) ;
}
int main(){
	int n ;cin >> n ;
	cout << solve(n) << endl;;
}
// time C = O(3^n) ;


/// DP ....</>...

const int N = 1100 ;
int dp[N] ;

int solve(int n){
	if(n < 0)
		return 0 ;
	if(n == 0)
		return 1 ;
	if(dp[n] != -1)
		dp[n];
	return dp[n] = solve(n-1) + solve(n-3) + solve(n-5) ;
}

int main(){
	int n ;cin >> n;
	cout << solve(n) << endl ;
}
// time C = O(n) ;

