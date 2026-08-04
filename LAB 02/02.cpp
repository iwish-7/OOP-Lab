#include <iostream>
using namespace std;

class rectangle{
    int length, breadth;
public:
    void getdata();
    void displaydata();
    void area();
    void perimeter();
};

void rectangle::getdata(){
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter breadth: ";
    cin >> breadth;
}

void rectangle::area(){
    cout << "Area: " << length * breadth << endl;
}

void rectangle::perimeter(){
    cout << "Perimeter: " << 2 * (length + breadth) << endl;
}

int main () {
    rectangle r;
    r.getdata();
    r.area();
    r.perimeter();
    return 0;
}