// return index 

#include <stdio.h>
int indexOf(int arr[], int size, int key) {
    // code 
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}
int main() {    
    
    int arr[] = {2, 3, 1, 4, -1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 1;
    int ans = indexOf(arr, size, key);
    if (ans == -1) {
        printf("Key does not exist ");
    } else {
        printf("Key is present at index %d ", ans);
    }

    return 0;
}