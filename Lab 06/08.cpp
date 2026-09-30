#include <iostream>
#include <string>

class Item {
private:
    std::string name;
    double price;
    int quantity;

public:
    Item(const std::string& itemName, double itemPrice, int itemQuantity)
        : name(itemName), price(itemPrice), quantity(itemQuantity) {}

    Item operator+(const Item& other) const {
        if (name == other.name && price == other.price) {
            return Item(name, price, quantity + other.quantity);
        }

        std::cout << "Cannot combine different items or items with different prices.\n";
        return *this;
    }

    void display() const {
        std::cout << "Item: " << name << ", Price: " << price
                  << ", Quantity: " << quantity << '\n';
    }
};

int main() {
    Item first("Notebook", 2.50, 4);
    Item second("Notebook", 2.50, 3);
    Item combined = first + second;

    std::cout << "Combined item:\n";
    combined.display();
    std::cout << "Original items (unchanged):\n";
    first.display();
    second.display();
    return 0;
}