// * * * *
// *     *
// *     *
// * * * *

#include <stdio.h>
void main() {
    int height, width;
    printf("Enter height : ");
    scanf("%d", &height);

    printf("Enter widht : ");
    scanf("%d", &width);

    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= width; j++) {
            if (i == 1 || j == 1 || i == height || j == width) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}