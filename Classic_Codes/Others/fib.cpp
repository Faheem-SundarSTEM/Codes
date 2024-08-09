# include <iostream>
using namespace std ;

//   DP ...</>....

const int N = 1001 ;
int fib[N] ;
void print(){
	for(int i = 0 ; i < 20 ;i++){
		cout << fib[i] << ' ';
	}cout << endl ;
} 
int main(){
	fib[0] = 0 ;
	fib[1] = 1 ;
	for(int i = 2 ; i < 20 ;i++){
		fib[i] = fib[i-1] + fib[i-2] ;
	}
	print() ;
}

// time O(n) .. 
/*
// Fibonoccii recursion  ...</>...

int fib(int n){
	if(n <= 1)
		return 1;
	return fib(n-1)+fib(n-2); 
}
int main(){
	for(int i = 0 ; i < 20 ;i++)
		cout << fib(i) << ' ';
	cout << endl;
	cout << "YES "<< endl;
}
// time   O(2^n) ...  
*/