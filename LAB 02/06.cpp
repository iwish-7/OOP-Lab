#include <iostream>
using namespace std;

class Distance{
    int f1, f2, i1, i2, feet, inches;
public:
    void getdata();
    void displaydata();
    void add();
};

void Distance::getdata(){
    cout << "Enter first input feet: ";
    cin >> f1;
    cout << "Enter first input inches: ";
    cin >> i1;
    cout << "Enter second input feet: ";
    cin >> f2;
    cout << "Enter second input inches: "; 
    cin >> i2; 
}

void Distance::add(){
    feet = f1 + f2;
    inches = i1 + i2;
    if(inches >= 12){
        feet += inches / 12;
        inches %= 12;
    }
}

void Distance::displaydata(){
    cout << "TotalDistance: " << feet << " feet " << inches << " inches" << endl;
}

int main () {
    Distance d;
    d.getdata();
    d.add();
    d.displaydata();
    return 0;
}
