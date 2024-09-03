#include <stdio.h>
void main() {
    int num = 5;
    while (num >= 5) {
        printf("num = %d \n", num);
        num--;
    }
    for (; num >= 5;) {
        printf("num = %d \n", num);
        num--;
    }
}