// odd even 
#include <stdio.h>
void main() {
    int num = 4;
    // int even = 2, odd = 1;
    // num = num % 2 ? 1 : 0;
    // printf("num = %d ", num);

    printf(num % 2 == 0 ? "given number is even" 
                        : "given number is odd");
}