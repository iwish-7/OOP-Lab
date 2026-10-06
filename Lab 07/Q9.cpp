#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;

public:
    Person(const string& name) : name(name) {
        cout << "Person constructor executed\n";
    }

    void displayInfo() const {
        cout << "Name: " << name << '\n';
    }
};

class Employee : public Person {
protected:
    int employeeId;
    double salary;

public:
    Employee(const string& name, int employeeId, double salary)
        : Person(name), employeeId(employeeId), salary(salary) {
        cout << "Employee constructor executed\n";
    }

    void displayInfo() const {
        Person::displayInfo();
        cout << "Employee ID: " << employeeId << '\n';
        cout << "Salary: " << salary << '\n';
    }
};

class Manager : public Employee {
private:
    int teamSize;

public:
    Manager(const string& name, int employeeId, double salary, int teamSize)
        : Employee(name, employeeId, salary), teamSize(teamSize) {
        cout << "Manager constructor executed\n";
    }

    void displayInfo() const {
        Employee::displayInfo();
        cout << "Team size: " << teamSize << '\n';
    }
};

int main() {
    Manager manager("Alice Johnson", 1001, 75000.00, 8);

    cout << "\nInitialized information:\n";
    manager.displayInfo();

    return 0;
}
