#include <iostream>
#include <string>
using namespace std;

class Mobile {
private:
    string brand;
    string model;
    int batteryPercentage;

public:
    Mobile(string b, string m, int battery) 
        : brand(b), model(m), batteryPercentage(battery) {}

    friend void checkBattery(Mobile& phone);
};

void checkBattery(Mobile& phone) {
    cout << "Mobile Details:" << endl;
    cout << "Brand: " << phone.brand << endl;
    cout << "Model: " << phone.model << endl;
    cout << "Battery Percentage: " << phone.batteryPercentage << "%" << endl;
    
    if (phone.batteryPercentage < 20) {
        cout << "Battery Low" << endl;
    } else {
        cout << "Battery Normal" << endl;
    }
}

int main() {
    Mobile phone1("Samsung", "Galaxy S21", 15);
    Mobile phone2("Apple", "iPhone 13", 85);

    cout << "Phone 1:" << endl;
    checkBattery(phone1);

    cout << "\nPhone 2:" << endl;
    checkBattery(phone2);

    return 0;
}
