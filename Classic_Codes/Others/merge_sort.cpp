# include <iostream>
# include <vector>
using namespace std ;
void merge(vector <int> & a, int p,int q, int r){
	int n1 = q - p + 1 ;// len of subarray a[p...q]
	int n2 = r - q ;//len of subarray a[q+1...r]  
	vector <int> l ; vector <int> R ;//two array left and right the portion of a[].
	for(int i = 1 ; i <= n1 ; i++){
		l.push_back(a[p + i - 2]) ;
	}
	for(int j = 1 ; j <= n2 ; j++){
		R.push_back(a[q + j - 1]) ; // - 1 if  
	}
	l.push_back(999999);
	R.push_back(999999);
	int  i = 1  ;int j = 1 ;
	for(int k = p ; k <= r ; k++){
		if(l[i-1] <= R[j-1]){
			a[k-1] = l[i-1] ;
			i = i + 1;
	 	}else {
			a[k-1] = R[j-1] ;
			j = j + 1;
		}
	}
	for (int  i : a){cout << i << ' ';}
	cout << endl ;
}
void merge_sort(vector<int> & a,int p,int r){
	if(p < r){
		int q = (p + r) / 2 ;
		merge_sort(a,p,q) ;
		merge_sort(a,q + 1, r) ;
		merge(a,p,q,r) ;
	}
}
int main (){
	int s ; cin >> s ;
	vector <int> a ;
	int q = s / 2 ;
	int p = 0 ;
	for (int i = 0 ; i < s ; i++){
		int w ; cin >> w ; 
		a.push_back(w);
	}
	merge_sort(a,p,s) ;
	//merge(a, p , q ,s) ;
}