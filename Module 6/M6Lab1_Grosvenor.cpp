#include <iostream>
#include <vector>
using namespace std;

// M6Lab1
// GrosvenorN
// 11/13/2024

//Constants
const int RED = 1;  // Live
const int BLACK = 0;  // Blank

int main() {
    // load the chamber
    vector<int> chamber = {};
    // cout << chamber << endl; // NOTE: This doesn't work!
    // use a range based loop to print all the rounds instead

    chamber.push_back(RED);
    chamber.push_back(RED);
    chamber.push_back(BLACK);

    for (int round: chamber) {
        if (round == RED) {
            cout << "RED ";
        }
        if (round == BLACK) {
            cout << "BLACK ";
        }
    }
    cout << endl;
    return 0;
}