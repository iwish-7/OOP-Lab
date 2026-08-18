#include <iostream>
#include <string>
using namespace std;

class TrainSeat {
private:
    int seatNumber;
    string passengerName;
    bool bookingStatus; 

    friend class TicketChecker;

public:
    TrainSeat() : seatNumber(0), passengerName(""), bookingStatus(false) {}

    void getdata() {
        cout << "Enter Seat Number: ";
        cin >> seatNumber;
        cin.ignore();

        cout << "Enter Passenger Name: ";
        getline(cin, passengerName);

        cout << "Enter Booking Status (1 for Booked, 0 for Available): ";
        int status;
        cin >> status;
        bookingStatus = (status == 1);
    }

    void setSeatDetails(int seat, string name, bool status) {
        seatNumber = seat;
        passengerName = name;
        bookingStatus = status;
    }
};

class TicketChecker {
public:
    void displaySeatDetails(TrainSeat& seat) {
        cout << "\n--- Seat Details ---" << endl;
        cout << "Seat Number: " << seat.seatNumber << endl;
        
        if (seat.bookingStatus) {
            cout << "Booking Status: Booked" << endl;
            cout << "Passenger Name: " << seat.passengerName << endl;
        } else {
            cout << "Booking Status: Available" << endl;
        }
    }

    void checkSeatStatus(TrainSeat& seat) {
        if (seat.bookingStatus) {
            cout << "Seat " << seat.seatNumber << " is BOOKED by " << seat.passengerName << endl;
        } else {
            cout << "Seat " << seat.seatNumber << " is AVAILABLE" << endl;
        }
    }
};

int main() {
    TrainSeat seat;
    TicketChecker checker;

    seat.getdata();

    checker.displaySeatDetails(seat);
    cout << endl;
    checker.checkSeatStatus(seat);

    return 0;
}
