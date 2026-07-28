#include <stdio.h>

struct Book {
    int ID;
    char title[100];
    char author[100];
    int price;
};

int main() {
    struct Book b;

    printf("Enter Book ID: ");
    scanf("%d", &b.ID);

    printf("Enter Title: ");
    scanf("%s", b.title);

    printf("Enter Author: ");
    scanf("%s", b.author);

    printf("Enter Price: ");
    scanf("%d", &b.price);

    printf("\n--- Book Details ---\n");
    printf("ID          : %d\n", b.ID);
    printf("Title       : %s\n", b.title);
    printf("Author      : %s\n", b.author);
    printf("Price       : %d\n", b.price);

    return 0;
}