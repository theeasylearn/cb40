// area of triangle 
// A = h * b / 2

#include <stdio.h>
void main() {
    int height, base;

    printf("Enter height : ");
    scanf("%d", &height);

    printf("Enter base : ");
    scanf("%d", &base);

    float area = (float)height * base / 2;

    printf("area = %.2f ", area);
}