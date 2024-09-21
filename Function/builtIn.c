// * builtin function 

#include <stdio.h>
#include <math.h> // ! maths related function
#include <ctype.h> // ! char related function
int main() {    
 
    // ! math
    printf("pow(2.2, 8.1) = %f \n", pow(2.2, 8.1));
    printf("sqrt(16) = %f \n", sqrt(16));

    printf("sin(3.14) = %f \n", sin(3.14));
    printf("cos(3.14) = %f \n", cos(3.14));
    printf("tan(3.14) = %f \n", tan(3.14));

    printf("cbrt(9) = %f \n", cbrt(27));
    printf("floor(3.14) = %f \n", floor(3.14));
    printf("floor(3.14) = %f \n", ceil(3.14));
    

    printf("log(3) = %f \n", log(3));
    printf("log(2.73) = %f \n", log(2.73));
    printf("log10(10) = %f \n", log10(10));


    printf("log10(10) = %f \n", log10(10));

    printf("exp(3) = %f \n", exp(3));
    printf("fabs(-2.2) = %f \n", fabs(-2.2)); // ! absolute value of float var


    // ! ctype 
    printf("\n----------------------\n");

    printf("tolower('A') = %c \n", tolower('A'));
    printf("toupper('a') = %c \n", toupper('a'));

    return 0;
}