// * First N prime num 
// num = 10 -> 1 - 10 -> print 1, 2, 3, 5, 7
// num = 20 -> 1 - 20 -> print 1, 2, 3, 5, 7, 11, 13, 17, 19 

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    for (int i = 2; i < num; i++) {
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

    for (int i = 1; i <= num; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}