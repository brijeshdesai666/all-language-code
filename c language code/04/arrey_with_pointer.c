#include <stdio.h>
int fun(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("the value of %d element is %d\n", i + 1, arr[i]);
    }
    arr[0] = 56465; // this is change to arrey because fun(arr) is pass arr adress automaticaly
    return 0;       // function do not return any value and function type is int that try write return 0;
}
void fun2(int *ptr)
{
    for (int i = 0; i < 5; i++)
    {
        printf("the value of %d element is %d\n", i + 1, *(ptr + i));
    }
    *(ptr + 2) = 654646;
}
void fun3(int abc[2][3])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("the value of %d and %d element is %d\n", i + 1, j + 1, abc[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int arr[] = {23, 45, 86, 32, 546};

    printf("the frist element of arrey is %d\n", arr[0]);
    fun(arr); // always arr name is adress of that arrey frist element

    printf("the frist element of arrey is %d\n", arr[0]);
    printf("\n");

    fun2(arr);
    printf("\n");

    fun2(arr);

    int abc[2][3] = {{23, 45, 686},
                     {86, 64, 354}};
    fun3(abc);
    return 0;
}