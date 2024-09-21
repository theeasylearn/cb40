#include <stdio.h>

int isEven(int num) {
    // if (num % 2 == 0) { // ! even num 
    //     return 1;
    // } else {
    //     return 0;
    // }

    // return num % 2 == 0 ? 1 : 0;

    return !(num % 2);
}

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