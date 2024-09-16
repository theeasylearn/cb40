#include <stdio.h>

void printStr(int count) {
    printf("\n");
    // printf("count = %d \n", count);
    for (int i = 1; i <= count; i++) {
        printf("- ");
    } 
    printf("\n");
    return;
}

int main() {  
    int height = 20;  
    printStr(10);
    printStr(height);

    return 0;
}