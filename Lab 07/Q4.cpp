#include <iostream>
using namespace std;

class BankAccount {
protected:
    int accountNumber;
    double balance;

public:
    BankAccount(int number, double amount) : accountNumber(number), balance(amount) {}

    void display() const {
        cout << "Account " << accountNumber << " balance: " << balance << '\n';
    }
};

class SavingsAccount : public BankAccount {
    double interest;

public:
    SavingsAccount(int number, double amount, double rate)
        : BankAccount(number, amount), interest(rate) {}

    void update() {
        balance += balance * interest / 100;
        display();
    }
};

class CurrentAccount : public BankAccount {
    double minBalance, charge;

public:
    CurrentAccount(int number, double amount, double minimum, double fee)
        : BankAccount(number, amount), minBalance(minimum), charge(fee) {}

    void update() {
        if (balance < minBalance) balance -= charge;
        display();
    }
};

int main() {
    int number;
    double balance, rate, minimum, charge;

    cout << "Enter savings account number, balance, and interest rate (%): ";
    cin >> number >> balance >> rate;
    SavingsAccount savings(number, balance, rate);
    savings.update();

    cout << "Enter current account number, balance, minimum balance, and maintenance charge: ";
    cin >> number >> balance >> minimum >> charge;
    CurrentAccount current(number, balance, minimum, charge);
    current.update();
}