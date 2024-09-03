// * sumOfDigit
// num = 123 -> sum = 1 + 2 + 3 -> print 6 
// num = 3922 -> sum = 3 + 9 + 2 + 2 -> 16
// num = 3 -> sum = 3 
// num = -193 -> -13 
// num = 0 -> sum = 0

#include <stdio.h>
void main() {

    int sum = 0, num = -123, ld;
    while (num != 0) {
        ld = num % 10; // ! calc Last Digit 
        sum = sum + ld; // ! calc sum 
        num = num / 10; // ! remove last digit 
    }
    printf("sum = %d \n", sum);
}

// num = 1293 
// ld = 0
// sum = 0 

// ld = num % 10 // 1293 % 10 = 3 
// sum = sum + ld // 0 + 3 = 3 
// num = num / 10 // 1293 / 10 = 129

// ld = num % 10 // 129 % 10 -> ld = 9
// sum = sum + ld // 3 + 9 = 12 
// num = num / 10 // 129 / 10 -> num = 12

// ld = num % 10 // 12 % 10 -> ld = 2
// sum = sum + ld // 12 + 2 -> sum = 14 
// num = num / 10 // 12 / 10 -> num = 1

// ld = num % 10 // 1 % 10 -> ld = 1 
// sum = sum + ld // 14 + 1 -> sum = 15 
// num = num / 10 // 1 / 10 -> num = 0

// ld = num % 10 // 0 % 10 -> ld = 0 
// sum = sum + ld // 15 + 0 -> 15 
// num = num / 10 // 0 / 10 -> num = 0 

// ld = num % 10 // 0 % 10 -> ld = 0 
// sum = sum + ld // 15 + 0 -> sum = 15 
// num = num / 10 // 0 / 10 -> num = 0 


// num > 0 
//     num <= 0 

// num = 123 
// num <= 0 -> 123 <= 0 -> f -> loop break;

// num = 123 
// sum = 0
// num > 0 -> 123 > 0 -> t 
//     num = 12 
//     sum = 3 
// num > 0 -> 12 > 0 -> t 
//     num = 1 
//     sum = 5 
// num > 0 -> 1 > 0 -> t 
//     num = 0
//     sum = 6 
// num > 0 -> 0 > 0 -> f -> loop end 

// num = -123 
// num > 0 -> -123 > 0 -> f -> loop end 

// || 
// (num > 0 || num < 0) <=> num != 0 