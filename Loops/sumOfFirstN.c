// sumOfFirstN
// num = 10 
// 1 + 2 + 3 + ... + 10 

// 4 
// 1 + 2 + 3 + 4 = 10 

#include <stdio.h>
void main() {
    int sum = 0;
    for (int i = 1; i <= 5; i++) {
        sum += i;
    }
    printf("sum = %d \n", sum);
}
// for i = 1 -> 10 
// sum += 1 // sum = 1 

// sum += 2 // sum = 3 

// sum += 3 // sum = 6 

// sum += 4 // sum = 10 
// ...