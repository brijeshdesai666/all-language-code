#include <stdio.h>

int main()
{
    int i = 0;
    int n;
    printf("Enter your number\n");
    scanf(" %d", &n);
    do
    {
        printf("the value of the number is %d\n", i + 1);
        i++;
    } while (i < n);
    return 0;
}