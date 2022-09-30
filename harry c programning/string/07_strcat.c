#include<stdio.h>
#include <string.h>

int main(){
    char st1[46] = "Hello";
    char st2[112] = "Harry";
    strcat(st1, st2);
    printf("Now the st1 is %s\n", st1);
    return 0;
}