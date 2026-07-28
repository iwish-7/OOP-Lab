#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int cprog;
    int Maths;
    int Physics;
};

int main() {
    struct Student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter C Prog Marks: ");
    scanf("%d", &s.cprog);

    printf("Enter Maths Marks: ");
    scanf("%d", &s.Maths);

    printf("Enter Physics Marks: ");
    scanf("%d", &s.Physics);

    printf("\nStudent Details\n");
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("C-Prog Marks: %d\n", s.cprog);
    printf("Maths: %d\n", s.Maths);
    printf("Physics Marks: %d\n", s.Physics);
    printf("Total Marks: %d\n", s.Physics + s.Maths + s.cprog);
    float avg = (s.Physics + s.Maths + s.cprog)/3;
    printf("Average: %.2f", avg);

    return 0;
}