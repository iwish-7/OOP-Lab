#include <stdio.h>

struct Employee {
    int ID;
    char name[100];
    int salary;
};

int main() {
    struct Employee e;

    for (int i = 0; i < 3; i++) {
        printf("Enter details for Employee %d:\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &e.ID);

        printf("Enter Name: ");
        scanf("%s", e.name);

        printf("Enter Salary: ");
        scanf("%d", &e.salary);
    }

    for (int i = 0; i < 3; i++) {
        printf("\n--- Employee %d Details ---\n", i + 1);
        printf("Employee ID : %d\n", e.ID);
        printf("Name        : %s\n", e.name);
        printf("Salary      : %d\n", e.salary);
    }

    return 0;
}