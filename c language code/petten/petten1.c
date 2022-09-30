#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter rows\n");
    scanf("%d", &x);
    printf("Enter coloam\n");
    scanf("%d", &y);

    for (int i = 1; i <= x; i++)
    {
        for (int i = 1; i <= y; i++)
        {
            printf("*  ");
        }
        printf("\n");
    }

    return 0;
}