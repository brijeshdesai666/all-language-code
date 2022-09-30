#include <stdio.h>

int main()
{
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("%d.: Hello\n", i + 1);
    }

    // this is True syntxt
    printf("\n");
    int j = 0;
    for (; j < 5; j++)
    {
        printf("%d.: world\n", j + 1);
    }

    printf("\n");
    // this is True syntxt
    int a, c;
    for (a = 0, c = 0; a < 5, c < 5; a++, c++)
    {
        printf("%d.: Hello %d\n", a + 1, c);
    }
    return 0;
}