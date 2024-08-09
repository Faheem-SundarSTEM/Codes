# include <iostream>
# include <vector>
using namespace std;
# define print(x) for(auto i:x){cout<<i<<' ';}cout<<'\n';

void sort_(vector<int>&v,int i,int p){
	if(p <= i)
		return;
	int lt = i,gt = p;
	int a=v[i] , j=i;
	while(j <= gt){
		if(v[j] < a)
			swap(v[j++],v[lt++]);
		else if(v[j] > a)
			swap(v[j],v[gt--]);
		else j++ ;
	}
	print(v);
	sort_(v,i,lt-1);// print(v);
	sort_(v,gt+1,p);// print(v);
}
int main(){
	int n ;cin >> n ;
	vector <int> v;
	for(int i=0;i<n;i++){
		int w ;cin >> w;
		v.push_back(w);
	}
	sort_(v,0,n-1) ;
	print(v);
	return 0;
}

