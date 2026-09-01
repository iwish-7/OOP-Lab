#include <iostream>
using namespace std;

int main(){
    int equipment[6] = {101, 102, 103, 104, 105, 106};
    int* ptr = &equipment[0];
    
    cout << "Equipment IDs and their addresses:" << endl;
    
    for (int i = 0; i < 6; i++){
        cout << "Equipment ID: " << *ptr << ", Address: " << ptr << endl;
        ptr++;
    }
    
    return 0;
}
