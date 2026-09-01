#include <iostream>
using namespace std;

int main(){
    int battery = 15;
    int *batteryPtr = &battery;

    cout << "Current battery percentage: " << *batteryPtr << "%" << endl;
    *batteryPtr = 80;

    cout << "Updated Percentage: " << *batteryPtr << "%" << endl;

    return 0;
}