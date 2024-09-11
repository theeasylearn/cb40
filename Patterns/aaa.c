// a a a a 
// b b b b 
// c c c c 
// d d d d  

#include <stdio.h>
void main() {

    // ! method 1 
    char ch = 'a';
    // printf("%c ", ch);
    // printf("%c ", ch);
    // printf("%c ", ch);
    // printf("%c ", ch);
    // printf("\n");
    // ch++; 
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            printf("%c ", ch);
        }
        printf("\n");
        ch++;
    }

    // ! method 2 

    printf("\n--------------\n");

    char start;
    printf("Enter start : ");
    scanf("%c", &start);
    
    fflush(stdin);
    
    char end;
    printf("Enter end : ");
    scanf("%c", &end);

    for (int i = start; i <= end; i++) {
        for (int j = start; j <= end; j++) {
            printf("%c ", i);
        }
        printf("\n");
    }
}
