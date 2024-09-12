// * * * * 
// * * * 
// * * 
// * 

#include <stdio.h>
void main() {
    int height = 2;
    for (int i = 1; i <= height; i++) {
        for (int j = height; j >= i; j--) {
            printf("* ");
        }
        printf("\n");
    }
}
// row = 1, 

// row = 1, col = 4 
// printf("* ");
// printf("* ");
// printf("* ");
// printf("* ");
// printf("\n");

// row = 2 col = 3 
// printf("* ");
// printf("* ");
// printf("* ");
// printf("\n");

// row = 3 col = 2 
// printf("* ");
// printf("* ");
// printf("\n");

// row = 4 col = 1 
// printf("* ");
// printf("\n");