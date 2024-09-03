#include <stdio.h>
void main() {
    int num, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Using a for loop
    for (;num != 0; num /= 10) {
        count++;
    }
    printf("num = %d \n", num);
    printf("Number of digits: %d\n", count);
}



// OutPut:
// Enter an integer: 123
// Number of digits: 3