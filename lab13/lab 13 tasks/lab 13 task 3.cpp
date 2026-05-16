#include <iostream>
#include <string>
using namespace std;

// Structure declaration
struct Book {
    string title;
    string author;
    float price;
    int pages;
};

int main() {

    // Structure variables
    Book book1, book2;

    // Initialize book1
    book1.title = "C++ Programming";
    book1.author = "John";
    book1.price = 500.5;
    book1.pages = 350;

    // Initialize book2
    book2.title = "Data Structures";
    book2.author = "Ali";
    book2.price = 700.0;
    book2.pages = 450;

    // Display book1 information
    cout << "Book 1 Information:" << endl;
    cout << "Title: " << book1.title << endl;
    cout << "Author: " << book1.author << endl;
    cout << "Price: " << book1.price << endl;
    cout << "Pages: " << book1.pages << endl;

    cout << endl;

    // Display book2 information
    cout << "Book 2 Information:" << endl;
    cout << "Title: " << book2.title << endl;
    cout << "Author: " << book2.author << endl;
    cout << "Price: " << book2.price << endl;
    cout << "Pages: " << book2.pages << endl;

    return 0;
}