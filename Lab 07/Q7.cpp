#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    Person(string n, int a) : name(n), age(a) {}
};

class Student : virtual public Person {
protected:
    int rollNo;
    float CGPA;
public:
    Student(string n, int a, int r, float c) : Person(n, a), rollNo(r), CGPA(c) {}
};

class Employee : virtual public Person {
protected:
    int employeeID;
    double salary;
public:
    Employee(string n, int a, int id, double s) : Person(n, a), employeeID(id), salary(s) {}
};

class TeachingAssistant : public Student, public Employee {
public:
    TeachingAssistant(string n, int a, int r, float c, int id, double s)
        : Person(n, a), Student(n, a, r, c), Employee(n, a, id, s) {}

    void display() const {
        cout << "Name: " << name << "\nAge: " << age
             << "\nRoll No: " << rollNo << "\nCGPA: " << CGPA
             << "\nEmployee ID: " << employeeID << "\nSalary: " << salary << '\n';
    }
};

int main() {
    string name;
    int age, rollNo, employeeID;
    float CGPA;
    double salary;
    cout << "Enter name, age, roll number, CGPA, employee ID, and salary: ";
    if (!(cin >> name >> age >> rollNo >> CGPA >> employeeID >> salary)) return 0;
    TeachingAssistant ta(name, age, rollNo, CGPA, employeeID, salary);
    ta.display();
}