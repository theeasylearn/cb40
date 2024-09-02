// * lengthOfNum
// num = 123 -> ans = 3
// num = 3912 -> ans = 4
// num = 1 -> 1
// num = 0 -> 1 
// num = -492 -> 3

#include <stdio.h>
void main() {
    int num = 0, count = 0;

    if (num == 0) {
        count = 1;
    } else {
        while (num != 0) {
            num /= 10; // ! remove last digit 
            count++;
        }
    }
    printf("count = %d ", count);
}
// num = 0 
// num != 0 -> 0 != 0 -> f -> loop end 
// print count // 0 

// num = 421
// count = 0

// num != 0 -> 421 != 0 -> t
//     count++ // count = 1
//     num /= 10 // num = num / 10 // 42
// num != 0 -> 42 != 0 -> t
//     count++ // count = 2
//     num /= 10 // num = 42 / 10 = 4
// num != 0 -> 4 != 0 -> t
//     count++ // count = 3
//     num /= 10 -> num = 4 / 10 -> 0
// num != 0 -> 0 != 0 -> f -> loop end

// ! -----------------

// num = 94829
// count = 0

// num != 0 -> 94829 != 0 -> t
//     count++ // 1
//     num /= 10 // num = num / 10 -> num = 94829 / 10 = 9482
// num != 0 -> 9482 != 0 -> t
//     count++ // 2
//     num /= 10 -> 9482 / 10 = 948
// num != 0 -> 948 != 0 -> t
//     count++ // 3
//     num /= 10 -> 948 / 10 = 94
// num != 0 -> 94 != 0 -> t
//     count++ // 4
//     num /= 10 -> 94 / 10 -> 9
// num != 0 -> 9 != 0 -> t
//     count++ // 5
//     num /= 10 -> 9 / 10 -> 0
// num != 0 -> 0 != 0 -> f -> loop end

// print count // 5
