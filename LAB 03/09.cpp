#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    int productID;
    string productName;
    float price;
    int quantity;

public:
    void acceptDetails()
    {
        cout << "Enter Product ID: ";
        cin >> productID;

        cout << "Enter Product Name: ";
        cin >> productName;

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    void display()
    {
        cout << "Product ID: " << productID << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Cost: " << price * quantity << endl;
    }

    float calculateCost()
    {
        return price * quantity;
    }
};

int main()
{
    int n;

    cout << "Enter number of products: ";
    cin >> n;

    Product *cart = new Product[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Product " << i + 1 << ":\n";
        cart[i].acceptDetails();
    }

    cout << "\nShopping Cart\n";

    float total = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "\nProduct " << i + 1 << ":\n";
        cart[i].display();
        total += cart[i].calculateCost();
    }

    cout << "\nTotal Amount: " << total << endl;

    delete[] cart;

    return 0;
}