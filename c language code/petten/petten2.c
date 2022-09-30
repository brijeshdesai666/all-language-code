#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter rows\n");
    scanf("%d", &x);
    printf("Enter coloam\n");
    scanf("%d", &y);
    // x = 4;
    // y = 5;
    
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            if(i == 1 || j == 1 || i == x || j == y){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}