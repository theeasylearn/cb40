// * number of even elems in arr 
// arr = {1, 2, 3, 4, 1, 0, -3}
// even = 3 

// arr = {1, 2, 3, 1, 2, 22, -12}
// even = 4 

#include <stdio.h>

int getEven(int arr[], int size) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {    
    int arr[] = {1, 2, 3, 41, 12, 10, -3};
    int size = sizeof(arr) / sizeof(arr[0]);
   
    printf("count = %d ", getEven(arr, size));
    return 0;
}