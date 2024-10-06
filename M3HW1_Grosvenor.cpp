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
    if (answer == "yes") {
      cout << "That is great! I am sure we will get along." << endl;
    }
    else if (answer == "no") {
      cout << "Well, maybe you will learn to like me later." << endl;
   }
   else { 
      cout << "If you are not sure… that is OK." << endl;
   }
   

 // Question 2
 // Get user input
 // This is a simple receipt calculator.

// declare our variables
double mealPrice;
double tipRate = 0.15;
double tipAmount;
double mealType;
double taxRate = 0.08; // 8% is 8/100 or 0.08
double taxAmount; // the $ of the tax due
double total;     // meal + tax

// Ask Questions
 cout << "What was the price of your meal?" << endl;
 cin >> mealPrice;
 cout << "What type of meal did you have? Dine-in or takeaway? Please enter 1 if the order is dine-in, 2 if it is to go." << endl;
 cin >> mealType;

 

// set all decimals to 2 places
cout << fixed << setprecision(2);

// print output
cout << "Thank you for dining with us." << endl;
cout << "Your meal total is $" << mealPrice << endl;
cout << "The tax is $" << taxAmount << endl;
cout << "The tip is $" << tipAmount << endl;
cout << "Your total is $" << total << endl;
cout << "Please come again.";


 }