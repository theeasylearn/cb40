#include <stdio.h>
void main() {
    // * * * * 
    // * * * * 
    // * * * * 
    // * * * * 

    // printf("* * * * \n");
    // printf("* * * * \n");
    // printf("* * * * \n");
    // printf("* * * * \n");

    // for (int i = 1; i <= 4; i++) {
    //     // printf("* * * * \n");

    //     // printf("* ");
    //     // printf("* ");
    //     // printf("* ");
    //     // printf("* ");

    //     for (int j = 1; j <= 4; j++) {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    int row = 3, col = 5;
    for (int i = 1; i <= row; i++) { // ! prints row 
        for (int j = 1; j <= col; j++) { // ! prints col | prints cell 
            printf("* ");
        }
        printf("\n");
    }
}