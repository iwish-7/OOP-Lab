#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    double salary;

public:
    Employee(string n, double s) : name(n), salary(s) {}
    virtual ~Employee() = default;
};

class Developer : public Employee {
protected:
    int exp;

public:
    Developer(string n, double s, int e) : Employee(n, s), exp(e) {}
};

class SeniorDeveloper : public Developer {
protected:
    double bonus;

public:
    SeniorDeveloper(string n, double s, int e, double b) : Developer(n, s, e), bonus(b) {}

    double salaryFinal() const { return salary * (1 + 0.05 * exp) + bonus; }

    void show() const {
        cout << "Name: " << name << "\nBasic Salary: " << salary
             << "\nExperience: " << exp << " years\nProject Bonus: " << bonus
             << "\nFinal Salary: " << salaryFinal() << '\n';
    }
};

int main() {
    SeniorDeveloper emp("John Doe", 50000, 3, 5000);
    emp.show();
}
