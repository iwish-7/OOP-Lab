#include <iostream>
using namespace std;

class student{
    int roll_no, marks;
    string name;
public:
    void getdata();
    void displaydata();
};

void student::getdata(){
    cout << "Enter roll number: ";
    cin >> roll_no;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter marks: ";
    cin >> marks;
}

void student::displaydata(){
    cout << "Roll Number: " << roll_no << endl;
    cout << "Name: " << name << endl;
    cout << "Marks: " << marks << endl;
}

int main () {
    cout << "\nStudent Information System" << endl;
    student s;
    s.getdata();
    s.displaydata();
    return 0;
}