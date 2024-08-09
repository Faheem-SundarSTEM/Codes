# include <iostream>
# include <tuple>
# include <vector>
# include <set>
# include <algorithm>
using namespace std ;

set<tuple<int,int>> SxS(vector <int> S){
	set <tuple<int ,int>> SS ;
	for(int i : S){
		for(int ii :S){
			tuple<int ,int> t ;
			t = make_tuple(i, ii);
			SS.insert(t);
		}
	}
	return SS ;
}
void display(set<set<tuple <int ,int>>> F){
	int cnt = 0 ; 
	for(auto ii : F){
		for(auto i : ii){
			cout << '(' << get<0>(i) << ',' << get<1>(i) << ')'; 
			cnt ++ ;
		}
		cout << endl ;
	}
	cout << cnt << endl; 
}
void dis(set<tuple<int,int>> a){
	for(auto i : a){
		cout << '(' << get<0>(i) << ',' << get<1>(i) << ')' ;;
	}
	cout << endl;
}
bool is_ref(set<tuple<int,int>> a,int n){
	int c = 0 ; 
	for(auto i : a){
		if(get<0>(i) == get<1>(i)){
			c ++ ;
		}
	}
	if(c == n){
		return true ;
	}
	else{ return false ;}
}

bool is_sys(set<tuple<int,int>> a){
	int c = 0;
	for(auto i : a){
		tuple <int,int> w;
		w = make_tuple(get<1>(i),get<0>(i)) ;
		if(binary_search(a.begin(),a.end(),w)){
			c ++ ;
		}
	}
	if(c == a.size()){
		return true ;
	}
	else{ return false ;}
}

bool is_trans(set<tuple<int ,int>> w){
	int a = 0 ;
	for (auto i : w){
		int aa = get<0>(i) ;int bb = get<1>(i) ;
		int aw = 0 ;
		for(auto i : w){
			if(bb == get<0>(i)){
				tuple <int,int> r ;
				r = make_tuple(aa ,get<1>(i));
				if(binary_search(w.begin(),w.end(),r)){a ++ ; }
				else {aw ++ ;break ;}
			}
		}
		if(aw == 1){break;}
	}
	if(a >= w.size()){
		return true ;
	}
	else {return false ;}
} 

bool is_equali(set<tuple<int ,int>> a ,int n){
	int cnt = 0;
	if(is_ref(a,n) == true){
		cnt ++ ;
	}if(is_sys(a) == true){
		cnt ++ ;
	}if(is_trans(a) == true){
		cnt ++ ;
	}
	if(cnt == 3){
		return true ;
	}else {
		return false ;
	}
}


set<set<tuple<int,int>>> power_set(set<tuple<int,int>>AXB){
	if (AXB.size() == 0){
		set<set<tuple<int,int>>> P ;
		set<tuple<int,int>> Phi ; 
		P.insert(Phi);
		return P;
	}else {
		set<tuple<int,int>> G = AXB;
		G.erase(G.begin());
		set<set<tuple<int,int>>> F = power_set(G);
		set<set<tuple<int,int>>> P = F ;
		for (auto i : F){
			i.insert(*AXB.begin());
			P.insert(i);
		}
		return P ;	
	}
}


int main () {
	cout << "number of element S : " ; int n ; cin >> n ; 
	cout << "elements of set S : " ;;
	vector <int> S ;  
	for(int i = 0 ; i < n ; i++){
		int t ; cin >> t ;S.push_back(t) ;
	} 
	set<tuple <int,int>> F = SxS(S);
	set<set<tuple<int,int>>> FF = power_set(F) ;	
	display(FF);
	int ref = 0;int sys = 0;
	int trans = 0;int eql = 0 ;
	for(auto i : FF){
		if(is_ref(i,n) == true){
			ref ++ ;
		}if(is_sys(i)== true){
			sys ++ ;
		}if(is_trans(i) == true){
			trans ++ ;	
		}
		if(is_equali(i,n) == true ){
			eql ++ ;
		}
	}cout << '\n'<< '\n'; 
	cout << "Number of Total relation P(s) : " << FF.size() << endl;
	cout << "Number of reflexive functions in P(s) : " <<ref << endl ;
	cout << "Number of symetric functions in P(s) : " << sys << endl;
	cout << "Number of Transitive function in P(s) : " << trans << endl ;
	cout << "Number of equalence function in P(s) : " << eql << endl;
	return 0 ;
}

