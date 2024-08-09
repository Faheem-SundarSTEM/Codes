# include <iostream>
# include <vector>
# include <set>
# include <iomanip>
# include <string>
# include <unordered_set>
# include <map>
# include <algorithm>
# include <tuple>
# define in binary_search
# define m_t make_tuple
# define tint tuple<int,int>
using namespace std ;
set<set<int>> partitions(vector <tuple<int,int>> a){ 
	set <set<int>> ll ;
	set <int> aa ;
	for(auto i : a){
		set <int> l ;
		for (auto ii : a){
			int o = get<0>(i) ;
			if (o == get<0>(ii)){
				int oo = get<1>(ii);
				if(not(in(aa.begin(),aa.end(),oo))){
					l .insert(get<1>(ii));	
				}
				aa.insert(oo) ;
			}
		}
		if(l.size() > 0){ll.insert(l);}
	}
	return ll;
}
void dis(set<set<int>> a){
	set <int> aa ;
	for(auto i :a){
		cout << "{ " ;
		for (int ii : i){
			cout << ii << " ";
		}cout <<'}'<< endl;
	}
}
int main(){
	tint a = m_t(1,1);tint b = m_t(2,2) ;
	tint c = m_t(3,3);tint d = m_t(2,2) ;	
	tint e = m_t(2,2);tint f= m_t(2,3) ;
	tint g = m_t(3,1);tint h = m_t(3,2) ;
	tint i = m_t(3,3);
	vector<tuple<int,int>> s = {a,b,c,d,e,f,g,h,i} ;
	set<set<int>> ss = partitions(s) ;
	dis(ss);
}
// s = {{1,1}, {2,2}, {3,3}, {4,4}, {5,5}, {1,2}, {2,1}, {1,3}, {3,1}}
