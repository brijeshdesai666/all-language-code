#include <stdio.h>

int main()
{
    int a;
        printf("****what is number of multication time****\n");
         scanf("%d" , &a);
    int g;
    printf("*****Enter the number to choice multication table*****\n");
    scanf("%d", &g);
    for (int m = 1; m <= a; m++)
    {
        printf(" %d X %d = %d\n", g, m, m * g);
    }

    return 0;
}