#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int ID;
    string Name;
    double salary;

public:

    Employee() : ID(0), Name(""), salary(0.0) {}


    void acceptDetails() {
        cout << "Enter Employee ID: ";
        cin >> ID;

        cout << "Enter Employee Name: ";
        cin >> Name;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayDetails() const {
        cout << "\nEmployee ID: " << ID << endl;
        cout << "Employee Name: " << Name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee* employees = new Employee[n];

    cout << "\n--- Accepting Employee Details ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << (i + 1) << ":\n";
        employees[i].acceptDetails();
    }

    cout << "\n--- Displaying Employee Details ---\n";
    for (int i = 0; i < n; i++) {
        employees[i].displayDetails();
    }

    delete[] employees;
    employees = nullptr;

    cout << "\nMemory deallocated successfully." << endl;

    return 0;
}
