#include <iostream>
using namespace std;

class Employee {
    int id;
    string name;
    float salary;
    float HRA, DA, grossSalary;
public:
    void getdata();
    void displaydata();
    void calculateSalary();
};

void Employee::getdata(){
    cout << "Enter employee ID: ";
    cin >> id;
    cout << "Enter employee name: ";
    cin >> name;
    cout << "Enter employee salary: ";
    cin >> salary;
}

void Employee::calculateSalary(){
    HRA = 0.2 * salary; 
    DA = 0.1 * salary; 
    grossSalary = salary + HRA + DA;
}

void Employee::displaydata(){
    cout << "\nEmployee Details:\n";
    cout << "Basic Salary: " << salary << "\n";
    cout << "HRA: " << HRA << "\n";
    cout << "DA: " << DA << "\n";
    cout << "Gross Salary: " << grossSalary << "\n"; 
}

int main () {
    Employee e;
    e.getdata();
    e.calculateSalary();
    e.displaydata();
    return 0;
}