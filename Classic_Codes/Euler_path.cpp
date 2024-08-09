# include <bits/stdc++.h>

using namespace std;

# define all(x) (x).begin(),(x).end()
# define print(v) for(int i:v)cout<<i<<' ';cout<<endl;

const int N = 1000 ;
map <int,int> vis;
vector<int> path;

vector <int> nei[N] ;
int n,m ;

void DFS(int u , int par = -1){
    if(vis[u])
        return;
    vis[u] = true ;
    for(auto i : nei[u]){
        if(!vis[i] and i != par){
            DFS(i,u);
        }
    }
}
bool dfs(){
    DFS(1) ;
    for(int i = 1;i <= n;i++){
        if(!vis[i]){ 
            return 0;
        }
    }
    return 1 ;
}
void eulerpath(int v,int par = -1){
    path.push_back(v);
    if(nei[v].size() == 1){
        int ni = nei[v][0];
        auto a = find(all(nei[v]),ni);
        auto b = find(all(nei[ni]),v);
        nei[v].erase(a);
        nei[ni].erase(b);
        eulerpath(ni,v);
        return ;
    }
    while(nei[v].size() > 0){
        int i = *begin(nei[v]);
        auto u = find(all(nei[i]),v);
        nei[v].erase(begin(nei[v]));
        nei[i].erase(u);
        if(dfs() and i!=par){
            eulerpath(i , v);
        }
        else{
            nei[v].push_back(i);
            nei[i].push_back(v);
        }
        vis.clear();
    }
}
signed main(){
    cin >> n >> m;
    for(int i=0;i < m;i++){
        int a,b;
        cin >> a >> b;
        nei[a].push_back(b);
        nei[b].push_back(a);
    }
    int cnt = 0;
    for(int i = 0;i < n;i++){
        if(nei[i+1].size() & 1){
        	cnt ++;
        }
    }
    if(cnt > 2){
    	cout << "NOT POSSIBLE" << endl;
    }
    else{
   		int root = 1;
    	for(int i = 1;i <= n;i++){
			if(nei[i].size() & 1){
        		root = i;
           		break ;
    	    }
	    }
	    cerr << "Root : " << root << endl;
    	eulerpath(root-1);
    	print(path);
	}
}