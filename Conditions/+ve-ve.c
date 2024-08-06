// check if given number is +ve or -ve
//         num = 10 -> print "num is +ve "
//         num = -132 -> print "num is -ve "
//         num = 0 -> print "0 is neither +ve nor -ve "

#include <stdio.h>
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if (num > 0) {
        printf("num is +ve \n");
    }
    if (num < 0) 
        printf("num is -ve \n");
    
    if (num == 0) printf("0 is neither +ve nor -ve \n");
    
}

// num = 10 

// num > 0 -> 10 > 0 -> t 
//     printf("num is +ve \n");
// num < 0 -> 10 < 0 -> f 
// num == 0 -> 10 == 0 -> f 