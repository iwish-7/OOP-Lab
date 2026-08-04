#include <iostream>
using namespace std;

class result {
    int rollno;
    string name;
    float marks[5], sum, percent;

public:
    void getdata();
    void total();
    void grades();
    void displaydata();
};

void result::getdata() {
    cout << "Enter roll number: ";
    cin >> rollno;
    cin.ignore(); // clear leftover newline before getline
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter marks for 5 subjects: ";
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
    }
}

void result::total() {
    sum = 0; // FIX: use member variable, don't shadow it with a local one
    for (int i = 0; i < 5; i++) {
        sum += marks[i];
    }
    percent = sum / 5;
}

void result::grades() {
    if (percent >= 90) {
        cout << "A";
    } else if (percent >= 80) {
        cout << "B";
    } else if (percent >= 70) {
        cout << "C";
    } else if (percent >= 60) {
        cout << "D";
    } else {
        cout << "F";
    }
}

void result::displaydata() {
    cout << "\n--- Result ---\n";
    cout << "Roll Number: " << rollno << endl;
    cout << "Name: " << name << endl;
    cout << "Total Marks: " << sum << endl;
    cout << "Percentage: " << percent << "%" << endl;
    cout << "Grade: ";
    grades();
    cout << endl;
}

int main() {
    result r;
    r.getdata();
    r.total();
    r.displaydata();
    return 0;
}