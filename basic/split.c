// int num = 25 // first = 2, sec = 5 
// int num = 91 // first = 9, sec = 1 

#include <stdio.h>
void main() {
    int num = -26;
    printf("Enter a number : ");
    scanf("%d", &num);

    int first = num / 10;
    int sec = num % 10;
    printf("first = %d, second = %d \n", first, sec);
}
// num = 25 
// int sec = num / 5; // 25 / 5 = 5 

// num = 12 
// sec = num / 5 // 12 / 5 = 2 

// num = 13 
// sec = num / 5 // 13 / 5 = 2 

// num = 13 
// f = num - 