// input -> int pwd 
// isStrong -> pwd >= 4 -> strong pwd 
//             else -> weak pwd 

#include <stdio.h>
void main() {
    int pwd = 12123;
    if (pwd >= 1000) { 
        printf("Strong pwd ");
    } else {
        printf("Weak pwd ");
    }
}