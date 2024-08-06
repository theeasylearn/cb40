// get absolute of a number 
// input -> num 
// num -> -ve -> +ve <- ans -> print ans 
/*
    -10 -> -10 => 10 
    num -> ans
    -39 -> 39 
    194 -> 194 
    -ve -> +ve 
    +ve -> +ve 
*/

#include <stdio.h>
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    
    // +ve-ve.c 
    int ans = num;
    // if (num > 0) {
    //     ans = num;
    // }
    if (num < 0) {
        // ans = -(num);
        ans = -1 * num;
    }
    printf("ans = %d ", ans);
}

// 1. Take input -> printf, scanf. 
// 2. Check if num is +ve or -ve. 
// 3. Convert num to +ve Number if it is -ve. 
// 4. Print the ans. 

// 10 -> +ve -> 

// // ! ----------------
// num = -1 
// ans = num // ans = -1 

// num < 0 -> -1 < 0 -> true 
//     ans = -1 * num; // ans = -1 * -1 = 1 
// print ans // 1 
// // ! ----------------

// num = 10 
// ans = num // ans = 10 

// num < 0 -> 10 < 0 -> false 
// print ans // 10 
// // !---------------

// num = 4 
// ans = num // ans = 4 

// num < 0 -> 4 < 0 -> f 
// print ans // 4 

// // ! ----------------

// num = -49 
// ans = num // ans = -49 

// 0 > -49 
// -49 < 0 -> t 
//     ans = num * -1 // ans = -49 * -1 = 49 
// print ans /// 49 