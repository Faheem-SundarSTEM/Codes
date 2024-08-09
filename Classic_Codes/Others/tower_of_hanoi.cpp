# include <iostream>
using namespace std ;
void toh(int n, char s='1', char e='2', char t='3'){
   /*
      INPUTS:
         n -- (int) the total number of disks named 1..n top to bottom
         s -- (int) the starting pole name from {1,2,3}
         e -- (int) the extra pole name from {1,2,3}
         t -- (int) the target pole name from {1,2,3}
      OUTPUT:
         Sequence of optimal steps to solve the Tower of Hanoi.
   */
   cout<<n<<endl;
   if (n==1){
      cout << "move the disk " << (n) << "\tfrom the pole " << (s) << "\tto the pole " << (t) << ".\n";
   } else{
      toh((n-1), (s), (t), (e));
      cout << "mmove the disk " << (n) << "\tfrom the pole " << (s) << "\tto the pole " << (t) << ".\n";
      toh((n-1), (e), (s), (t));
   }
}
int main(){
   int n{1} ;
   cout << "Tower of Hanoi" << endl;
   cout << "How many disks have you got? "; cin >> n;
   cout << "Optimal solution for the ToH:" << endl;
   toh(n);
   return 0;
}

/*
Tower of Hanoi
How many disks have you got? 2
Optimal solution for the ToH:
move the disk 1   from the pole 1   to the pole 2.
move the disk 2   from the pole 1   to the pole 3.
move the disk 1   from the pole 2   to the pole 3.

Tower of Hanoi
How many disks have you got? 3
Optimal solution for the ToH:
move the disk 1   from the pole 1   to the pole 3.
move the disk 2   from the pole 1   to the pole 2.
move the disk 1   from the pole 3   to the pole 2.
move the disk 3   from the pole 1   to the pole 3.
move the disk 1   from the pole 2   to the pole 1.
move the disk 2   from the pole 2   to the pole 3.
move the disk 1   from the pole 1   to the pole 3.

Tower of Hanoi
How many disks have you got? 4
Optimal solution for the ToH:
move the disk 1   from the pole 1   to the pole 2.
move the disk 2   from the pole 1   to the pole 3.
move the disk 1   from the pole 2   to the pole 3.
move the disk 3   from the pole 1   to the pole 2.
move the disk 1   from the pole 3   to the pole 1.
move the disk 2   from the pole 3   to the pole 2.
move the disk 1   from the pole 1   to the pole 2.
move the disk 4   from the pole 1   to the pole 3.
move the disk 1   from the pole 2   to the pole 3.
move the disk 2   from the pole 2   to the pole 1.
move the disk 1   from the pole 3   to the pole 1.
move the disk 3   from the pole 2   to the pole 3.
move the disk 1   from the pole 1   to the pole 2.
move the disk 2   from the pole 1   to the pole 3.
move the disk 1   from the pole 2   to the pole 3.
*/
