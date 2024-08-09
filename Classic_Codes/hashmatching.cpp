# include <iostream>
# include <cmath>
# include <vector>
# include <string>
using namespace std;
int n,m;
string s , ss;
int d = 26;
int naive(){
	for(int i=0;i <= n-m;i++){
		string sb = s.substr(i,m);
		if(sb == ss)
			return i;
	}
	return -1;
}

int rabin_karp_matcher(int d,int q){
	int h = (int)(pow(d,m-1))% q;
	int p=0,t=0;
	for(int i=0;i < m;i++){
		p = (d*p + ss[i])%q;
		t = (d*t + s[i])%q;
	}
	for(int i=0;i <= n-m;i++){
		if(p==t){
			string s1 = s.substr(i,i+m);
			if(s1 == ss)
				return i;
		}
		if(i < n-m)
			t = ((d*(t - s[i]*h)) + s[i+m])%q ;
	}
	return -1;
}

int main(){
	cin >> n >> s >> m >> ss;
	int q=1<<31-1 ,d=0;
	vector<int> v(n+1,0); 
	for(int i=0;i < n;i++){
		if(v[s[i]-'a'] == 0){
			d ++;
			v[s[i]-'a'] ++ ; 
		}
	}
	cout << rabin_karp_matcher(d,q) << endl;
}

