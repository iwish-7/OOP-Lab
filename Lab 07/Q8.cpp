#include <iostream>
#include <string>
using namespace std;

class Patient {
protected:
    string patientName;
    int patientID;
    int age;

public:
    Patient(const string& name, int id, int patientAge)
        : patientName(name), patientID(id), age(patientAge) {}
};

class InPatient : public Patient {
protected:
    double roomCharges;
    int numberOfDays;

public:
    InPatient(const string& name, int id, int patientAge,
              double charges, int days)
        : Patient(name, id, patientAge),
          roomCharges(charges), numberOfDays(days) {}

    double calculateBill() const {
        return roomCharges * numberOfDays;
    }

    void displayPatientInfo() const {
        cout << "Patient Name: " << patientName << '\n'
             << "Patient ID: " << patientID << '\n'
             << "Age: " << age << '\n'
             << "Room Charges: " << roomCharges << '\n'
             << "Number of Days: " << numberOfDays << '\n'
             << "Total Hospital Bill: " << calculateBill() << '\n';
    }
};

int main() {
    InPatient patient("Aarav Sharma", 101, 30, 150.0, 3);
    patient.displayPatientInfo();

    return 0;
}
