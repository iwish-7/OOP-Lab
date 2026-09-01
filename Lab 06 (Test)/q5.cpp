#include <iostream>
using namespace std;

void updateStatus(int *status){
    if (*status == 1) {
        *status = 2;
    } else if (*status == 2) {
        *status = 3;
    }
}

void display(int status){
    if (status == 1) {
        cout << "(Processing)";
    } else if (status == 2) {
        cout << "(Shipped)";
    } else if (status == 3) {
        cout << "(Delivered)";
    }
    cout << endl;
}

int main(){
    int OS;

    cout << "Enter order status (1=Processing, 2=Shipped, 3=Delivered): ";
    cin >> OS;

    if (OS < 1 || OS > 3) {
        cout << "Invalid status!" << endl;
        return 0;
    }

    cout << "Status before update: " << OS << " ";
    display(OS);
    

    updateStatus(&OS);

    cout << "Status after update: " << OS << " ";
    display(OS);

    return 0;
}
