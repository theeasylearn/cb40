// * * * * *
//   * * * *
//     * * *
//       * * 
//         * 

// * * * * *
// # * * * *
// # # * * *
// # # # * * 
// # # # # * 

#include <stdio.h>
void main() {
    int height = 5;

    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= i - 1; j++) {
            // printf("# ");
            printf("  ");
        }
        for (int k = height; k >= i; k--) {
            printf("* ");
        }
        printf("\n");
    }
}