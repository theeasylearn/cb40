// * check if given num is prime or not 

#include <stdio.h>
#include <stdbool.h>
// #include <stdlib.h>

bool isPrime(int num) {
    num *= (num < 0) ? -1 : 1;
    // num = abs(num);
    for (int i = 2; i < num; i++) { // ! i <= num - 1 
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
   
int main() {    
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    if (isPrime(num)) {
        printf("%d is a prime num ", num);
    } else {
        printf("%d is a composite num ", num);
    }
    return 0;
}