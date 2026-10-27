#include <iostream>
using namespace std;

class IrrigationSystem {
public:
    virtual double calculateWater(double moisture) { return 0; }
};
class DripIrrigation : public IrrigationSystem {
public:
    double calculateWater(double moisture) { return 2 * (100 - moisture); }
};
class SprinklerIrrigation : public IrrigationSystem {
public:
    double calculateWater(double moisture) { return 3 * (100 - moisture); }
};

int main() {
    double moisture = 35;
    DripIrrigation d;
    SprinklerIrrigation s;
    cout << "Soil moisture: " << moisture << "%\n";
    cout << "Drip water needed: " << d.calculateWater(moisture) << " litres\n";
    cout << "Sprinkler water needed: " << s.calculateWater(moisture) << " litres\n";
}
