#include <iostream>
#include <string>
using namespace std;

class SmartDevice {
private:
    string deviceName;
    string deviceType;
    bool powerStatus;

    friend class HomeController;

public:
    SmartDevice() : deviceName(""), deviceType(""), powerStatus(false) {}

    void inputDeviceDetails() {
        cout << "Enter device name: ";
        getline(cin, deviceName);

        cout << "Enter device type: ";
        getline(cin, deviceType);
    }
};

class HomeController {
public:
    void displayDeviceInfo(const SmartDevice& device) const {
        cout << "Device Name: " << device.deviceName << endl;
        cout << "Device Type: " << device.deviceType << endl;
    }

    void turnOn(SmartDevice& device) const {
        device.powerStatus = true;
    }

    void turnOff(SmartDevice& device) const {
        device.powerStatus = false;
    }

    void displayPowerStatus(const SmartDevice& device) const {
        cout << "Power Status: " << (device.powerStatus ? "ON" : "OFF") << endl;
    }
};

int main() {
    SmartDevice device;
    HomeController controller;

    device.inputDeviceDetails();

    cout << "\nDevice Info:\n";
    controller.displayDeviceInfo(device);
    controller.displayPowerStatus(device);

    controller.turnOn(device);
    cout << "\nAfter turning ON:\n";
    controller.displayPowerStatus(device);

    controller.turnOff(device);
    cout << "\nAfter turning OFF:\n";
    controller.displayPowerStatus(device);

    return 0;
}
