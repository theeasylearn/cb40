#include<stdio.h>
#include<string.h>
void main()
{
    char name[32];
    char fullname[64];
    printf("Enter your name");
    scanf("%s",name);
    printf(" name = %s",name);

    fflush(stdin);
    printf("Enter your fullname");
    gets(fullname); //gets function is used to accept strign with space.

    puts(fullname);

}