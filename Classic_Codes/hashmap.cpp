# include <bits/stdc++.h>

using namespace std;
# define int long long
class HashMap{
private:
	int m;
	const double A = (double) (sqrt(5)-1)/2;
	const int p = 1<<31-1;
	const int a{1+rand()%p}, b{rand()%p};
	vector<list<int>> table;
	
	int hash_div(int k){
		return k % m;
	}	
	int hash_mul(int k){
		return floor(m*((A*k)-floor(A*k)));
	}
	int hash_uni(int k){
		return (((a*k+b)%p)%m);
	}
public:
	HashMap(int size){
		m = size;
		table.resize(m);
	}
	void Insert(int k){
		int h = hash_div(k);
		table[h].push_front(k);
	}
	bool Search(int k){
		int h = hash_div(k);
		for (auto a: table[h]){
			if (a==k)
				return true;
		} return false;
	}
	void Delete(int k){
		int h = hash_div(k);
		table[h].remove(k);
	}
	~HashMap(){
		// do nothing
	}
};

///////////////////////////////// DO NOT CHANGE THE CODE BELLOW ///////////////////////////////
signed  main(){
	time_t start_time, end_time;
	time(&start_time);
	HashMap H((int) 1e6);
	for (int i=0; i<1000000; i++){
		H.Insert(i);
	}
	for (int i=0; i<1000000; i++){
		if (!H.Search(i)){
			cout<<"Error! "<<i<<" not found!"<<endl;
			break;
		}
	}
	for (int i=0; i<1000000; i++){
		H.Delete(i);
	}
	for (int i=0; i<1000000; i++){
		if (H.Search(i)){
			cout<<"Error! "<<i<<" found!"<<endl;
			break;
		}
	}
	cout<<"Testing success!"<<endl;
	time(&end_time);
    // Calculating total time taken by the program.
    double time_taken = double(end_time - start_time);
    cout << "Time taken by HashMap (div) is : " << fixed
        << time_taken << setprecision(5);
    cout << " sec " << endl;

    sleep(1);

	time(&start_time);
	unordered_map<int, int> umap;
	for (int i=0; i<1000000; i++){
		umap[i] = i;
	}
	for (int i=0; i<1000000; i++){
		umap.find(i);
	}
	for (int i=0; i<1000000; i++){
		umap.erase(i);
	}
	for (int i=0; i<1000000; i++){
		umap.find(i);
	}
	cout<<"Testing success!"<<endl;
	time(&end_time);
    // Calculating total time taken by the program.
    time_taken = double(end_time - start_time);
    cout << "Time taken by unordered_map is : " << fixed
        << time_taken << setprecision(5);
    cout << " sec " << endl;
	return 0;
}
