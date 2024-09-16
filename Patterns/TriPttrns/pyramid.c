//      * 
//     * * 
//    * * * 
//   * * * * 
//   ###* 
//   ##* * 
//   #* * * 
//   * * * * 

#include <stdio.h>
#include <stdbool.h>
void main() {
    int height = 15;
    // for (int row = 1; row <= height; row++) {
    //     for (int sp = height - 1; sp >= row; sp--) {
    //         printf(" ");
    //     }
    //     for (int str = 1; str <= row; str++) {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    int nsp1 = 0, nsp2, nsp3;
    bool is2ndLine = false;
    for (int row = 1; row <= height; row++) {
        for (int sp = height - 1; sp >= row; sp--) {
            printf(" ");
        }
        for (int str = 1; str <= row; str++) {
            if (
                (str == 2 || row == (height - 1) || row - str == 1)
                && ((str != 1 && row != height && row != 2) 
                     && (row != (height - 1) && str != (height - 1)))) {
                printf("  ");
            } else {
                if (row == (height - 1) && (str >= 2 && str <= (height - 2))) {
                    printf("  ");
                } else{
                    printf("* ");
                }
            }
           
        }
        printf("\n");
    }
}