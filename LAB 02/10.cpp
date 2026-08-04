#include <iostream>
using namespace std;

class ElectricityBill {
    int no;
    string name;
    float units;
public:
    float bill;
    void getdata();
    void displaydata();
    void calculateBill();
};

void ElectricityBill::getdata(){
    cout << "Enter consumer number: ";
    cin >> no;
    cout << "Enter consumer name: ";
    cin >> name;
    cout << "Enter units consumed: ";
    cin >> units;
}

void ElectricityBill::calculateBill(){
    bill = 0;
    if (units <= 100) {
        bill = units * 5;
    } else if (units <= 200) {
        bill = units * 5 + (units - 100) * 7;
    } else {
        bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
    }
}

void ElectricityBill::displaydata(){
    cout << "Consumer Number: " << no << endl;
    cout << "Consumer Name: " << name << endl;
    cout << "Units Consumed: " << units << endl;
    cout << "Electricity Bill: " << bill << endl;
}

int main () {
    ElectricityBill eb;
    eb.getdata();
    eb.calculateBill();
    cout << "\n--- Electricity Bill ---\n";
    eb.displaydata();
    return 0;
}
