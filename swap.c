// int num1 = 1, num2 = 2
// num1 = 2, num2 = 1 

#include <stdio.h>
void main() {
    int num1, num2;
    printf("Enter num1 : ");
    scanf("%d", &num1);

    printf("Enter num2 : ");
    scanf("%d", &num2);

    printf("num1 = %d, num2 = %d \n", num1, num2);

    int temp = num2;
    num2 = num1;
    num1 = temp;

    printf("num1 = %d, num2 = %d \n", num1, num2);
}