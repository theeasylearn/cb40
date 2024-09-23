#include <stdio.h>
#include "isEven.c" // * to use isEven function 
int main() {    
 
    int num;
    printf("Enter a num : ");
    scanf("%d", &num);

    // if (isEven(num) == 1) {
    //     printf("Even num ");
    // } else {
    //     printf("Odd num ");
    // }

    // isEven(num) == 1 ? printf("Even num ") : printf("Odd num ");

    printf(isEven(num) ? "Even num " : "Odd num ");

    return 0;
}