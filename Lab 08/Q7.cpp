#include <iostream>
#include <cmath>
using namespace std;

class MatchFormat {
public:
    virtual int calculateTarget(int firstInningsScore) { return firstInningsScore; }
};
class T20Match : public MatchFormat {
public:
    int calculateTarget(int score) { return score + ceil(score * 0.01); }
};
class ODIMatch : public MatchFormat {
public:
    int calculateTarget(int score) { return score + ceil(score * 0.02); }
};

int main() {
    int score = 187;
    T20Match t;
    ODIMatch o;
    cout << "First innings score: " << score << endl;
    cout << "T20 target: " << t.calculateTarget(score) << endl;
    cout << "ODI target: " << o.calculateTarget(score) << endl;
}
