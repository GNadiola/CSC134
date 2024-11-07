// M5LAB2
// Header goes here

#include <iostream>
using namespace std;

int getLength();
int getWidth();
int getArea();
int displayData();

int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
   double length;    // The rectangle's length
   double width;     // The rectangle's width
   double area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea();
   
   // Display the rectangle's data.
   displayData( length, width, area);
          
   return 0;
}
 
//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************

int getLength() {
	int length = getLength();
	return length;
}
int getWidth() {
	int width = getWidth();
	return width;
}
int getArea() {
	int area = getArea();
	return area;
}
int displayData() {
	int data = length * width * area;
	return data;
}