//         * 
//       * * 
//     * * *
//   * * * *
// * * * * *

// # # # # * 
// # # # * * 
// # # * * *
// # * * * *
// * * * * *

#include <stdio.h>
void main() {
    int height = 5;

    for (int i = 1; i <= height; i++) {
        for (int j = height - 1; j >= i; j--) {
            // printf("# ");
            printf("  ");
        }
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }

}
// ! height = 4
// for (int i = 1; i <= height; i++) {
//     for (int j = 1; j <= height; j++) {
//         if (j == 4 || i == 4 || (i == 2 && j == 3) || (j == 2 && i == 3) || (i == 3 && j == 3)) {
//             printf("* ");
//         } else {
//             printf("  ");
//         }
//     }
//     printf("\n");
// }    