# include <iostream>
using namespace std ;
int main(){
	int a ;cin >> a;
	int b ;cin  >> b ;
	cout << a + b << endl ;
	cout << int(a ^ b + 2*( a & b))  << endl ;;
	cout<< int(a | b + a & b)  << endl;;
	cout << int(a ^ b) << endl;
	cout << int(a | b - a & b)  << endl ;; 
}