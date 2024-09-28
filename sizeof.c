#include <stdio.h>
int main() {    
    // char ch;
    // printf("%d ", sizeof(ch));

    int nums[5];

    printf("sizeof(nums) = %d \n", sizeof(nums));
    printf("sizeof(nums[0]) = %d \n", sizeof(nums[0]));

    int size = sizeof(nums) / sizeof(nums[0]);
    printf("size = %d \n", size);

    // ! input -> elems 
    for (int i = 0; i < size; i++) {
        printf("Enter %d elem : ", i);
        scanf("%d", &nums[i]);
    }

    // ! print elem 
    for (int i = 0; i < size; i++) {
        printf("nums[%d] = %d \n", i, nums[i]);
    }
    
    return 0;
}