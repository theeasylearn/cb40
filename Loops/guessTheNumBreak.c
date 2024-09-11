// * guess the num using break stmt 

#include <stdio.h>
#include <stdbool.h>

void main() {
    int num, key = 10;
    while (true) { // ! infinite loop 
        printf("Enter a number : ");
        scanf("%d", &num);

        if (num == key) {
            printf("You have entered the key");
            break;
        }        
    }
}