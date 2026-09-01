#include <iostream>
using namespace std;

int main(){
    int Level = 100;
    int* ptr = &Level;

    cout << "Current water level: " << *ptr << " units" << endl;
    int addAmt = 30;
    *ptr += addAmt;
    cout << "After adding " << addAmt << " units: " << *ptr << " units" << endl;

    int removeAmt = 25;
    *ptr -= removeAmt;
    cout << "After removing " << removeAmt << " units: " << *ptr << " units" << endl;

}
