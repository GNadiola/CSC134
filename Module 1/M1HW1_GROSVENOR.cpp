// CSC 134
// M1LAB - Movie Talk
// grosvenorn
// 8/28/24
// Version 2, now with input


#include <iostream>
#include <iomanip>  // for setprecision()
using namespace std;

int main() {
  // Set up our variables
  string  name;
  int     yr_released;
  double  amount_grossed_in_box_office;

  // Ask questions
  cout << "What is the name of the movie?" << endl;
  cout << "What year did it come out? " << endl;
  cout << "How much did it gross in the box office?" << endl;
  
  // Opening
  cout << "_________________________________________" << endl;
  cout << "The movie Endgame";
  cout << name << " was an interesting movie!" << endl;

  // set all decimals to 2 places
  cout << fixed << setprecision(2);

  // Give the answers
  cout << "It was released in 2019." << endl;
  cout << "In the box office, this movie grossed 2.798 billion dollars worldwide." << endl;

  // Give facts
  cout << "This was Marvel's highest grossing movie." << endl;
  cout << "Marvel had a fake version of the script that they called \"Code Blue.\"" << endl;
  cout << "Bruce Banner's explanation of time travel in the movie actually came straight from a quantum physicist." << endl;
  cout << "One of the most well recieved moments from the movie was when Captain America said his famous phrase \"Avengers Assemble\". " << endl;

}