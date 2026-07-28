#include <stdio.h>

struct Rectangle {
    float length;
    float breadth;
};

int main() {
    struct Rectangle rect;
    float area, perimeter;
    
    printf("Enter length of rectangle: ");
    scanf("%f", &rect.length);
    
    printf("Enter breadth of rectangle: ");
    scanf("%f", &rect.breadth);
    
    area = rect.length * rect.breadth;
    
    perimeter = 2 * (rect.length + rect.breadth);
    
    printf("\n --- Rectangle Properties --- \n");
    printf("Length: %.2f\n", rect.length);
    printf("Breadth: %.2f\n", rect.breadth);
    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);
    
    return 0;
}
