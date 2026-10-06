#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string registrationNumber;
    int rentalDays;

public:
    Vehicle(const string& regNumber, int days)
        : registrationNumber(regNumber), rentalDays(days) {}

    virtual ~Vehicle() = default;

    void displayVehicle() const {
        cout << "Registration Number: " << registrationNumber << '\n';
        cout << "Rental Days: " << rentalDays << '\n';
    }
};

class Car : public Vehicle {
protected:
    double dailyRate;

public:
    Car(const string& regNumber, int days, double rate)
        : Vehicle(regNumber, days), dailyRate(rate) {}

    void displayCar() const {
        displayVehicle();
        cout << "Daily Rental Rate: " << dailyRate << '\n';
    }

    virtual double calculateCost() const {
        return dailyRate * rentalDays;
    }
};

class LuxuryCar : public Car {
protected:
    double luxuryCharge;

public:
    LuxuryCar(const string& regNumber, int days, double rate, double charge)
        : Car(regNumber, days, rate), luxuryCharge(charge) {}

    void displayLuxuryCar() const {
        displayCar();
        cout << "Luxury Charge per Day: " << luxuryCharge << '\n';
    }

    double calculateCost() const override {
        return (dailyRate + luxuryCharge) * rentalDays;
    }
};

int main() {
    LuxuryCar car("ABC-1234", 3, 100.0, 50.0);

    car.displayLuxuryCar();
    cout << "Total Rental Cost: " << car.calculateCost() << '\n';

    return 0;
}
