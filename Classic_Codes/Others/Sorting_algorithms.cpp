# include <iostream>
# include <vector>
using namespace std ;
void bubble_sort(vector <int> a){
	for (int i = 0 ;i < a.size()-1 ;i++){
		int al ,cnt = 0;//int cc = i ;
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
		cout << a[t] << ' ' ;
	}cout << endl ;
}

void selection_sort(vector <int> aa){	
	int w ;
	for (int i = 0 ; i < aa.size()-1 ;i++){
		w = i ;
		for (int ii = i+1 ; ii < aa.size() ; ii++){
			if(aa[ii] < aa[w]){
				w = ii ;
			}
		}
		int g = aa[i] ;
		aa[i] = aa[w] ;
		aa[w] = g ;
	}
	for(int t = 0 ; t < aa.size() ; t ++ ){
		cout << aa[t] << ' ' ;
	}
	cout << endl ;
}

void insertion_sort(vector <int> aa){
	int k , j ;
	for(int i = 2 ; i < aa.size() ; i++){
		k = aa[i] ;
		// aa[i] = k ;
		j = i - 1 ;
		while (j > 0 && aa[j] > k){
			aa[j + 1] = aa[j] ;
			j = j - 1 ;  
		}
		aa[j+1] = k ; 
	}
	for (int t = 0 ; t < aa.size() ; t ++){
		cout << aa[t] << ' ';
	}
	cout << endl ;;	
}

int main(){
	vector <int> a = {0,3,4,7,8,1,2,5,6} ;
	cout << "Bubble_sort : "; bubble_sort(a);
	cout << "Selection_sort : " ;selection_sort(a);
	cout << "Insertion_sort : " ;insertion_sort(a) ;
}
