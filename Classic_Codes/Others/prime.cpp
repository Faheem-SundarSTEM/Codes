# include <iostream>
# include <cmath>
using namespace std ;
bool Prime(long long n){
    if (n <= 1){
        return false;
	}
    for (long long i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return false;
        }
    }
    return true ;
}
/*int main(){
	long long n ; cin >> n ;
	if(Prime(n) == 1){
		cout << "TRUE" << endl ; 
	}else{cout << "FALSE" << endl;}
}*/


























































