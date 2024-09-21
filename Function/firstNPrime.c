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
    // ! start = 3 end = 9 -> 3 5 7 
    int start, end;
    printf("Enter start : ");
    scanf("%d", &start);

    printf("Enter end : ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}