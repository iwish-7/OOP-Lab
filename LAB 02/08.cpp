#include <iostream>
using namespace std;

class LibraryBook{
    int id;
    string title, name;
    int days, f;
public:
    void getdata();
    void displaydata();
    void fine();   
};

void LibraryBook::getdata(){
    cout << "Enter book ID: ";
    cin >> id;
    cout << "Enter book title: ";
    cin >> title;
    cout << "Enter borrower name: ";
    cin >> name;
    cout << "Enter number of days borrowed: ";
    cin >> days;
}

void LibraryBook::fine(){
    if(days > 15)
        f = (days - 15)*2; 
}


void LibraryBook::displaydata(){
    cout << "Book ID: " << id << endl;
    cout << "Book Title: " << title << endl;
    cout << "Borrower Name: " << name << endl;
    cout << "Days Borrowed: " << days << endl;
    cout << "Fine: $" << f << endl;
}

int main () {
    LibraryBook book;
    int exit = 0;
    do {
        cout << "\nLibrary Book Manager\n" << endl;
        cout << "Which operation would you like to perform?\n";
        cout << "1. Enter Book Details\n";
        cout << "2. Calculate Fine\n";
        cout << "3. Display Book Details\n";
        int choice;
        cin >> choice;
        switch(choice){
            case 1:
                book.getdata();
                break;
            case 2:
                book.fine();
                break;
            case 3:
                book.displaydata();
                break;
            default:
                cout << "Invalid choice." << endl;
        }
        cout << "\nDo you want to perform another operation? (1 for Yes, 0 for No): ";
        cin >> exit;
    } while (exit == 1);
    return 0;
}