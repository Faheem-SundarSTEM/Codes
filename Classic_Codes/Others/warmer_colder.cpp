# include <bits/stdc++.h>
using namespace std;

int random_value(int upper){
		int num = (rand() % (upper - 0 + 1)) + 0;
		return num;
}
int main(){
	int start = 0 ;cout << "Enter 0 to nth number : ";
	int end ; cin >> end ;
	srand(time(0)) ; int rang_no = random_value(end);
	int cc = 0 ; int pre ;int c ;
	int step = 2 * log2(end) ; 
	cout << "You have " << step << " steps to solve."<< endl ;
	for (int i = 1; i <= step ; i++){
		cout << "Enter guess, step " << i << " & remaining steps " << step - i << " : ";
		cin >> c ;
		if (cc == 0){
			cc ++ ; pre = c ; 
			if(pre == rang_no){cout << "Bingo" << endl ;break;}
			cout << "First " << endl ;
		}
		else if(abs(rang_no - pre) > abs(rang_no - c)){
			pre = c ;
			if(pre == rang_no){cout << "Bingo" << endl ;break;}
			cout << "Warmer " << endl;
			cout << "Try again " << endl ;
		}
		else if (abs(rang_no - pre) < abs(rang_no - c)){
			pre  = c ;
			if(pre == rang_no){
				cout << "Bingo " << endl;
				break ;
			}
			cout  << "Colder " << endl ;
			cout << "Try again"<< endl ;
		}else {pre = c;cout << "Warmer " << '\n' << "Try again" << endl;}
	}
	return 0 ;
}