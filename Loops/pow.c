// * pow
// base = 2, expo = 5
// ans = 2 * 2 * 2 * 2 * 2 -> 2 ^ 5 = 32 
// base = 3, expo = 2 
// ans = 3 * 3 -> 3 ^ 2

// base = -4, expo = 3 
// ans = -4 * -4 * -4 -> -64 

#include <stdio.h>
void main() {
    int base = 2, expo = 5;
        for i = 1, i <= expo, i++
    
        base * expo -> 2 * 5 = 10 
    

}

// base = 3, expo = 4 
// ans = 1;

// ans = 3 * 3 * 3 * 3 
// ans = ans * base 

// i = 1; i <= expo 

// i <= expo -> 1 <= 4 -> t 
//     ans = ans * base // 1 * 3 -> 3 
//     i++ // i = 2 
// i <= expo -> 2 <= 4 -> t 
//     ans = ans * base // 3 * 3 -> 9 
//     i++ // i = 3 
// i <= expo -> 3 <= 4 -> t 
//     ans = ans * base // 9 * 3 -> 27 
//     i++ // i = 4 
// i <= expo -> 4 <= 4 -> t 
//     ans = ans * base // 27 * 3 -> 81
//     i++ // i = 5 
// i <= expo -> 5 <= 4 -> f -> loop end 

// print ans // 81 

// ! ---------------

// base = 2, expo = 5 
// i = 1
// ans = 1

// i <= expo -> 1 <= 5 -> t 
//     ans *= base // ans = ans * base -> 1 * 2 => 2 
//     i++ // i = 2 
// i <= expo -> 2 <= 5 -> t 
//     ans *= base -> 2 * 2 -> 4 
//     i++ // i = 3 
// i <= expo -> 3 <= 5 -> t 
//     ans *= base -> 4 * 2 -> 8 
//     i++ // i = 4 
// i <= expo -> 4 <= 5 -> t 
//     ans *= base -> 8 * 2 -> 16 
//     i++ // i = 5 
// i <= expo -> 5 <= 5 -> t 
//     ans *= base -> 16 * 2 -> 32 
//     i++ // i = 6 
// i <= expo -> 6 <= 5 -> f -> loop end 
// print ans // 32 