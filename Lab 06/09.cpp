#include <iostream>
using namespace std;

class Temperature {
private:
    float celsius;

public:
    Temperature(float c = 0) {
        celsius = c;
    }

    bool operator<(const Temperature& t) const {
        return celsius < t.celsius;
    }

    bool operator>(const Temperature& t) const {
        return celsius > t.celsius;
    }

    float getTemperature() const {
        return celsius;
    }
};

int main() {
    Temperature t1(25);
    Temperature t2(30);

    if (t1 < t2) {
        cout << "First temperature is lower than second." << endl;
    }
    else if (t1 > t2) {
        cout << "First temperature is higher than second." << endl;
    }
    else {
        cout << "Both temperatures are equal." << endl;
    }

    return 0;
}