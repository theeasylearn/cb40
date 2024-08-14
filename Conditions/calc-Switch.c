// input -> opr, num1, num2 
// num1 = 1, num2 = 2
// opr = '+'
// ans = num1 + num2 
// opr = '-'
// ans = num1 - num2 

#include <stdio.h>
void main() {

    int num1, num2;
    printf("Enter number 1 : ");
    scanf("%d", &num1);
    printf("Enter number 2 : ");
    scanf("%d", &num2);

    char opr;
    printf("Enter operator : ");
    fflush(stdin);
    scanf("%c", &opr);

    // printf("num1 = %d, opr = %c, num2 = %d", num1, opr, num2);

    switch (opr) {
    case '+' :
        printf("%d ", num1 + num2);
        break;
    case '-' :
        printf("%d ", num1 - num2);
        break;
    case '*' :
        printf("%d ", num1 * num2);
        break;
    case '/' :
        printf("%.2f ", (float)num1 / num2);
        break;
    case '%' :
        printf("%d ", num1 % num2);
        break;
    default:
        printf("Invalid input ");
        break;
    }
}

// opr == '+'
//     print num1 + num2 
// opr == '-'
//     print num1 - num2 