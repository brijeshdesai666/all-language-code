# include <stdio.h>

int main() {
    int i = 0, num;
    printf("how to long print number :  ");
    scanf("%d", &num);
    do{
        printf("%d. --> Hello world,!!!\n", i + 1);
        i = i + 1;
    }while(i < num);
return 0;
}