#include <iostream>
#include <string>
using namespace std;

class ParkingSlot {
private:
    int slotNumber;
    string vehicleNumber;
    bool occupied;

public:
    ParkingSlot(int slot = 0, string vehicle = "", bool isOccupied = false) {
        slotNumber = slot;
        vehicleNumber = vehicle;
        occupied = isOccupied;
    }

    friend void checkSlot(const ParkingSlot& slot);
};

void checkSlot(const ParkingSlot& slot) {
    cout << "Slot Number: " << slot.slotNumber << endl;

    if (slot.occupied) {
        cout << "Status: Occupied" << endl;
        cout << "Vehicle Number: " << slot.vehicleNumber << endl;
    } else {
        cout << "Status: Available" << endl;
    }
}

int main() {
    ParkingSlot s1(12, "MH12AB1234", true);
    ParkingSlot s2(15, "", false);

    cout << "Slot 1:" << endl;
    checkSlot(s1);
    cout << endl;

    cout << "Slot 2:" << endl;
    checkSlot(s2);

    return 0;
}
