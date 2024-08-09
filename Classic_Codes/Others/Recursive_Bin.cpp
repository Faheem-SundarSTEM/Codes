# include <iostream>
# include <vector>
using namespace std ;
void display(int a[] , const int n ){
	for(int i = 0; i < n ; i++){
		cout << a[i] << ' ';
	}	
	cout << '\n';
}

void bin(const int n ,int a[] ,int i){
	if(i == n){
		display(a , n) ;
		return ;
	}
	else {
		a[i] = 0 ;
		bin(n ,a ,i + 1);
	}
	a[i] = 1 ;
	bin(n,a , i+1);
}

int main() {
	int n ; cin >> n ; 
	int a[n] ;
	bin(n , a,0) ;
}

