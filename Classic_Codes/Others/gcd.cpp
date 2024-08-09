# include <iostream>
using namespace std; 
int gcd(int a , int b){
	if (a == 0 || b == 0){return max(a,b);}
	else {return gcd((max(a,b)%min(a,b)),min(a,b));}
}
int main(){
	int a , b ; cin >> a >> b ;
	cout << gcd(a,b) << endl;
}