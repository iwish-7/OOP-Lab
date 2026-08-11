#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNumber;
    string name;
    int numberOfSubjects;
    float *marks;

public:
    Student()
    {
        marks = nullptr;
    }

    void acceptDetails()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Number of Subjects: ";
        cin >> numberOfSubjects;

        marks = new float[numberOfSubjects];

        cout << "Enter marks for " << numberOfSubjects << " subjects:\n";
        for (int i = 0; i < numberOfSubjects; i++)
        {
            cin >> marks[i];
        }
    }

    float calculateTotal()
    {
        float total = 0;

        for (int i = 0; i < numberOfSubjects; i++)
        {
            total += marks[i];
        }

        return total;
    }

    float calculateAverage()
    {
        return calculateTotal() / numberOfSubjects;
    }

    void displayResult()
    {
        cout << "\nStudent Result\n";
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Number of Subjects: " << numberOfSubjects << endl;

        cout << "Marks: ";
        for (int i = 0; i < numberOfSubjects; i++)
        {
            cout << marks[i] << " ";
        }

        cout << "\nTotal Marks: " << calculateTotal();
        cout << "\nAverage Marks: " << calculateAverage() << endl;
    }

    ~Student()
    {
        delete[] marks;
    }
};

int main()
{
    Student s;

    s.acceptDetails();
    s.displayResult();

    return 0;
}