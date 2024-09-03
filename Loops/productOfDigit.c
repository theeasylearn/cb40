// * productOfDigit
// num = 123 -> prod = 1 * 2 * 3 = 6  

#include <stdio.h>
void main() {
    int prod = 1, num = -12123, ld;
    while (num != 0) {
        ld = num % 10; // ! calc Last Digit 
        prod = prod * ld; // ! calc prod 
        num = num / 10; // ! remove last digit 
    }
    printf("prod = %d \n", prod);
}