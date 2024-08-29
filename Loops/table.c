// *  print multiplication table of 4 to 10
#include <stdio.h>
#include <stdlib.h>
void main() {
    int start = 10, end = 15;
    printf("Enter start : ");
    scanf("%d", &start);
    printf("Enter end : ");
    scanf("%d", &end);

    if (start > end) {
        // start = 10, end = 4 
        start = start + end; // start = 14 
        end = start - end; // end = 10
        start = start - end; // start = 4
    }

    int ans;
    for (int num = start; num <= end; num++) {
        for (int i = 1; i <= 10; i++) {
            ans = num * i;
            printf("%.2d * %.2d = %.2d \n", num, i, ans);
        }
        printf("------------\n");
    } 
}
// for (int i = 1; i <= 10; i++) {
//     ans = num * i;
//     printf("%.2d * %.2d = %.2d \n", num, i, ans);
// }
// printf("------------\n");
// num++; // num = 5 
// for (int i = 1; i <= 10; i++) {
//     ans = num * i;
//     printf("%.2d * %.2d = %.2d \n", num, i, ans);
// }

// printf("------------\n");
// num++; // num = 6 
// for (int i = 1; i <= 10; i++) {
//     ans = num * i;
//     printf("%.2d * %.2d = %.2d \n", num, i, ans);
// }

// printf("------------\n");
// num++; // num = 7 
// for (int i = 1; i <= 10; i++) {
//     ans = num * i;
//     printf("%.2d * %.2d = %.2d \n", num, i, ans);
// }

// printf("------------\n");
// num++; // num = 8 
// for (int i = 1; i <= 10; i++) {
//     ans = num * i;
//     printf("%.2d * %.2d = %.2d \n", num, i, ans);
// }

// printf("------------\n");
// num++; // num = 9 
// for (int i = 1; i <= 10; i++) {
//     ans = num * i;
//     printf("%.2d * %.2d = %.2d \n", num, i, ans);
// }

// printf("------------\n");
// num++; // num = 10 
// for (int i = 1; i <= 10; i++) {
//     ans = num * i;
//     printf("%.2d * %.2d = %.2d \n", num, i, ans);
// }
// num = 10, count = 1

// ! ---------------

// ans = num * count // 10 * 1 = 10 
// print ans // 10 
// count++ // count = 2

// ans = num * count // 10 * 2 = 20 
// print ans // 20 
// count++ // 3 

// ans = num * 