#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    int roll;
    char name[50];
    struct Date dob;
};

int main() {
    struct Student s;

    printf("Enter Roll Number: ");
    scanf("%d",&s.roll);

    printf("Enter Name: ");
    scanf(" %[^\n]",s.name);

    printf("Enter Date of Birth (DD MM YYYY): ");
    scanf("%d%d%d",&s.dob.day,&s.dob.month,&s.dob.year);

    printf("\nStudent Details\n");
    printf("Roll Number: %d\n",s.roll);
    printf("Name: %s\n",s.name);
    printf("Date of Birth: %02d/%02d/%04d\n",
           s.dob.day,s.dob.month,s.dob.year);

    return 0;
}