// num1, num2, num3, num4 -> avg 

#include <stdio.h>
void main() {
    int num1, num2, num3, num4;

    printf("Enter num1 : ");
    scanf("%d", &num1);

    printf("Enter num2 : ");
    scanf("%d", &num2);
    
    printf("Enter num3 : ");
    scanf("%d", &num3);

    printf("Enter num4 : ");
    scanf("%d", &num4);

    float avg = (float)(num1 + num2 + num3 + num4) / 4;

    // float # int -> float 
    // int # int -> int 

    printf("ans = %.2f ", avg);
}

// 1 + 2 + 3 + 4 = 10 / 4 = 2.5 