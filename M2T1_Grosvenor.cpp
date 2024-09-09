// M2T1
// Receipt Calculator
// Nadiola Grosvenor
// September 8, 2024
// Version 2

#include <iostream>
#include <iomanip>  // for setprecision()
using namespace std;

int main() {
// This is a simple receipt calculator.

// declare our variables
double mealPrice = 5.99;
double taxRate = 0.08; // 8% is 8/100 or 0.08
double taxAmount; // the $ of the tax due
double total;     // meal + tax

// calculate the tax amount and the total
taxAmount = taxRate * mealPrice; // 8% of 5.99
total = mealPrice + taxAmount;

// set all decimals to 2 places
cout << fixed << setprecision(2);

// print output
cout << "Thank you for dining with us." << endl;
cout << "Your meal total is $" << mealPrice << endl;
cout << "The tax is $" << taxAmount << endl;
cout << "Your total is $" << total << endl;
cout << "Please come again.";


}

