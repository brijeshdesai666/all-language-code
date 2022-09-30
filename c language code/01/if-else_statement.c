#include <stdio.h>

int main()
{
    int num;
    printf("you pass it maths and scince combo to choice it --> 1\n");
    printf("you pass it only scince to choice it --> 2\n");
    printf("you pass it only maths to choice it --> 3\n");
    printf(" what is exam, you can pass it! plese Enterd your exam choice\n");
    scanf("%d", &num);
if (num <=3 && num >=1)     
{
    printf("your number is %d\n",num);


    if (num == 1)
    {
        printf("*******congrts*******\n");
        printf("you pass it maths and science exam that your reward is 45 rupess!!\n");
    }
    else if (num == 2)
        
    {
        printf("*******congrts*******\n");
        printf("you pass it only maths exam that your reward is 15 rupess!!\n ");
    }
    else if (num == 3)
    {
        printf("*******congrts*******\n");
        printf("you pass it only science exam that your reward is 15 rupess!!\n");
    }
}else{
    printf("plase choice to number between 1 to 3\n");
}
    return 0;
}