// how to count words in string
#include<stdio.h>
#include<string.h>
void main()
{
    //another way to initialize string 
    char name[] = {'J','e','e','l',' ','m',' ','P','a','t','e','l'};
    int words=1;
    int position=0;
    int length;
    length = strlen(name);
    printf("name = %s",name);
    while(position<length)
    {
        if(name[position]==' ')
        {
            words=words+1;
        }
        position++;
    }
    printf("\n words = %d",words);
}