#include <iostream>
using namespace std;

int main(){
    int n;
    
    cout << "Enter number of tables: ";
    cin >> n;
    int *tables = new int[n];
    
    cout << "Enter table numbers:\n";
    for (int i = 0; i < n; i++) {
        cout << "Table " << i + 1 << ": ";
        cin >> tables[i];
    }
    
    int *ptr = tables;
    int smallest = *ptr;
    
    for (int i = 0; i < n; i++) {
        if (*ptr < smallest) {
            smallest = *ptr;
        }
        ptr++;
    }
    
    cout << "\nSmallest table number: " << smallest << endl;
    
    delete[] tables;
    
    return 0;
}
