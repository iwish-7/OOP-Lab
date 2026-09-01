#include <iostream>
using namespace std;

int main(){
    int seats[8] = {101, 102, 103, 104, 105, 106, 107, 108};
    int *ptr = seats;
    int position, newSeat;
    
    cout << "Original Seat List:\n";
    for (int i = 0; i < 8; i++) {
        cout << "Position " << i << ":" << *(ptr + i) << "\n";
    }
    
    cout << "\nEnter position to correct (0-7): ";
    cin >> position;
    cout << "Enter new seat number: ";
    cin >> newSeat;
    
    if (position >= 0 && position <= 7) {
        *(ptr + position) = newSeat;
        cout << "\nSeat corrected!\n";
    } 
    else {
        cout << "\nInvalid\n";
    }
    
    cout << "\nCorrected Seat List:\n";
    for (int i = 0; i < 8; i++) {
        cout << "Position " << i << ":" << *(ptr + i) << "\n";
    }
    
    return 0;
}
