// get last digit { ld } of an integer number 
//         eg : num = 525 -> ld = 5 
//         eg : num = 3921 -> ld = 1 

#include <stdio.h>
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    int ld = num % 10; // 4 % 10 = 4
    printf("ld = %d ", ld);
}