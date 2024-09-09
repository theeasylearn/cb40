#include <stdio.h>
void main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 7) {
            printf("continue stmt run \n");
            continue;
        }
        printf("i = %d \n", i);
    }

}

// loop continue 