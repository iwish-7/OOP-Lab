#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int employeeID;
    string name;

public:
    Employee(int id, const string& employeeName)
        : employeeID(id), name(employeeName) {}

    virtual ~Employee() = default;

    int getEmployeeID() const {
        return employeeID;
    }

    const string& getName() const {
        return name;
    }
};

class Developer : virtual public Employee {
protected:
    string language;

public:
    Developer(int id, const string& employeeName, const string& programmingLanguage)
        : Employee(id, employeeName), language(programmingLanguage) {}

    const string& getLanguage() const {
        return language;
    }
};

class Tester : virtual public Employee {
protected:
    string testingTool;

public:
    Tester(int id, const string& employeeName, const string& tool)
        : Employee(id, employeeName), testingTool(tool) {}

    const string& getTestingTool() const {
        return testingTool;
    }
};

class TechLead : public Developer, public Tester {
public:
    TechLead(int id, const string& employeeName,
             const string& programmingLanguage, const string& tool)
        : Developer(id, employeeName, programmingLanguage),
          Tester(id, employeeName, tool),
          Employee(id, employeeName) {}

    using Employee::getEmployeeID;
    using Employee::getName;

    void display() const {
        cout << "Employee ID: " << getEmployeeID() << '\n'
             << "Name: " << getName() << '\n'
             << "Programming Language: " << getLanguage() << '\n'
             << "Testing Tool: " << getTestingTool() << '\n';
    }
};

int main() {
    TechLead techLead(101, "Riya", "C++", "GoogleTest");
    techLead.display();

    return 0;
}
