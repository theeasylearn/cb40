// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 

#include <stdio.h>
void main() {
    // int num = 1;
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= 2; j++) {
            // printf("%d ", num);
            printf("%d ", j);
            // num++;
        }
        // num = 1;
        printf("\n");
    }
}   
// int num = 1;
// printf("%d ", num); // 1 
// num++; // num = 2 
// printf("%d ", num); // 2 
// num++; // num = 3 
// printf("%d ", num); // 3 
// num++; // num = 4 
// printf("%d ", num); // 4
// num++; // 5 
// printf("\n");
// num = 1;

// printf("%d ", num); // 1 
// num++; // num = 2 

// printf("%d ", num); // 2 
// num++; // num = 3 

// printf("%d ", num); // 3 
// num++; // num = 4 

// printf("%d ", num); // 4 
// num++; // num = 5 

// printf("\n");
// num = 1;


// ! -------------

// 1 2
// 1 2

// i = 1, j = 1 
// num = 1 

// i <= 2 -> 1 <= 2 -> t 
//     j <= 2 -> 1 <= 2 -> t 
//         print num // 1 
//         num++ // num = 2 
//         j++ // j = 2 
//     j <= 2 -> 2 <= 2 -> t 
//         print num // 2 
//         num++ // num = 2 
//         j++ // j = 3 
//     j <= 2 -> 3 <= 2 -> f -> loop break 
//     print '\n' 
//     num = 1 

//     i++ // i = 2 

// i <= 2 -> 2 <= 2 -> t 
//     j = 1 
//     j <= 2 -> 1 <= 2 -> t 
//         print num // 1 
//         num++ num = 2 
//         j++ // j = 2 
//     j <= 2 -> 2 <= 2 -> t 
//         print num // 2 
//         num++ // num = 3 
//         j++ // j = 3 
//     j <= 2 -> 3 <= 2 -> f -> loop break 

//     print '\n'
//     num = 1 

//     i++ // i = 3 
// i <= 2 -> 3 <= 2 -> f -> loop break; 