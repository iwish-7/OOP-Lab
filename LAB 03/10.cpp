#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int employeeID;
    string employeeName;
    float basicSalary;
    int numberOfMonths;
    float *earnings;

public:
    void acceptDetails()
    {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Employee Name: ";
        cin >> employeeName;

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;

        cout << "Enter Number of Months: ";
        cin >> numberOfMonths;

        earnings = new float[numberOfMonths];

        cout << "Enter monthly earnings:\n";

        for (int i = 0; i < numberOfMonths; i++)
        {
            cout << "Month " << i + 1 << ": ";
            cin >> earnings[i];
        }
    }

    float calculateTotal()
    {
        float total = 0;

        for (int i = 0; i < numberOfMonths; i++)
        {
            total += earnings[i];
        }

        return total;
    }

    float calculateAverage()
    {
        return calculateTotal() / numberOfMonths;
    }

    int highestEarningMonth()
    {
        int highest = 0;

        for (int i = 1; i < numberOfMonths; i++)
        {
            if (earnings[i] > earnings[highest])
            {
                highest = i;
            }
        }

        return highest;
    }

    void displayAnalysis()
    {
        cout << "\nEmployee Salary Analysis\n";
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Basic Salary: " << basicSalary << endl;

        cout << "Monthly Earnings:\n";

        for (int i = 0; i < numberOfMonths; i++)
        {
            cout << "Month " << i + 1 << ": " << earnings[i] << endl;
        }

        cout << "Total Earnings: " << calculateTotal() << endl;
        cout << "Average Monthly Earning: " << calculateAverage() << endl;

        int month = highestEarningMonth();

        cout << "Highest Earning: " << earnings[month] << endl;
        cout << "Highest Earning Month: Month " << month + 1 << endl;
    }

    ~Employee()
    {
        delete[] earnings;
    }
};

int main()
{
    Employee e;

    e.acceptDetails();
    e.displayAnalysis();

    return 0;
}