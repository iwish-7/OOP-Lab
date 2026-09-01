#include <iostream>
using namespace std;

void addMarks(int *marks, int n){
    cout << "Marks before modification: ";
    for (int i = 0; i < n; i++) {
        cout << marks[i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < n; i++) {
        *(marks + i) += 5;
    }
    
    cout << "Marks after modification: ";
    for (int i = 0; i < n; i++) {
        cout << marks[i] << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    
    int *marks = new int[n];
    
    cout << "Enter marks for " << n << " students: ";
    for (int i = 0; i < n; i++) {
        cin >> marks[i];
    }
    
    addMarks(marks, n);
    
    delete[] marks;
    return 0;
}
