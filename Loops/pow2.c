// * pow
// base = -4, expo = -4
// ans = (1 / 4) * (1 / 4) * (1 / 4) * (1 / 4) 

#include <stdio.h>
#include <stdlib.h> // ! to use abs function
void main(){
    float base = 2, expo = -4;
    float ans = 1;
    if (expo < 0) {
        expo *= -1; 
    }
    // expo *= (expo < 0) ? -1 : 1;
    // expo = abs(expo);

    for (int i = 1; i <= expo; i++) {
        ans *= base;
    }
    ans = 1 / ans;
    printf("ans = %f ", ans);
}
