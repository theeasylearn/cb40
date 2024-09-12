// * 
// * * 
// * * * 
// * * * * 

#include <stdio.h>
void main() {
    for (int row = 1; row <= 4; row++) {
        for (int col = 1; col <= row; col++) {
            printf("* ");
        }
        printf("\n");
    }
}
// row = 1, col = 1

// row = 1
// printf("* ");
// printf("\n");

// row = 2 - col = 2 
// printf("* ");
// printf("* ");
// printf("\n");

// row = 3 -> col = 3 
// printf("* ");
// printf("* ");
// printf("* ");
// printf("\n");

// row = 4 -> col = 4 
// printf("* ");
// printf("* ");
// printf("* ");
// printf("* ");
// printf("\n");