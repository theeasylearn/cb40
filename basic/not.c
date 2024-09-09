#include <stdio.h>
#include <stdbool.h> // ! to use boolean values -> true, false 

void main() {
    // 1 -> true 
    // 0 -> false 

    bool flag = false;
    printf("flag = %d \n", flag);

    // ! -> not { ! }

    bool ans = !flag; // ! false -> true 
    printf("ans = %d \n", ans);

    int num1 = 1, num2 = 2;
    ans = !(num1 > num2) && (num1 == 1 || num2 == 1);
    // 1 -> true 
    printf("ans = %d \n", ans);

    // !((1 <= 0 && 2 == 2 || 3 == (1 * 3)) || !((1 + 1) == 10 / 5)) => f 

    // 0 -> false 
    // 1 10 100 -10 -1000 -> true 

    bool flag2 = !10;
    printf("flag2 = %d ", flag2);
}