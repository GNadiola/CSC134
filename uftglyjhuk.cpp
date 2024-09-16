#include <iostream>
#include <iomanip>
using namespace std;

// CSC 134
// M2LAB1 - Case Study
// GrosvenorN
// 9/9/2024

int main() 
{
    //Question 3
  //Set up Variables
    int name_for_order;
    int amount_of_pizzas;
    int number_of_slices_per_pizza;
    int number_of_visitors; 
    int amount_of_slices_left;

// the price related variables - all in $
const double PRICE_PER_SLICE = 1.5;
double price_of_order;

    // Ask user questions
    cout << "" << endl;
    cout << "_______________________________" << endl;
    cout << "Welcome to General Pizzeria!" << endl;
    cout << "Can we get a name for the order?" << endl;
    cin >> name_for_order;
    cout << "OK " << name_for_order << ", how many pizzas would you like?" << endl;
    cin >> amount_of_pizzas;
    cout << "How many slices would you like per pizza? " << endl;
    cin >> number_of_slices_per_pizza;
    cout << "Finally, if you will be having visitors, how many visitors will you be having? " << endl;
    cin >> number_of_visitors;

    // Calculations for price
    price_of_order = number_of_slices_per_pizza * amount_of_pizzas * PRICE_PER_SLICE;
    // Number of slices left
    amount_of_slices_left = (number_of_slices_per_pizza * amount_of_pizzas)-(3 * number_of_visitors);
  

    // Output
    // next line requires iomanip
    cout << setprecision(2) << fixed;
    // output the cost, the customer price, and the profit
    cout << "The price of your order will be $" << price_of_order << endl;
    cout << "The amount of pizza that will be left over is " << amount_of_slices_left << " slices" << endl;
  
}