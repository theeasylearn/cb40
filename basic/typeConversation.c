#include <stdio.h>
void main() {
    char ch = 'a';
    printf("ch %%c = %c \n", ch);
    printf("ch %%d = %d \n", ch);

    ch = 'b';
    printf("ch %%c = %c \n", ch);
    printf("ch %%d = %d \n", ch);

    ch = 'c';
    printf("ch %%c = %c \n", ch);
    printf("ch %%d = %d \n", ch);

    ch = 'd';
    printf("ch %%c = %c \n", ch);
    printf("ch %%d = %d \n", ch);

    ch++; // 'e'
    printf("ch %%c = %c \n", ch);
    printf("ch %%d = %d \n", ch);

    char ch2 = 'A';
    printf("ch2 %%c = %c \n", ch2);
    printf("ch2 %%c = %d \n", ch2);

    ch2++; // 
    printf("ch2 %%c = %c \n", ch2);
    printf("ch2 %%c = %d \n", ch2);
}