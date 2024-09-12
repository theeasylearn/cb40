// 1 2 3 
// 4 5 6 
// 7 8 9 

#include <stdio.h>
void main() {
    int num = 1;
    for (int i = 1; i <= 4; i++) {
        for ( int j = 1; j <= 4; j++) {
            printf("%.2d ", num);
            num++;
        }
        printf("\n");
    }
}
// printf("%d ", num);
// num++; // num = 2 

// printf("%d ", num);
// num++; // num = 3 

// printf("%d ", num);
// num++; // num = 4 

// printf("\n");

// printf("%d ", num);
// num++; 