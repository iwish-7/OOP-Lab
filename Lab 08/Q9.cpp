#include <iostream>
using namespace std;

class Robot {
public:
    virtual void move(double distance) {}
    virtual ~Robot() {}
};
class WheeledRobot : public Robot {
public:
    void move(double distance) {
        cout << "Wheeled robot travel time: " << distance / 2 << " s\n";
    }
};
class TrackedRobot : public Robot {
public:
    void move(double distance) {
        cout << "Tracked robot travel time: " << distance / 1.2 << " s\n";
    }
};

int main() {
    Robot *r1 = new WheeledRobot();
    Robot *r2 = new TrackedRobot();
    r1->move(60);
    r2->move(60);
    delete r1;
    delete r2;
}
