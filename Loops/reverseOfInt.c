// * reverseOfInt 
// num = 123 
// o / p = 321 

// num = 3924 -> 4293 
// num = -402 -> -204 

#include <stdio.h>
void main() {
    int num = -9322, rnum = 0, ld = 0;

    while (num != 0) {
        ld = num % 10; // ! calc last digit 
        rnum = ld + rnum * 10; // ! calc rnum 
        num /= 10; // num = num / 10 // ! remove last digit 

        // printf("rnum = %d, ld = %d, num = %d \n", rnum, ld, num);
    }
    printf("rnum = %d ", rnum);
}

// num = 123 
// temp = 1 
// rnum = 0 
// ld = 0 // last digit 

// rnum = 321 -> 23 


// ld = num % 10 // 123 % 10 -> ld = 3 
// rnum = ld + rnum  * temp // 3 + 0 * 10 -> 3 
// num = num / 10 -> 123 / 10 -> 12
// temp = temp * 10 // temp = 1 * 10 -> temp = 10 

// ld = num % 10 // 12 % 10 -> 2 
// rnum = ld + rnum  * temp // 2 + 3 * 10 -> 2 + 30 -> 32 
// num = num / 10 -> 12 / 10 -> 1
// temp = temp * 10 // 10 * 10 -> temp = 100 

// ld = num % 10 // 1 % 10 -> ld = 1 
// rnum = ld + rnum * temp -> 1 + 32 * 10 -> 1 + 320 -> 321 
// num = num / 10 -> 1 / 10 -> 0 
// temp = temp * 10 // 100 * 10 -> temp = 1000 

// num != 0 