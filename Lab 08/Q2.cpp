#include <iostream>
using namespace std;

class ParkingSlot {
public:
    virtual double calculateFee(int hours) { return 0; }
};
class TwoWheelerSlot : public ParkingSlot {
public:
    double calculateFee(int hours) {
        double fee = 10 * hours;
        return hours > 5 ? fee * 0.9 : fee;
    }
};
class FourWheelerSlot : public ParkingSlot {
public:
    double calculateFee(int hours) {
        double fee = 30 * hours;
        return hours > 5 ? fee * 0.9 : fee;
    }
};

int main() {
    int hours = 6;
    TwoWheelerSlot t;
    FourWheelerSlot f;
    cout << "Hours parked: " << hours << endl;
    cout << "Two-wheeler fee: Rs. " << t.calculateFee(hours) << endl;
    cout << "Four-wheeler fee: Rs. " << f.calculateFee(hours) << endl;
}
