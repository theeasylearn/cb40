// * check if given num is prime or not 

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    for (int i = 2; i < num; i++) { // ! i <= num - 1 
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
   
int main() {    
    printf("%d ", isPrime(-9));
    return 0;
}