#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    bool operator==(const Date& other) const {
        return day == other.day && month == other.month && year == other.year;
    }
};

int main() {
    int day1, month1, year1;
    int day2, month2, year2;

    std::cin >> day1 >> month1 >> year1;
    std::cin >> day2 >> month2 >> year2;

    const Date date1(day1, month1, year1);
    const Date date2(day2, month2, year2);

    if (date1 == date2) {
        std::cout << "Both dates are equal.\n";
    } else {
        std::cout << "Both dates are not equal.\n";
    }

    return 0;
}