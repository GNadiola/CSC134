#include <iostream>
using namespace std;

//Variables; establishing the library class

class Library {   
    private:
      string author;
      string title;
      string genre;
      string bookList;

    public: 
      void displayBook();
      bool borrowBook();
      void listBooks();
      void searchBook();
      void searchGenre();
      void searchAuthor();
      void addBook();
      void deleteBook();
      void menu();

};   

