# include <iostream>
using namespace std; 
// binary exponent under modulo or with out by removing mod from every where.
int binary_exponent(int a,int b,int mod){
    if(b==0)
        return 1;
    int temp=binary_exponent(a,b/2,mod)%mod;
    temp*=temp;
    temp%=mod;
    if(b&1)
        return (temp*a)%mod;
    return temp;
}
int main(){
    int a ;cin >> b;
    int mod = 1e9 + 7;
    cout << binary_exponent(a,b,mod) << endl;
}