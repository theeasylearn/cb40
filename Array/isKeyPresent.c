// * check if key exist or not 
// arr = {1, 2, 3, 4}
// key = 3 -> return true 
// key = 21 -> return false 

#include <stdio.h>
#include <stdbool.h>

bool isKeyPresent(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return true;
        }
    }
    return false;
}

int main() {    
    int arr[] = {1, 2, 3, 4, 5, 2, 5, 3, 4, 5, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 21;
    printf("ans = %d ", isKeyPresent(arr, size, key));
    return 0;
}