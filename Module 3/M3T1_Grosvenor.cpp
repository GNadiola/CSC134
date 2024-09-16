
#include <iostream>
using namespace std;

 // CSC 134
 //  M3T1
 // Ask the user to enter the length and width of two rectangles,
 // and then display the area of both
 // GrosvenorN
 // 9/16/2024

 int main() {
    // set up variables
    double width1, width2, length1, length2;
    double area1, area2;

    cout << "M3T1 - Area of two rectangles" << endl;
    cout << "Width of the first rectangle:" << endl;
    cin >> width1;
    cout << "Length of first rectangle:" << endl;
    cin >> length1;
    cout << "Width of the second rectangle:" << endl;
    cin >> width2;
    cout << "Length of the second rectangle:" << endl;
    cin >> length2;

   // Calc areas
   area1 = length1 * width1;
   area2 = length2 * width2;

   // print the answer
   cout << "The first area is: " << area1 << endl;
   cout << "Te second area is: " << area2 << endl;

   
 }