// start = 10
// end = 8

// 10 9 8 

#include <stdio.h>
void main() {
    int start = 15;
    int end = 10;

    // 10 11 12 13 14 15 

    if (start < end) {
        while (start <= end) {
            printf("%d ", start);
            start++;
        }
    } else {
        while (start >= end) {
            printf("%d ", start);
            start--;
        }
    }

}
// print start // 10 
// start -- // 9 

// print start // 9 
// start-- // start = 8 

// print start // 8 
// start-- // start = 7 

// start >= end -> 10 >= 8 