#include <stdio.h>
int main() {    
 
    int arr[5];
    // printf("%d ", arr[0]);
    // printf("%d ", arr[1]);
    // printf("%d ", arr[2]);

    // arr[0] = 0;
    // arr[1] = 10;
    // arr[2] = -12;
    // printf("\n");
    // printf("%d ", arr[0]);
    // printf("%d ", arr[1]);
    // printf("%d ", arr[2]);
    // printf("%d ", arr[3]);
    // printf("%d ", arr[4]);

    for (int i = 0; i < 5; i++) {
        arr[i] = i;
        printf("%d ", arr[i]);
    }

    // int num;
    // printf("num = %d ", num);
    return 0;
}