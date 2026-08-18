#include <iostream>
#include <string>
using namespace std;

class FoodOrder {
private:
    int OrderID;
    string FoodItem;
    int Quantity;
    double Price;

public:
    FoodOrder() {}

    void setOrderDetails(int id, string item, int qty, double price) {
        OrderID = id;
        FoodItem = item;
        Quantity = qty;
        Price = price;
    }

    friend void calculateBill(FoodOrder& order);
};

void calculateBill(FoodOrder& order) {
    double totalBill = order.Quantity * order.Price;

    cout << "\n ORDER DETAILS" << endl;
    cout << "Order ID: " << order.OrderID << endl;
    cout << "Food Item: " << order.FoodItem << endl;
    cout << "Quantity: " << order.Quantity << endl;
    cout << "Price per Item: $" << order.Price << endl;
    cout << "Total Bill: $" << totalBill << endl;
}

int main() {
    FoodOrder order;

    int orderID, quantity;
    string foodItem;
    double price;

    cout << "FOOD ORDER SYSTEM" << endl;
    cout << "Enter Order ID: ";
    cin >> orderID;

    cout << "Enter Food Item: ";
    cin.ignore();
    getline(cin, foodItem);

    cout << "Enter Quantity: ";
    cin >> quantity;

    cout << "Enter Price per Item: $";
    cin >> price;

    order.setOrderDetails(orderID, foodItem, quantity, price);
    calculateBill(order);

    return 0;
}
