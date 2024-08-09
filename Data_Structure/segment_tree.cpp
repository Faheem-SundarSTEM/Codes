# include <bits/stdc++.h>

using namespace std ;

const int N = 100; 
  
int n ;
vector <int> tree(2 * N,0);

void build(vector <int> arr)
{ 
    for (int i = 0; i < n; i++)    
        tree[i+n] = arr[i];
      
    for (int i = n-1; i > 0; --i)     
        tree[i] = tree[2*i] + tree[2*i+1] ; 
}


int query(int a , int b)
{
	int cnt = 0;
	int l = a + n , r = b + n ;
	while(l < r){
		if(l & 1)
			cnt += tree[l++];
		
		if(r & 1)
			cnt += tree[--r] ;

		l = l / 2 ;
		r = r / 2 ;

	}
	return cnt ;
}


void update(int p, int v)
{
    p = p+n ;
    tree[p] = v;
    
    for (int i=p; i > 1; i >>= 1)
        tree[i>>1] = tree[i] + tree[i^1];
}


int main()
{
	
	cin >> n;
	vector <int> arr; 
	
	for(int i =0 ;i < n;i++){
		int w;
		cin >> w;
		arr.push_back(w) ;
	}

	build(arr);

	cerr << "tree = ";
	for(int i =1 ;i <= 2*n-1 ;i++){
		cerr << tree[i] << ' ' ;
	}cerr << endl ;

	int q;
	cerr << "number of updates and querys : " ;
	cin >> q;
	while(q--){
		string s ;
		cin >> s;
		if(s == "U"){
			int a,b ;
			cin >> a >> b;
			a-- ;
			update(a,b) ;
			continue ;
		}
		int l,r;
		cin >> l >> r;
		l --  ;
		cout << query(l,r) << endl;
	}
	return 0 ;
}