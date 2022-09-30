
#include <stdio.h>
void star(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void revercestar(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{   
    int choice;
    printf("print star petten to choice number 0 :\n");
    printf("print reverce star petten to choice number = 1 :\n");
    printf("plese Enter a choice number\n");
    scanf("%d" , &choice);
    
    int a;

    
    switch (choice)
    {
    case 0:
        printf("how line you want?\n");
        scanf("%d", &a);
        star(a);
        break;
    case 1:
        printf("how line you want?\n");
        scanf("%d", &a);
    revercestar(a);
        break;
    
    default:
        printf("you choice invalid number\n");
        break;
    }
    
    return 0;
}