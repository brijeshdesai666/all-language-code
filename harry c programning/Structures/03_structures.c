#include <stdio.h>
#include <string.h>

struct employ
{
    int code;
    float salary;
    char name[15]; 
};
int main()
{
struct employ e1, e2, e3;
printf("Enter the e1 employ name\n");
scanf("%s" , e1.name);
printf("Enter the e1 employ code\n");
scanf("%d" , &e1.code);
printf("Enter the e1 employ salary\n");
scanf("%.0f" , &e1.salary);
printf("\n\n");
fflush(stdin);

printf("Enter the e2 employ name\n");
scanf("%s" , e2.name);
printf("Enter the e2 employ code\n");
scanf("%d" , &e2.code);
printf("Enter the e2 employ salary\n");
scanf("%.0f" , &e2.salary);
printf("\n\n");
fflush(stdin);

printf("Enter the e3 employ name\n");
scanf("%s" , e3.name);
printf("Enter the e3 employ code\n");
scanf("%d" , &e3.code);
printf("Enter the e3 employ salary\n");
scanf("%.0f" , &e3.salary);
    return 0;
}