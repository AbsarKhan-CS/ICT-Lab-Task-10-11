
#include <iostream>
#include <string>
using namespace std;

class LibraryBook
{
private:
    int availableCopies;

public:
    string title;
    string author;
    long ISBN;

    // Function to set available copies
    void setCopies(int copies)
    {
        availableCopies = copies;
    }

    // Function to get available copies
    int getCopies()
    {
        return availableCopies;
    }

    // Function to display book details
    void displayDetails()
    {
        cout << "\n----- Book Details -----" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << ISBN << endl;
        cout << "Available Copies: " << getCopies() << endl;
    }
};

int main()
{
    LibraryBook book;

    // Taking input from user
    cout << "Enter book title: ";
    getline(cin, book.title);

    cout << "Enter book author: ";
    getline(cin, book.author);

    cout << "Enter ISBN number: ";
    cin >> book.ISBN;

    int copies;
    cout << "Enter available copies: ";
    cin >> copies;

    // Setting private data member
    book.setCopies(copies);

    // Displaying book details
    book.displayDetails();

    return 0;
}
