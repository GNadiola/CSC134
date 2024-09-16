// M2T2
// Apple Store
// Nadiola Grosvenor
// September 8, 2024
// Version 2

#include <iostream>

using namespace std;

int main()
{
    // Apple store, only this time we ask the user for input
    // declare variables
    string name;
    int num_Apples;
    double price_Per_Apple;

    cout << "What is your name? " << endl;
    cin >> name;
    cout << "How many apples are for sale?" << endl;
    cin >> num_Apples;
    cout << "How much per apple?" << endl;
    cin >> price_Per_Apple;

    // The remainder will resemble M2T1
    cout << "Welcome to " << name << "'s apple store" << endl;
    cout << "We have " << num_Apples << " apples in stock." << endl;
    cout << "Price per apple is $" << price_Per_Apple << endl;
    // Finish by calculating the price for the entire stock of apples
    return 0;
}