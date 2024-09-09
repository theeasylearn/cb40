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

    int row, col;
    printf("Enter row : ");
    scanf("%d", &row);
    printf("Enter col : ");
    scanf("%d", &col);

    if (row <= 0 || col <= 0) {
        printf("Invalid input ");
    } else {
        for (int i = 1; i <= row; i++) {
            // printf("* * * * \n");

            // printf("* ");
            // printf("* ");
            // printf("* ");
            // printf("* ");
            // printf("\n");

            for (int j = 1; j <= col; j++) {
                printf("* ");
            }
            printf("\n");
        }
    }

}