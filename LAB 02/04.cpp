#include <iostream>
using namespace std;

class BankAccount {
    int acc_no;
    string name;
    float balance;
public:
    void getdata();
    void displaydata();
    void deposit();
    void withdraw();
};

void BankAccount::getdata(){
    cout << "Enter account number: ";
    cin >> acc_no;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter balance: ";
    cin >> balance;
}

void BankAccount::displaydata(){
    cout << "Account Number: " << acc_no << endl;
    cout << "Name: " << name << endl;
    cout << "Balance: " << balance << endl;
}

void BankAccount::deposit(){
    float amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;
    balance += amount;
}

void BankAccount::withdraw(){
    float amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;
    if(amount <= balance){
        balance -= amount;
    } else {
        cout << "Error: Insufficient funds." << endl;
    }
}

int main () {
    BankAccount b;
    int exit = 0;
    do {
        cout << "\nBank Account Manager\n" << endl;
        cout << "Which operation would you like to perform?\n";
        cout << "1. Enter Account Details\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Display Account Details\n";
        int choice;
        cin >> choice;
        switch(choice){
            case 1:
                b.getdata();
                break;
            case 2:
                b.deposit();
                cout << "\n";
                b.displaydata();
                break;
            case 3:
                b.withdraw();
                cout << "\n";
                b.displaydata();
                break;
            case 4:
                b.displaydata();
                break;
            default:
                cout << "Invalid choice." << endl;
        }
        cout << "\nDo you want to perform another operation? (1 for Yes, 0 for No): ";
        cin >> exit;

    } while (exit == 1);

    return 0;
}