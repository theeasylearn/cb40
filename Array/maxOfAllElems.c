// * max of all elems 
// arr = {1, 2, 2, 2, 3, 5, 1, 2}
// max = 5

#include <stdio.h>

int getMax(int arr[], int size) {
    int max = arr[0];

    for (int i = 0; i < size; i++) { // ! int i = 1 
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}

int main() {    
    int arr[] = {1, 2, 2, 2, 3, -5, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("max = %d ", getMax(arr, size));
    return 0;
}