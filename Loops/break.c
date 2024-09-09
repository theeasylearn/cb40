#include <stdio.h>
void main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 7) {
            break;
            printf("Break stmt run");
        }
        printf("i = %d \n", i);
    }

    

}

// loop break 