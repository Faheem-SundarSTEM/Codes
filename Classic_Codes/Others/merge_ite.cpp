# include <iostream>
# include <vector>
# include <algorithm>
using namespace std ;
void merge(vector <int> & a, int p,int q, int r){
	int n1 = q - p + 1 ;
	int n2 = r - q ;  
	vector <int> l ; vector <int> R ;
	for(int i = 1 ; i <= n1 ; i++){
		l.push_back(a[p + i - 2]) ;
	}
	for (int j = 1 ; j <= n2 ; j++){
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
	//return a ;
	for (int  i : a){cout << i << ' ';}
	cout << endl ;
}

void merge_sort(vector<int> a,int p ,int r){
    for (int i = 1; i < r ; i *= 2){
        for (int j = 0 ; j < r+1 ; j += 2*i){
        	int mid , last ;
        	int w = j + i - 1;
        	int ww = (j + (2*i)) - 1;
        	if (w > r){ mid = r;}
        	else { mid = w;}
        	if (ww > r){last = r ;}
        	else { last = ww ;}
    		merge(a , j, mid ,last);
		}
	}
}
int main(){
	int s ; cin >> s ;
	vector <int> a ;
	int q = 2 * s - 1 ;  
	int p = 0 ;
	for (int i = 0 ; i < s ; i++){
		int w ; cin >> w ; 
		a.push_back(w);
	}
	merge_sort(a,p,s) ;
}

