// * get factorial of a num 

#include <stdio.h>
int getFact(int number) { 
    int ans = 1;
    for (int i = 1; i <= number; i++) {
        ans = ans * i;
    }
    return ans;
}

int main() {    
    int num = 9;
    if (num >= 0) { // ! num is +ve 
        // int ans = getFact(num);
        // printf("ans = %d ", ans);
        printf("ans = %d ", getFact(num));
    } else { // ! num is -ve 
        printf("Invalid input ");
    }
    return 0;
}