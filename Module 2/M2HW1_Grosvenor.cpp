// CSC 134
// M2HW1
// grosvenorn
// 9/14/24
// Version 1, now with input


#include <iostream>
#include <iomanip>  // for setprecision()
using namespace std;

int main() 
{
  // Question 1
  //Set up our variables
  string  name;
  double  starting_account_balance;
  double  account_balance;
  double  amount_of_deposit;
  double  amount_of_withdrawal;

  // Ask questions
  cout << "What is your name?" << endl;
  cin >> name;
  cout << "What is your starting account balance? " << endl;
  cin >> starting_account_balance;
  cout << "How much do you wish to deposit?" << endl;
  cin >> amount_of_deposit;
  cout << "How much do you wish to withdraw?" << endl;
  cin >> amount_of_withdrawal;
  
  // Opening
  cout << "_________________________________________" << endl;
  cout << "The name associated with this account is " << name << endl;
  cout << "Your account number is 24861964" << endl;

  //Math
  account_balance=starting_account_balance-amount_of_withdrawal+amount_of_deposit;

  //Response
  cout << "Your final account balance is $" << account_balance << endl;

  // set all decimals to 2 places
  cout << fixed << setprecision(2);


  //Question 2
  //Set up Variables
    int length;
    int width;
    int height;
    int volume; // in cubic feet

// the price related variables - all in $
const double COST_PER_CU_FT = 0.3;
const double PRICE_PER_CU_FT = 0.51;
double cost;
double customer_price;
double profit;

    // Ask user questions
    cout << "" << endl;
    cout << "_______________________________" << endl;
    cout << "Welcome to General Crates!" << endl;
    cout << "Let's get the crate dimensions (in feet)." << endl;
    cout << "What's the length? ";
    cin >> length;
    cout << "What's the width? ";
    cin >> width;
    cout << "Finally, what's the height? ";
    cin >> height;

    // Calculations
    volume = length * width * height;
    // cost calculations
    cost           = volume * COST_PER_CU_FT;
    customer_price = volume * PRICE_PER_CU_FT;
    profit = customer_price - cost;

    // Output
    // next line requires iomanip
    cout << "Crate is: " << width << "ft x " << length << "ft x " << height << "ft" << endl;
    cout << "Total volume is: " << volume << " cubic feet." << endl;

    // output the cost, the customer price, and the profit
    cout << "The total cost for production is $" << cost << endl;
    cout << "The amount that the customer will be charged is $" << customer_price << endl;
    cout << "The amount of profit gained is $" << profit << endl;


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
    // output the cost, the customer price, and the profit
    cout << "The price of your order will be $" << price_of_order << endl;
    cout << "The amount of pizza that will be left over is " << amount_of_slices_left << " slices" << endl;
  
}