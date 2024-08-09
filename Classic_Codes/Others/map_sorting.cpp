# include <iostream>
# include <vector>
# include <algorithm>
using namespace std ;
void bubble_sort(vector <int> a){
	vector <int> h = a ;
	for (int i = 0 ;i < a.size()-1 ;i++){
		int al ,cnt = 0; //int cc = i ;
		for (int j = 0 ; j < a.size()-i-1; j++){
			if(a[j] > a[j+1]){
				cnt ++ ;
				al = a[j] ;
				a[j] = a[j+1] ;
				a[j+1] = al ;
			}
		}
		/*if(cnt > 0 ){
			for (int t = 0 ;t < a.size() ; t++){
				cout << a[t] << ' ' ;
			}cout << endl ;
		}*/
	}
	for (int t = 0 ;t < a.size() ; t++){
		int s = find(h.begin(),h.end(),a[t])-h.begin();
		cout << s << ' ' ;
	}cout << endl ;
}
int main(){
	//vector <int> a={0,1,2,3,4,5,6,7,8} ;
	vector <int> b = {0,3,4,7,8,1,2,5,2} ;
	cout << "Bubble_sort : "; bubble_sort(b);
	// cout << "Selection_sort : " ;selection_sort(a);
	// cout << "Insertion_sort : " ;insertion_sort(a) ;
}