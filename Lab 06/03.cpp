#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int totalMarks;

public:
    Student(string& studentName, int marks)
        : name(studentName), totalMarks(marks) {}

    bool operator>(Student& other){
        return totalMarks > other.totalMarks;
    }

    string getName(){
        return name;
    }
};

int main() {
    string firstName, secondName;
    int firstMarks, secondMarks;

    cout << "Enter first student's name and total marks: ";
    cin >> firstName >> firstMarks;
    cout << "Enter second student's name and total marks: ";
    cin >> secondName >> secondMarks;

    Student first(firstName, firstMarks);
    Student second(secondName, secondMarks);

    if (first > second) {
        cout << first.getName() << " has higher marks.\n";
    } else if (second > first) {
        cout << second.getName() << " has higher marks.\n";
    } else {
        cout << "Both students have equal marks.\n";
    }

    return 0;
}