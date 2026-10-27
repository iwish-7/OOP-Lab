#include <iostream>
using namespace std;

class Delivery {
public:
    virtual double estimateTime(double distance) { return 0; }
};
class BikeDelivery : public Delivery {
public:
    double estimateTime(double distance) { return distance / 20 * 60 + 5; }
};
class DroneDelivery : public Delivery {
public:
    double estimateTime(double distance) { return distance / 40 * 60 + 2; }
};

int main() {
    double d = 10;
    BikeDelivery b;
    DroneDelivery dr;
    cout << "Distance: " << d << " km\n";
    cout << "Bike delivery time: " << b.estimateTime(d) << " minutes\n";
    cout << "Drone delivery time: " << dr.estimateTime(d) << " minutes\n";
}
