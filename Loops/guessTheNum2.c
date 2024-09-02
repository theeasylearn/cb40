// * guessTheNum using do while loop 
// num -> input 
// key 
// num != key 

#include <stdio.h>
void main() {
    int num;
    int key = 5;

    do {
        printf("Enter a number : ");
        scanf("%d", &num);
    } while (num != key);
    printf("You have entered the value of key.");
}

// key = 5
// num

// scan num // 10 
// num != key -> 10 != 5 -> t 

// scan num // 12 
// num != key -> 12 != 5 -> t 

// scan num // -101 
// num != key -> -101 != 5 -> t 

// scan num // 5 
// num != key -> 5 != 5 -> f -> loop end 

// code 