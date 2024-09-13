#include <stdio.h>
int temp = 101;

void main() {
    if (1) {
        int num = 10;
        printf("num = %d ", num);
        printf("temp = %d \n", temp);
    }
    // printf("num = %d ", num);
    
    for (int i = 1; i <= 10; i++) {
        int num = 10;    
        temp++;    
    }
    for (int i = 1; i <= 30; i++) {
        int num = -10; 
        printf("temp = %d \n", temp);
    }
}