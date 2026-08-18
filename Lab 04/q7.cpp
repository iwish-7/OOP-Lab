#include <iostream>
#include <string>
using namespace std;

class Player {
private:
    string playerName;
    int health;
    int score;
    int level;

    

public:
    friend class GameManager;
    Player(string name = "", int h = 0, int s = 0, int l = 0) {
        playerName = name;
        health = h;
        score = s;
        level = l;
    }
};

class GameManager {
public:
    void inputPlayer(Player &p) {
        cout << "Enter player name: ";
        getline(cin, p.playerName);

        cout << "Enter health (0-10): ";
        cin >> p.health;

        cout << "Enter score: ";
        cin >> p.score;

        cout << "Enter level: ";
        cin >> p.level;
        cin.ignore();
    }

    void displayPlayerDetails(const Player &p) {
        cout << "\nPlayer Details" << endl;
        cout << "Name: " << p.playerName << endl;
        cout << "Health: " << p.health << endl;
    }

    bool isAlive(const Player &p) {
        return p.health > 0;
    }

    void displayLevelAndScore(const Player &p) {
        cout << "Current Level: " << p.level << endl;
        cout << "Current Score: " << p.score << endl;
    }
};

int main() {
    Player p;
    GameManager manager;

    manager.inputPlayer(p);
    manager.displayPlayerDetails(p);

    if (manager.isAlive(p)) {
        cout << "Status: Player is alive." << endl;
    } else {
        cout << "Status: Player is dead." << endl;
    }

    manager.displayLevelAndScore(p);

    return 0;
}
