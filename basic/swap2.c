// * swap two nums using 2 vars 

#include <stdio.h>
void main() {      
    int num1, num2;

    printf("Enter num1 : ");
    scanf("%d", &num1);

    printf("Enter num2 : ");
    scanf("%d", &num2);

    printf("num1 = %d num2 = %d \n", num1, num2);
    num1 = 1, num2 = 2;

    // num1 = num1 - num2; // num1 = 1 - 2 = -1 
    num1 = num1 + num2; // num1 = 1 + 2 = 3 
    num2 = num1 - num2; // num2 = 3 - 2 = 1 
    num1 = num1 - num2; // num1 = 3 - 1 = 2 

    printf("num1 = %d num2 = %d \n", num1, num2);
}

// num1 = 1, num2 = 2 
// swap - code 
// num1 -> num2, num2 -> num1 

// num1 = 1, num2 = 2 

// num1 = num1 + num2 // 1 + 2 = 3 

// num2 = num1 - num2 // 3 - 2 = 1 

// num1 = num1 - num2 // 3 - 1 = 2 
