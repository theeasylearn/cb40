// arr = {1, 2, 2, 2, 3, 5, 1, 2}
// key = 2 -> 4 

#include <stdio.h>

int countKey(int arr[], int size, int key) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            count++;
        }
    }
    return count;
}

int main() {    
    int arr[] = {1, 2, 2, 2, 3, 5, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 21;

    printf("count = %d ", countKey(arr, size, key));
    return 0;
}