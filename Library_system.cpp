
#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string bookTitle;
    string author;
    int copiesAvailable, copiesBorrowed, totalCopies;

public:
    void inputDetails() {
        cout << "Enter book title: ";
        getline(cin, bookTitle);

        cout << "Enter author: ";
        getline(cin, author);

        cout << "Enter total copies: ";
        cin >> totalCopies;

        cout << "Enter copies borrowed: ";
        cin >> copiesBorrowed;

        if (totalCopies < 0 || copiesBorrowed < 0 ||
            copiesBorrowed > totalCopies) {
            cout << "Invalid number of copies!\n";
            totalCopies = 0;
            copiesBorrowed = 0;
        }

        copiesAvailable = totalCopies - copiesBorrowed;
    }

    void borrowBook() {
        if (copiesAvailable <= 0) {
            cout << "No books available for borrowing!\n";
        } else {
            copiesAvailable--;
            copiesBorrowed++;
            cout << "Book borrowed successfully!\n";
        }
    }

    void displayDetails() {
        cout << "\n========== BOOK DETAILS ==========\n";
        cout << "Book Title: " << bookTitle << endl;
        cout << "Author: " << author << endl;
        cout << "Total Copies: " << totalCopies << endl;
        cout << "Copies Borrowed: " << copiesBorrowed << endl;
        cout << "Copies Available: " << copiesAvailable << endl;
        cout << "==================================\n";
    }
};

int main() {
    cout << "===== LIBRARY BOOK MANAGEMENT SYSTEM =====\n";

    Book myBook;

    myBook.inputDetails();

    cout << "\n--- Initial Book Details ---";
    myBook.displayDetails();

    cout << "\n--- Borrowing a Book ---\n";
    myBook.borrowBook();

    cout << "\n--- Updated Book Details ---";
    myBook.displayDetails();

    cout << "\n===== Welcome back! =====\n";

    return 0;
}
