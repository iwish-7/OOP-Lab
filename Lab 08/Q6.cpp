#include <iostream>
using namespace std;

class SecurityScanner {
public:
    virtual void scan(int threats) {}
};
class BasicScanner : public SecurityScanner {
public:
    void scan(int threats) {
        cout << "Basic Scanner: " << threats << " threats detected\n";
    }
};
class AdvancedScanner : public SecurityScanner {
public:
    void scan(int threats) {
        int removed = threats * 90 / 100;
        cout << "Advanced Scanner: " << threats << " threats detected, "
             << threats - removed << " remaining after removal\n";
    }
};

int main() {
    int threats = 50;
    BasicScanner b;
    AdvancedScanner a;
    b.scan(threats);
    a.scan(threats);
}
