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
    vector<int> chamber = {RED, BLACK, RED};
    // cout << chamber << endl; // NOTE: This doesn't work!
    // use a range based loop to print all the rounds instead
    for (int round: chamber) {
        if (round == RED) {
            cout << "RED ";
        }
        if (round == BLACK) {
            cout << "BLACK ";
        }
    }
    cout << endl;
    


}