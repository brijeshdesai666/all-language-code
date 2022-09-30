#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char ch;
    scanf("%c",&ch);
    getchar();
    char s[100];
    scanf("%s" , &s);
    getchar();
    char sen[99];
    gets(sen);
    
    printf("%c\n" , ch);
    printf("%s\n" , s);
    puts(sen);
    return 0;
}