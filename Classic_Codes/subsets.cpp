# include <bits/stdc++.h>

using namespace std;

void subsets(int n){
	for(int mask = 0 ; mask < (1 << n) ;mask++){
		for(int i =0 ;i < n ;i++){
			if(mask & (1 << i)){
				cout << i+1 << ' ';
			}
		}
		cout << endl ;
	}	
}

int main(){
	int n;
	cin >> n;
	subsets(n) ;
}

