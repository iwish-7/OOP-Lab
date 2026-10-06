#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string n;
    int r;

public:
    Student(string name, int roll) : n(name), r(roll) {}
    virtual ~Student() = default;
    virtual int calculateResult(int marks) = 0;
    string getName() const { return n; }
    int getRoll() const { return r; }
};

class Regular : public Student {
public:
    using Student::Student;
    int calculateResult(int marks) override { return marks; }
};

class Scholarship : public Student {
public:
    using Student::Student;
    int calculateResult(int marks) override { return marks + 5; }
};

int main() {
    string name;
    int roll, marks, choice;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> roll;
    cout << "Enter total marks: ";
    cin >> marks;
    cout << "1. Regular Student\n2. Scholarship Student\nChoice: ";
    cin >> choice;

    Student* s;
    if (choice == 1)
        s = new Regular(name, roll);
    else if (choice == 2)
        s = new Scholarship(name, roll);
    else {
        cout << "Invalid choice\n";
        return 1;
    }

    cout << "Name: " << s->getName() << "\nRoll No: " << s->getRoll()
         << "\nResult: " << s->calculateResult(marks) << '\n';
    delete s;
}
