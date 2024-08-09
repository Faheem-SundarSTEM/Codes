# include <iostream>
using namespace std;

int main(){
	// number of one in binary reprecentation.
	// for int ... 
	cout << __builtin_popcount(7) << endl; 
	// for long long //  
	cout << __builtin_popcountll(7) << endl;
	// number of zero in binary reprecentation..
	// for lending zeros 
	cout << __builtin_clz(7) << endl ;
	// for trilling zeros
	cout <<  __builtin_ctz(7) << endl;
	// Compute the biggest power of 2 that is a divisor of x. Example: f(12) = 4
	cout << 1 << __builtin_ctz(x) << endl;
	// Compute the smallest power of 2 that is not smaller than x. Example: f(12) = 16 
	cout << 1 << (32 - __builtin_clz (x - 1)) << endl;// you will need if for x == 1;
}