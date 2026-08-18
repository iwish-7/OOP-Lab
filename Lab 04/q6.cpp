#include <iostream>
#include <string>
using namespace std;

class Door {
private:
    int DoorNumber;
    bool LockStatus;

public:

    friend class SecuritySystem;

    Door(int doorNumber, bool lockStatus) {
        DoorNumber = doorNumber;
        LockStatus = lockStatus;
    }

    void displayDoorInfo() const {
        cout << "Door Number: " << DoorNumber << endl;
        cout << "Status: " << (LockStatus ? "Locked" : "Unlocked") << endl;
    }
};

class SecuritySystem {
public:
    void checkLockStatus(Door door) {
        cout << "Door " << door.DoorNumber << " is " << (door.LockStatus ? "Locked" : "Unlocked") << endl;
    }
};

int main() {
    int doorNumber1, doorNumber2;
    bool lockStatus1, lockStatus2;

    cout << "Enter door number: ";
    cin >> doorNumber1;
    cout << "Enter lock status for door 1 (1 for Locked, 0 for Unlocked): ";
    cin >> lockStatus1;

    Door d1(doorNumber1, lockStatus1);

    SecuritySystem security;

    security.checkLockStatus(d1);

    return 0;
}
