#include <iostream>
#include <string>

using namespace std;

class Diary {
private:
    string OwnerName;
    int NumberofEntries;
    string LastEntry;

public:
    Diary(string name, int entries, string lastEntry) {
        OwnerName = name;
        NumberofEntries = entries;
        LastEntry = lastEntry;
    }

    friend void displayDiary(Diary d);
};

void displayDiary(Diary d) {
    cout << "Owner Name: " << d.OwnerName << endl;
    cout << "Number of Entries: " << d.NumberofEntries << endl;
    cout << "Last Entry: " << d.LastEntry << endl;
}

int main() {
    Diary myDiary("Yash", 5, "Visited the park today.");
    displayDiary(myDiary);
    return 0;
}
