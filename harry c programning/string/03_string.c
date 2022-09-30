#include <stdio.h>

int main()
{
    char name[12];
    printf("Enter your name :  ");
    gets(name);
     printf("your name is :  ");
    puts(name);
    
    // printf(" your name is %s\n ", name);
    return 0;
}