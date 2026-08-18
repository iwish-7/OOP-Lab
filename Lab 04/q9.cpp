#include <iostream>

using namespace std;

class Exam;

class Result {
public:
    void displayResult(Exam& exam);
};

class Exam {
private:
    string studentName;
    string subject;
    int marks;
    double maximumMarks;

    friend class Result;

public:
    void takeInput() {
        cout << "Enter Student Name: ";
        cin >> studentName;
        cout << "Enter Subject: ";
        cin >> subject;
        cout << "Enter Marks Obtained: ";
        cin >> marks;
        cout << "Enter Maximum Marks: ";
        cin >> maximumMarks;
    }
};

void Result::displayResult(Exam& exam) {
    double percentage = (exam.marks / exam.maximumMarks) * 100;
    
    cout << "\n--- Exam Result ---\n";
    cout << "Student Name: " << exam.studentName << endl;
    cout << "Subject: " << exam.subject << endl;
    cout << "Marks Obtained: " << fixed << exam.marks << endl;
    cout << "Maximum Marks: " << exam.maximumMarks << endl;
    cout << "Percentage: " << fixed << percentage << "%" << endl;
    
    if (percentage >= 40) {
        cout << "Status: Pass" << endl;
    } else {
        cout << "Status: Fail" << endl;
    }
    cout << endl;
}

int main() {
    Exam exam;
    Result result;
    
    exam.takeInput();
    result.displayResult(exam);
    
    return 0;
}
