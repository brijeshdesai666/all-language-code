#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL));
    int a = rand() % 30;
    printf("the randam is %d\n", a);

    return 0;
}