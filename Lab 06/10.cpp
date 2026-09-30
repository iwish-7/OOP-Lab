#include <iostream>
using namespace std;

class Product {
private:
    string name;
    float price;
    int quantity;

public:
    Product(string n, float p, int q) {
        name = n;
        price = p;
        quantity = q;
    }

    Product operator+(const Product& p) const {
        if (name == p.name && price == p.price)
            return Product(name, price, quantity + p.quantity);
        return *this;
    }

    bool operator>(const Product& p) const {
        return (price * quantity) > (p.price * p.quantity);
    }

    void display() const {
        cout << "Name: " << name
             << ", Price: " << price
             << ", Quantity: " << quantity
             << ", Total Value: " << price * quantity
             << endl;
    }
};

int main() {
    Product p1("Pen", 10, 5);
    Product p2("Pen", 10, 3);

    Product p3 = p1 + p2;

    cout << "After addition:" << endl;
    p3.display();

    if (p1 > p2)
        cout << "\nProduct 1 has greater total value." << endl;
    else if (p2 > p1)
        cout << "\nProduct 2 has greater total value." << endl;
    else
        cout << "\nBoth products have equal total value." << endl;

    return 0;
}