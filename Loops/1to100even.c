// * 1 to 100 even

// 2 4 6 8 ... 98 100 

#include <stdio.h>
void main() {
    int start = 3, end = 21;
    if (start % 2 != 0) { // * odd num 
        start++;
    }
    for (int i = start; i <= end; i += 2) {
        printf("%d ", i);
    }
}