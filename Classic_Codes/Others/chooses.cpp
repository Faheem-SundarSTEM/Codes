# include <iostream>
using namespace std; 
signed main(){
	int n,r;cin>>n>>r;int cnt=1;
	for(int i=0;i<r;i++){
		cnt*=n-i ; cnt/=i+1;
	}
	cout << cnt << endl ;
}
