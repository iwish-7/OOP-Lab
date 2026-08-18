#include <iostream>
#include <string>
using namespace std;

class Song {
private:
    string SongName;
    string ArtistName;
    int Duration;

public:
    Song(string name = "", string artist = "", int duration = 0) {
        SongName = name;
        ArtistName = artist;
        Duration = duration;
    }

    void inputDetails() {
        cout << "Song name: ";
        getline(cin, SongName);
        cout << "Artist name: ";
        getline(cin, ArtistName);
        cout << "Duration (in seconds): ";
        cin >> Duration;
        cin.ignore();
    }

    void display() const {
        cout << "Song: " << SongName << endl;
        cout << "Artist: " << ArtistName << endl;
        cout << "Duration: " << Duration << " seconds" << endl;
    }

    friend void compareSongs(const Song &s1, const Song &s2);
};

void compareSongs(const Song &s1, const Song &s2) {
    if (s1.Duration > s2.Duration) {
        cout << "The song \"" << s1.SongName << "\" is longer than \"" << s2.SongName << "\"." << endl;
    } else if (s2.Duration > s1.Duration) {
        cout << "The song \"" << s2.SongName << "\" is longer than \"" << s1.SongName << "\"." << endl;
    } else {
        cout << "Both songs have the same duration." << endl;
    }
}

int main() {
    Song song1, song2;

    cout << "Enter Song 1 details:" << endl;
    song1.inputDetails();

    cout << "\nEnter Song 2 details:" << endl;
    song2.inputDetails();

    cout << "\nSong 1:" << endl;
    song1.display();
    cout << "\nSong 2:" << endl;
    song2.display();

    cout << "\nComparison:" << endl;
    compareSongs(song1, song2);

    return 0;
}
