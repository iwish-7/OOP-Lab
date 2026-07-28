#include <stdio.h>

struct Product {
    int ID;
    char name[100];
    int price;
    int quantity
};

int main() {
    struct Product p;

    printf("Enter Product ID: ");
    scanf("%d", &p.ID);

    printf("Enter Name: ");
    scanf("%s", p.name);

    printf("Enter Price: ");
    scanf("%d", &p.price);

    printf("Enter Quantity: ");
    scanf("%d", &p.quantity);

    printf("\n--- Product Details ---\n");
    printf("ID          : %d\n", p.ID);
    printf("Name        : %s\n", p.name);
    printf("Price       : %d\n", p.price);
    printf("Quantity    : %d\n", p.quantity);

    return 0;
}