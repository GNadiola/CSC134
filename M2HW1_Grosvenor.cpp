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
  cout << "Your final account balance is " << account_balance << endl;

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
const double PRICE_PER_CU_FT = 0.5;
double cost;
double customer_price;
double profit;

    // say hi
    /*
    cout << "Hi, what's your name? ";
    cin >> name;
    cout << "Nice to meet you, " << name << endl;
    */

    // Ask user questions
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
    cout << setprecision(2) << fixed;
    cout << "Crate is: " << width << " x " << length << " x " << height << endl;
    cout << "Total volume is: " << volume << " cubic feet." << endl;
    // output the cost, the customer price, and the profit
    cout << "The total cost for production is $" << cost << endl;
    cout << "The amount that the customer will be charged is $" << customer_price << endl;
    cout << "The amount of profit gained is $" << profit << endl;

}