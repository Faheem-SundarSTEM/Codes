# include <bits/stdc++.h>
using namespace std;
void display(vector <int> a, int n){
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}cout << endl;
}
void findPermutations(vector <int> a , int n){
	// sort(a, a + n);
	sort(a.begin(),a.end()) ;int cnt = 0 ;
	cout << "Possible permutations are:\n";
	do {
		display(a, n);
	} while (next_permutation(a.begin(),a.end()));
}
int main(){
	vector <int> a = {10, 20, 30, 40};
	int n = a.size() ;
	findPermutations(a, n);
	return 0;
}
