// compare two string to find out whether they are same or not 
#include<stdio.h>
#include<string.h>
void main()
{
    char* name = "Jeel Patel";
    char* name2 = "Jeel Patel";
    int length1 = strlen(name);
    int length2 = strlen(name2);
    int position=0;
    printf("name = %s \n name 2 = %s",name,name2);
    if(length1 != length2)
    {
        printf("\n both string size are not same hence they are not same");
    }
    else 
    {

        while(position<length1)
        {
            if(name[position] != name2[position])
            {
                break; //stop loop
            }
            position++;
        }
        if(position==length1)
            printf("\n both string are exactly same");
        else 
            printf("\n both string are not same");
    }
}