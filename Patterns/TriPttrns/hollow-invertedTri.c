// * * * * *
// *     * 
// *   * 
// * * 
// * 
// height = 5 

#include <stdio.h>
void main() {
    int height = 5;
    for (int i = 1; i <= height; i++) {
        for (int j = height; j >= i; j--) {
            if (i == 1 || j == height || i == j) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}