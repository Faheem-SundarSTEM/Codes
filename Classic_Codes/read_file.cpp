# include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  // Create a text file
    ofstream newfile("filename.txt");
  // Write to the file
    newfile << "Files can be tricky, but it is fun enough!";
  // Close the file
    newfile.close();
  // Create a text string, which is used to output the text file
    string myText ;
  // Read from the text file
    ifstream reader("hobbit.txt");
    // Use a while loop together with the getline() function to read the file line by line
    int c = 0 ;
    while (getline(reader , myText)) {
    // Output the text from the file
    }
    // cout << endl ;
    // cout << myText << endl;
  // Close the file
    reader.close();
}
// Files can be tricky, but it is fun enough!