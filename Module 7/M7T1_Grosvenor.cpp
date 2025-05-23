#include <iostream>
using namespace std;

// CSC 134
// M7T1 - Restaurant Rating
// GrosvenorN
// 4/29/24
// Use Restaurant class to store user ratings

// Next time we'll put the class in a separate file
class Restaurant {
  private:
    string name;    // the name
    double rating;  // 0 to 5 stars

  public:
	// constructor 
	Restaurant(string n, double r) {
		name = n;
		rating = r;
	}
	// getters and setters
    void setName(string n) {
        name = n; 
    }
    void setRating(double r) {
        rating = r;
    }
    string getName() const {
        return name;
    }
    double getRating() const {
        return rating;
    }
  
};

int main() {
    cout << "M7T1 - Restaurant Reviews" << endl;
    // create using contractor
    Restaurant breakfast("Biscuit Kitchen", 4);
    cout << breakfast.getName() << endl;
    cout << breakfast.getRating() << endl;

    // new object
    Restaurant lunch("Taco Bell", 3.5);
    Restaurant dinner("Pizza", 5);

    // put them in a vector
    vector<Restaurant> meals = {breakfast. lunch, dinner};
    cout << "Today's Meal Ratings" << endl;
    for (Restaurant food: meals) {
        cout << food.getName() << " Rating: " << food.getRating() << "/5"<< endl;
    }
    
    return 0;

}