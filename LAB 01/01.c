#include <stdio.h>

struct Student {
    int rn;
    char name[100];
    int age;
    float cgpa;
};

int main() {
    struct Student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.rn);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Age: ");
    scanf("%d", &s.age);

    printf("Enter CGPA: ");
    scanf("%f", &s.cgpa);

    printf("\n--- Student Details ---\n");
    printf("Roll Number : %d\n", s.rn);
    printf("Name        : %s\n", s.name);
    printf("Age         : %d\n", s.age);
    printf("CGPA        : %.2f\n", s.cgpa);

    return 0;
}