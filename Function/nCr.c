// * nCr -> ans = n! / (r! * (n - r)!)

#include <stdio.h>

int getFact(int num) {
    int fact = 1; 
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}
int getCombination(int n, int r) {
    // int ans = getFact(n) / (getFact(r) * getFact(n - r));
    // return ans;
    return getFact(n) / (getFact(r) * getFact(n - r));
}
int main() {    

    int n = 5, r = 2;
    int ans = getCombination(n, r);
    printf("ans = %d ", ans);
    return 0;
}

// 5C2 = 120 / 12 -> 10 