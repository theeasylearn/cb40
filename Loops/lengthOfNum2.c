// lengthOfNum using do while loop 

#include <stdio.h>
void main() {
    int num = 123, count = 0;
    // do {
    //     count++;
    //     num /= 10; 
    // } while (num != 0);
    // printf("count = %d ", count);

    for (int i = num; i != 0; i++) {
        count++;
        i /= 10; 
    }
    printf("count = %d ", count);
}

// i = num // i = 123 
// i != 0 -> 123 != 0 -> t 
//     count++ // 1 
//     i /= 10 // i = 12 
//     i++ // i = 13 
// i != 0 -> 13 != 0 -> t 
//     count++ // 2 
//     i /= 10 -> i = 13 / 10 -> i = 1 
//     i++ // i = 2 
// i != 0 -> 2 != 0 -> t 
//     count++ // 3 
//     i /= 10 -> i = 3 / 10 -> 0 
//     i++ // i = 1 
// i != 0 -> 1 != 0 -> t 
//     count++ // 4 
//     i /= 10 -> 1 / 10 -> 0 
//     i++ // i = 1 
// i != 0 -> 1 != 0 -> t 
//     count++ // 5 
//     i /= 10 -> i = 1 / 10 -> 0 
//     i++ // i = 1 