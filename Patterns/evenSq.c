// 02 04 06 
// 08 10 12 
// 14 16 18 

#include <stdio.h>
void main() {
    int num = 2; 
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("%.2d ", num);
            num += 2;
        }
        printf("\n");
    }
}