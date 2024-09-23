#include <stdio.h>
int main() {    
 
    char arr[59];

    printf("total memory size = %d \n", sizeof(arr));
    int size = sizeof(arr) / sizeof(arr[0]); // ! size = num of elems 
    printf("size = %d \n", size);

    for (int i = 0; i < size; i++) {
        arr[i] = i;
        printf("%d ", arr[i]);
    }
    return 0;
}