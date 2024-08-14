// input -> num1, num2, num3 
// print which one is greatest {maximum num}

// eg : 
//     num1 = 10, num2 = 20.11, num3 = 20.22
//     print num3 

#include <stdio.h>
void main() {
    int num1 = -1, num2 = -12, num3 = -4;

    if (num1 > num2) {
        if (num1 > num3) {
            printf("%d ", num1);
        } else {
            printf("%d ", num3);
        }
    } else {
        if (num2 > num3) {
            printf("%d ", num2);
        } else {
            printf("%d ", num3);
        }
    }
}