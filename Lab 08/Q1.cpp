#include <iostream>
using namespace std;

class Character {
public:
    virtual int attack() { return 0; }
};
class Warrior : public Character {
    int strength;
public:
    Warrior(int s) : strength(s) {}
    int attack() { return 20 + 2 * strength; }
};
class Archer : public Character {
    int agility;
public:
    Archer(int a) : agility(a) {}
    int attack() { return 15 + 3 * agility; }
};

int main() {
    Warrior w(10);
    Archer a(8);
    cout << "Warrior damage: " << w.attack() << endl;
    cout << "Archer damage: " << a.attack() << endl;
}
