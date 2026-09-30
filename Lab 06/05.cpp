#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    Time(int h = 0, int m = 0) : hours(h + m / 60), minutes(m % 60) {}

    Time operator+(const Time& other) const {
        return Time(hours + other.hours, minutes + other.minutes);
    }

    void display() const {
        cout << hours << " hours " << minutes << " minutes";
    }
};

int main() {
    Time time1(4, 45);
    Time time2(2, 30);
    Time result = time1 + time2;

    cout << "Time 1: ";
    time1.display();
    cout << '\n' << "Time 2: ";
    time2.display();
    cout << '\n' << "Result: ";
    result.display();
    cout << '\n';

    return 0;
}