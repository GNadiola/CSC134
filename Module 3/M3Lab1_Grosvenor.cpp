// CSC 134
// GrosvenorN
// 9/16/2024
// M3Lab1


#include <iostream>
#include <iomanip>
using namespace std;



void chooseBoba();
void chooseSmoothie();



// beginning of the main() method
int main() {
  
  // this program will ask a question and respond 

  int choice; 

  // ask the question
  cout << "Do you choose to have Boba or have a Smoothie?" << endl;
  cout << "Type 1 for Boba or 2 for Smoothie: "; 
  cin >> choice;

  if (1 == choice) {
    chooseBoba();
  }
  else if (2 == choice) {
    chooseSmoothie();
  }
  else {
    cout << "I'm sorry, that is not a valid choice." << endl;
  }

  cout << "Thank you for playing!" << endl;
  return 0; // tells the computer that we finished without errors

} // end of main

void chooseBoba() {
  // this function is called in main if the user chooses 1.
  cout << "You chose Boba" << endl;
  cout << "You win ... A FREE $30 GIFT CARD FOR BOBA!" << endl;
}

void chooseSmoothie() {
  // this function is called in main if the user chooses 1.
  cout << "You chose Smoothie" << endl;
  cout << "You win ... a bottle of floor wax." << endl;
}
