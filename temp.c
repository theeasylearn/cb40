#include <stdio.h>
int main() {    
    
    int arr[5]; // ! int array of 5 size {num of elems = 5}

    arr[3] = 4;
    arr[1] = -10;
    arr[0] = 101; // ! first index = 0
    arr[2] = 10;
    arr[4] = 41; // ! last index = size - 1 => 5 - 1 => 4

    // printf("%d ", arr[0]);
    // printf("%d ", arr[1]);
    // printf("%d ", arr[2]);
    // printf("%d ", arr[3]);
    // printf("%d ", arr[4]);

    for (int i = 0; i < 5; i++) {
        printf("i = %d arr[%d] = %d \n", i, i, arr[i]);
    }

    return 0;
}