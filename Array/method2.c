#include <stdio.h>
int main() {    

    // int arr[10] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
    int arr[] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5};

    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }; 
    printf("\n");

    printf("%d ", arr[100]);
    return 0;
}