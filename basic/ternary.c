// ternary  

#include <stdio.h>
void main() {
    int num = -1;

    // if (num > 0) {
    //     num = 100;
    // } else { // num <= 0
    //     num = -100;
    // }

    // (num > 0) ? num = 100 : num = -100;
    num = num > 0 ? 100 : -100;

    printf("num = %d ", num);
    // printf("num = %d ", num > 0 ? 100 : -100);
}