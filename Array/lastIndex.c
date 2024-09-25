#include <stdio.h>

int lastIndex(int arr[], int size, int key) {
    // code 
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            count++;
        }
    }
}

int main() {    
    
    int arr[] = {1, 2, 3, 4, 5, 2, 5, 3, 4, 5, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 2;
    int ans = lastIndex(arr, size, key);
    return 0;
}