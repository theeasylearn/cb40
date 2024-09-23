#include <stdio.h>

int getSum(int arr[], int size) {
    int ans = 0;
    for (int i = 0; i < size; i++) {
        ans = ans + arr[i];
    }
    // printf("%d ", ans);
    return ans;
}
int main() {    
    
    int arr[] = {23, 53, 4, -4, -100, 32, 4};
    int size = sizeof(arr) / sizeof(arr[0]); // 20 / 4 -> 5 

    printf("ans = %d ", getSum(arr, size));
    return 0;
}