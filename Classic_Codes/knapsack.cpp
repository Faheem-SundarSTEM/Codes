# include <iostream>
# include <vector>
# include <string>
# include <algorithm>

using namespace std;

# define all(x) (x).begin(),(x).end()
/*
int main(){
	int cap ;
	cin >> cap ;
	int tt = cap ;
	int n ;
	cin >> n ;
	vector <int> weight , price ;
	for(int i = 0 ;i < n;i++){
		int w;
		cin >> w;
		weight.push_back(w) ;
	}
	for(int i =0 ;i < n;i++){
		int p;
		cin >> p;
		price.push_back(p) ;
	}
	vector <pair < int ,int >> w , p ;
	for(int i =0 ;i < n ;i++){
		w.push_back({weight[i],price[i]});
		p.push_back({price[i] , weight[i]}); 
	}
	sort(all(w)) ;
	sort(all(p),greater <pair <int ,int>> ());  
	int sm = 0 , sm1 = 0;
	for(auto i  : w){
		cap -= i.first ;
		if(cap >= 0){
			sm += i.second;
		} 
		else{
			break ;
		}
	}
	cap = tt ;
	for(auto i : p){
		cap -= i.second ;
		if(cap >= 0){
			sm1 += i.first ;
		}
		else{
			break ;
		}
	}
	cout << max(sm1,sm) << endl;;
}
*/


int main()
{
	int cap ;
	cin >> cap;

	int n ;
	cin >> n;

	vector <int> weight , price; 
	
	for(int i = 0 ;i < n;i++){
		int w;
		cin >> w;
		weight.push_back(w); 
	}
	
	for(int i = 0 ;i < n;i++){
		int p ;
		cin >> p ;
		price.push_back(p);
	}

	int dp[n+1][cap+1] = {0};
	for(int i =0 ;i <= n;i++){
		for(int j =0 ;j <= cap;j++){
			dp[i][j] = 0 ;
		}
	}

	for(int i = 1 ;i <= n;i++){
		for(int j = 1 ;j <= cap;j++){
			if(weight[i-1] > j)
				dp[i][j] = dp[i-1][j] ;
			else
				dp[i][j] = max(price[i-1] + dp[i-1][j-weight[i-1]] ,dp[i-1][j]);
		}
	}

	cout <<  "print : " << endl; 
	for(int i =1 ;i <= n ;i++){
		for(int j = 1 ;j <= cap ;j++){
			cout << dp[i][j] << ' ' ;
		}
		cout << endl;
	}

	
	cout << "ans = " << dp[n][cap] << endl;
	return 0;
}