#include <stdio.h>
#include <stdbool.h>
int main() {    
 
    int num;
    printf("sizeof(num) = %d \n", sizeof(num));

    char ch = 'a'; 
    printf("sizeof(ch) = %d \n", sizeof(ch));

    printf("sizeof(float) = %d \n", sizeof(float));
    printf("sizeof(bool) = %d \n", sizeof(bool));
    printf("sizeof(1) = %d \n", sizeof(1));
    printf("sizeof(3.14f) = %d \n", sizeof(3.14f)); // 3.14 -> double, 3.14f -> float 

    double PI = 3.14; // * same as float 
    printf("%f %d ", PI, sizeof(PI));
    return 0;
}