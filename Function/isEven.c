#include <stdio.h>

int isEven(int num) {
    // if (num % 2 == 0) { // ! even num 
    //     return 1;
    // } else {
    //     return 0;
    // }

    // return num % 2 == 0 ? 1 : 0;

    return !(num % 2);
}
