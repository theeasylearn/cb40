// * factOfFirstN
// num = 5             // num = 3
// 1!, 2!, 3!, 4!, 5!  // 1!, 2!, 3!

#include <stdio.h>
void main() {
    int num = 5;

    // ! method 1 
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i; 
        printf("%d ", fact);
    }

    // ! method 2 
    // for (int i = 1; i <= num; i++) {
    //     int fact = 1;
    //     for (int j = 1; j <= i; j++) {
    //         fact *= j;
    //     }
    //     printf("%d ", fact);
    // }



}

// * method 1 
// int fact = 1 
// int i = 1 

// fact *= i // fact = fact * i // fact = 1
// print fact // 1 
// i++ // i = 2 

// fact *= i // fact = 1 * 2 = 2 
// print fact // 2 
// i++ // i = 3 

// fact *= i // fact = 2 * 3 = 6 
// print fact // 6 
// i++ // i = 4 

// fact *= i // fact = 6 * 4 = 24 
// print fact // 24 
// i++ // i = 5 

// fact *= i // fact = 24 * 5 = 120 
// print fact // 120 
// i++ // i = 6 

// i <= num -> 6 <= 5 -> f -> loop break  
// .
// .
// .

// ! --------------
// * method 2 
// num = 5 
// int i = 1 

// i = 1! = 1 

// i++ // i = 2 

// i = 2! = 2 

// i++ // i = 3 

// i = 3! = 3 * 2 * 1 = 6 

// i++ // i = 4 
// i = 4! = 4 * 3 * 2 * 1 = 24 

// i++ // i = 5 
// i = 5! = 5 * 4 * 3 * 2 * 1 = 120 
