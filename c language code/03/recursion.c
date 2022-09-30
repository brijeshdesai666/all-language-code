
// sum of 1 to __ number 
#include <stdio.h>
int sum(int a)
{
    int b;
    if (a == 1)
    {
        return 1;
    }
    else
    {
        b = (a + sum(a - 1));
        return b;
    }
}
int main()
{
    int c;
    printf("Enter a  number : ");
    scanf("%d", &c);

    printf("1 to 10 number is is %d\n", sum(c));

    return 0;
}