#include <stdio.h>
#include <time.h>

// ? Method 1 
// int lastIndex(int arr[], int size, int key) {
//     // code 
//     int ans = -1;
//     for (int i = 0; i < size; i++) {
//         if (arr[i] == key) {
//             ans = i;
//         }
//     }
//     return ans;
// }

// ? Method 2
int lastIndex(int arr[], int size, int key) {
    for (int i =  size - 1; i >= 0; i--) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {    
    
    int arr[] = {1, 2, 3, 4, 5, 2, 5, 3, 4, 5, 2, 2, 2, 5};
    // int arr[] = {-2, 1, 4, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 2;
    int ans = lastIndex(arr, size, key);
    printf("ans = %d ", ans);

    return 0;
}