// 1 1 1 1 
// 2 2 2 2 
// 3 3 3 3 
// 4 4 4 4 

#include <stdio.h>
void main() {
    // int num = 1;
    // printf("%d %d %d %d %d \n", num, num, num, num, num);
    // num++; // num = 2 

    // printf("%d %d %d %d %d \n", num, num, num, num, num);

    // num++; // num = 3 
    // printf("%d %d %d %d %d \n", num, num, num, num, num);

    // num++; // num = 4 
    // printf("%d %d %d %d %d \n", num, num, num, num, num);

    for (int i = 1; i <= 4; i++) {
        // printf("%d %d %d %d %d \n", num, num, num, num, num);
        
        // printf("%d ", num);
        // printf("%d ", num);
        // printf("%d ", num);
        // printf("%d ", num);

        for (int j = 1; j <= 4; j++) {
            // printf("%d ", num);
            printf("%d ", i);
        }
        printf("\n");
        // num++; // num = 2 
    }
}
