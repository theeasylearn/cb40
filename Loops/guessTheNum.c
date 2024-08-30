// * guessTheNum
// key = 5 
// num -> input 

#include <stdio.h>
void main() {
    int num, key = 5;
    printf("num = %d %d \n", num, key);
    while (num != key) {
        printf("Enter a number : ");
        scanf("%d", &num);
    }
    printf("You have entered the value of key ");
}

num = 2310144
key = 5 

num != key -> 2310144 != 5 -> t
    print "Enter a number "
    scan num // 12 
num != key -> 12 != 5 -> t 
    print "Enter a number "
    scan num // 3 
num != key -> 3 != 5 -> t 
    print "Enter a number "
    scan num // 5 
num != key -> 5 != 5 -> f -> loop break 

print "You have entered the value of key "

// ! ----------------

// int key = 5 
// int num // input 

// scan num // 10
// num == key -> 10 == 5 -> f 

// scan num // 15 
// num == key -> 15 == 5 -> f 

// scan num // 20 
// num == key -> 20 == 5 -> f 

// scan num // -5 
// num == key -> -5 == 5 -> f 

// scan num // 5 
// num == key -> 5 == 5 -> t -> loop break 

// num != key 