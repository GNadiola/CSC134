// CSC 134
// M3HW1 - GOLD
// GrosvenorN
// 9/25/2024

#include <iostream>
#include <iomanip>
using namespace std;

 int main() {

  // Question 1
  cout << "Question 1"  << endl;
    // set up variables
    string answer;
    string yes;
    string no;


    cout << "Hello, I am a C++ program!" << endl;
    cout << "Do you like me? Please type yes or no." << endl;
    cin >> answer;

    // Output options
    if (answer == yes) {
      cout << "That is great! I am sure we will get along." << endl;
    }
    else if (answer == no) {
      cout << "Well, maybe you will learn to like me later." << endl;
   }
   else { 
      cout << "If you are not sure… that is OK." << endl;
   }
   
 }