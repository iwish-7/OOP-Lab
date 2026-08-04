#include <iostream>
using namespace std;

class Product{
    int id;
    string name;
    int quantity;
    float price, inventoryValue;
public:
    int soldQuantity;
    void getdata();
    void displaydata();
    void updateQuantity();
    void Inventory();
    
};

void Product::getdata(){
    cout << "Enter product ID: ";
    cin >> id;
    cout << "Enter product name: ";
    cin >> name;
    cout << "Enter product quantity available: ";
    cin >> quantity;
    cout << "Enter product price: ";
    cin >> price;
}

void Product::displaydata(){
    cout << "Product ID: " << id << endl;
    cout << "Product Name: " << name << endl;
    cout << "Product Quantity: " << quantity << endl;
    cout << "Product Price: $" << price << endl;
}

void Product::updateQuantity(){
    if(soldQuantity <= quantity){
        quantity -= soldQuantity;
        cout << "Quantity updated successfully." << endl;
    } else {
        cout << "Error: Insufficient stock." << endl;
    }
}

void Product::Inventory(){
    inventoryValue = quantity * price;
    cout << "Total Inventory Value: $" << inventoryValue << endl;
}

int main () {
    Product p;
    int exit = 0;
    do {
        cout << "\nProduct Inventory Manager\n" << endl;
        cout << "Which operation would you like to perform?\n";
        cout << "1. Enter Product Details\n";
        cout << "2. Sell Product\n";
        cout << "3. Display Product Details\n";
        cout << "4. Display Inventory Value\n";
        int choice;
        cin >> choice;
        switch(choice){
            case 1:
                p.getdata();
                break;
            case 2:
                cout << "Enter quantity sold: ";
                cin >> p.soldQuantity;
                p.updateQuantity();
                break;
            case 3:
                p.displaydata();
                break;
            case 4:
                p.Inventory();
                break;
            default:
                cout << "Invalid choice." << endl;
        }
        cout << "\nDo you want to perform another operation? (1 for Yes, 0 for No): ";
        cin >> exit;
    } while (exit == 1);
    return 0;
}