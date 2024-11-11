#include <iostream>

using namespace std;

    /*
CSC 134
M5LAB1 - Choose Your Own Adventure
GrosvenorN
10/21/24
This template serves as a starting point
for your own program. We'll be using
void functions to tell a simple story,
where the user gets to make choices.

You can fork this template by clicking on the name above, then click the three
dots on the top right, and click 'fork repl'. This makes a copy for you to use.
*/

// Function Prototypes
// Any functions you make will need to
// be listed here, in this format, at the top.
// This is so the compiler knows to save
// room for them in the final program.
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_enter_the_house();
// TODO: add more choices here
void choice_order_food();
void choice_order_caribbean();
void choice_order_chinese();
void choice_order_italian();
void choice_turn_on_flashlight();
void choice_run();
void choice_fight();

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // load up the main menu
  main_menu();
  // when we return here, we're done
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

void main_menu() {
  // Write a simple menu that lets the user choose 1,2, or 3, or 4 to quit.
  cout << "Main Menu" << endl;
  cout << "You're in front of a spooky old house..." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try the front door" << endl;
  cout << "2. Sneak around back" << endl;
  cout << "3. Forget it, and go home" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;
  if (1 == choice) {
    choice_front_door();
  } else if (2 == choice) {
    choice_back_door ();
  } else if (3 == choice) {
    choice_go_home();
  } else if (4 == choice) {
    cout << "Ok, quitting game" << endl;
    return; // go back to main()
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    main_menu();  // try again
  }
}

// FUNCTION DEFINITIONS
// OK, we have the prototypes at the top, but
// now we have to actually write the functions.
// They go here, after main().
void choice_front_door() {
  cout << "Try the front door." << endl;
  cout << "It's locked. " << endl;
  cout << "Do you:" << endl;
  cout << "1. Check around back" << endl;
  cout << "2. Give up and go home" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_back_door();
  } else if (2 == choice) {
    choice_go_home();
  }
}

void choice_back_door() {
    cout << "Interesting choice..." << endl;
    cout << "You sneak around back and try the lock there." << endl;
    cout << "The door clicks open." << endl;
    cout << "A dark chill wafts from the open door." << endl;
    cout << "Do you:" << endl;
    cout << "1. Go inside and explore" << endl;
    cout << "2. Give up and go home" << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;
    if (1 == choice) {
      choice_enter_the_house();
    } else if (2 == choice) {
    choice_go_home();
    }
}

void choice_go_home() {
    cout << "You decide to go home." << endl;
    cout << "Safe at home, do you:" << endl;
    cout << "1. Order some food " << endl;
    cout << "2. Go to bed" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_order_food();
  } else if (2 == choice) {
      cout << "You go to bed." << endl;
      cout << "*** Game Over ***" << endl;
  }
}

// any new choices go here
void choice_order_food () {
    cout << "You order food." << endl;
    cout << "What to order?" << endl;
    cout << "1. Caribbean" << endl;
    cout << "2. Chinese" << endl;
    cout << "3. Italian" << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;
    if (1 == choice) {
        choice_order_caribbean();
        } else if (2 == choice) {
        choice_order_chinese();
        } else if (3 == choice) {
        choice_order_italian();}
    }

void choice_enter_the_house(){
    cout << "You quietly enter the house, shaking from the eerie draft." << endl;
    cout << "The house is completely dark." << endl;
    cout << "Do you leave? Or turn on your flashlight?" << endl;
    cout << "1. Go Home" << endl;
    cout << "2. Turn on your flashlight" << endl;
     int choice;
    cout << "Choose: ";
    cin >> choice;
    if (1 == choice) {
        choice_go_home();
        } else if (2 == choice) {
        choice_turn_on_flashlight();}
}

void choice_turn_on_flashlight (){
    cout << "You hear a faint chittering sound directly above you." << endl;
    cout << "the light awakened something." << endl;
    cout << "You slowly look up." << endl;
    cout << "A giant spider comes crawling towards you, the size of 3 men." << endl;
    cout << "Do you run? Or fight?" << endl;
    cout << "1. Run" << endl;
    cout << "2. Fight." << endl;
     int choice;
    cout << "Choose: ";
    cin >> choice;
    if (1 == choice) {
        choice_run();
        } else if (2 == choice) {
        choice_fight();}
}

void choice_run(){
  cout << "The thing is much faster than you. It catches up before you can get far... you know what happens next..." << endl;
cout << "***Game Over***" << endl;
}

void choice_fight (){
  cout << "You manage to injure the beast... but can you get away before it recovers?? To be continued..." << endl;
  cout << "***Game Over***" << endl;
}

void choice_order_caribbean (){
    cout << "The Caribbean food is delicious." << endl;
    cout << "You eat well and sleep well." << endl;
    cout << "***Game Over***" << endl;
    }

void choice_order_chinese () {
    cout << "The Chinese food is delicious." << endl;
    cout << "You eat well and sleep well." << endl;
    cout << "***Game Over***" << endl;
    }

void choice_order_italian (){
    cout << "The Italian food is delicious. But..." << endl;
    cout << "You get a stomachache." << endl;
    cout << "It takes forever to get to sleep." << endl;
    cout << "But it was worth it because the food was so good." << endl;
    cout << "***Game Over***" << endl;
    }
