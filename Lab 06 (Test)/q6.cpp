#include <iostream>
using namespace std;

void longest(int *durations, int numEp){
    int *longest = durations;
    for (int i = 1; i < numEp; i++) {
        if (*(durations + i) > *longest)
            longest = durations + i;
    }
    cout << "Longest Episode: " << *longest << " minutes" << endl;
}

int main(){
    int episodes[6] = {45, 52, 38, 60, 55, 42};
    
    cout << "Podcast Episodes Duration:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << "Episode " << (i + 1) << ": " << episodes[i] << " minutes" << endl;
    }
    cout << endl;
    
    longest(&episodes[0], 6);
    
    return 0;
}
