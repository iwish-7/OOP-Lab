#include <iostream>
using namespace std;

int main(){
    char arr[10] = {'a', 'b', 'c', 6, ' ', ' ', 8, 'j', 'K', 'W'};
    int digits=0, alphabets=0, spaces=0;
    
    char *charr = &arr[0];

    while(*charr != '\0'){
        if (*charr == ' ')
            spaces++;
        else if (*charr >= 0 && *charr <= 9)
            digits++;
        else if ((*charr >= 'a' && *charr <= 'z') || (*charr >= 'A' && *charr <= 'Z'))
            alphabets++;
        charr++;
    }
    
    cout << "Digits: " << digits << endl;
    cout << "Alphabetic characters: " << alphabets << endl;
    cout << "Spaces: " << spaces << endl;
    
    return 0;
}