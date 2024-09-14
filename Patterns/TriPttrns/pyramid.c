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
    int height = 8;
    // for (int i = 1; i <= height; i++) {
    //     for (int j = height - 1; j >= i; j--) {
    //         printf(" ");
    //     }
    //     for (int k = 1; k <= i; k++) {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    int nsp1 = 0, nsp2, nsp3;
    bool is2ndLine = false;
    for (int i = 1; i <= height; i++) {
        for (int j = height - 1; j >= i; j--) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            if ((k == 2 || i == 7 || i - k == 1) && ( k != 1 && i != 8 && i != 2 && (i != 7 && k != 7) )) {
                printf("  ");
            } else {
                printf("* ");
            }
           
        }
        printf("\n");
    }
}