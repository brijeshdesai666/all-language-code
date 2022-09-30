#include <stdio.h>
#include <string.h>
int main()
{
    char name[12];
    printf("Enter your name :  ");
    gets(name);
     printf("your name is :  ");
    puts(name);
    int lenth = strlen(name);
    printf (" this lanth is %d \n" , lenth);
    // printf(" your name is %s\n ", name);
    return 0;
}