#include <iostream>
using namespace std;

class CloudResource {
public:
    virtual double calculateCost(double cpuHours) { return 0; }
};
class StandardInstance : public CloudResource {
public:
    double calculateCost(double cpuHours) {
        double cost = 5 * cpuHours;
        return cpuHours > 100 ? cost * 0.85 : cost;
    }
};
class PremiumInstance : public CloudResource {
public:
    double calculateCost(double cpuHours) {
        double cost = 12 * cpuHours;
        return cpuHours > 100 ? cost * 0.85 : cost;
    }
};

int main() {
    double hours = 120;
    StandardInstance s;
    PremiumInstance p;
    cout << "CPU hours: " << hours << endl;
    cout << "Standard cost: Rs. " << s.calculateCost(hours) << endl;
    cout << "Premium cost: Rs. " << p.calculateCost(hours) << endl;
}
