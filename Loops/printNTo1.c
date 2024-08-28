// num = 10 
// 10 9 8 7 ... 1 

#include <stdio.h>

void main() {
    int count = -210;
    
    if (count < 0) {
        printf("Invalid input \n");
        count *= -1;
    }

    while (count >= 1) {
        printf("%d ", count);
        count--; 
    }
}
    // print count // 10 

    // count--; // count = 9
    // print count // 9 

    // count-- // count = 8 
    // print count // 8 

    // .
    // .
    // .

    // count-- // count = 1 
    // print count // 1 

    // count-- count = 0 
    // print 0 

    // count >= 1
    //     print count 