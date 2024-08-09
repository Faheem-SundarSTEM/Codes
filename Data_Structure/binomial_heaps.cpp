# include <iostream>
# include <vector>
# include <deque>
using namespace std ;
struct node{
	int value ;
	node *parent ;
	vector <node *> children ;
	int degree(){
		return children.size() ;
	}
};
struct heap{
	deque <node *> roots ;
	node *max_node ;
	void decrease_key(node *n,unsigned int x){
		int final_value = n -> value - x ;
		increase_key(n,10000) ;
		delete_max() ;
		insert(final_value) ;
	}
	void increase_key(node *n,unsigned int x){
		n->value == x ;
		while (n -> value >  n-> parent->value){
			swap(n -> value > n->parent -> value) ;
			n = n -> parent ;
		}
		if(n -> value > max_node -> value){
			max_node = n ;
		}
	}

	void insert(int x){
		node *r = new node ;
		r -> value = x ;
		r -> parent = r ;
		roots.push_front(r) ;
		if (max_node == NULL or r -> value > max_node -> value){
			max_node = r ;
		}
		simpify() ;   
	}
	void delete_max(int x){
		vector <node *> ch = max_node -> children ;
		deque <node *> new_roots ;
		int i =0 ; j = 0 ;
		while (i < ch.size() or j < roots.size()){
			if (roots[j] == max_node){
				j++ ;
			}else if (j >= roots.size() or ch[i].degree() < roots[j].degree()){
				new_roots.push_back(ch[i]) ;
				i ++ ;
			}else {
				new_roots.push_back(roots[j]) ;
				j ++  ;
			}
		} 
		roots = new_roots; 
		simplify();
		max_node = NULL ;
		for (auto r : roots)
			if(max_node == NULL or r -> value > max_node -> value)
				max_node = r ;
	}
	void simpify(){
		deque <node *> new_roots ;
		while(roots.size() != 0){
			if(roots.size() == 1 or roots[0]->degree() != roots[1].degree()){ // no merge ... 
				new_root. push_back(roots[0]) ;
				roots.pop_front();
			}
			else {
				node *a = roots[0],*b = roots[1] ;
				roots.pop_front() ;roots .pop_front() ;
				if (b -> value > a->value){
					swap(a,b);
				}
				b -> parent = a ;
				a -> children.push_back(b); 
				roots.push_front(a) ; 
				if(roots.size() >= 2 and roots[0].degree() > roots[1].degree())
					swap(a,b) ;   
			}
		}
		roots = new_ roots ; 
	} 
};

int main (){
	heap H ;
	while(1){
		string com ;cin >> com ;
		if(com == "insert"){
			int x ; cin >> x ;
			H.insert(x) ;
		}
		else if (com == "delete_max"){
			
		} 
	}
	return 0 ;
}

