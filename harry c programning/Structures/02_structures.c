 # include <stdio.h>
 # include <string.h>

 struct employ{
    int code;
    float salary;
    char name[15];
 };

   int main() {
    struct employ e1;
    strcpy(e1.name , "hardik");
    e1.code = 101;
    e1.salary = 56000;

    struct employ e2;
    strcpy(e2.name , "ronak");
    e2.code = 101;
    e2.salary = 68000;
    struct employ e3;
    
    strcpy(e3.name , "harsh");
    e3.code = 1013;
    e3.salary = 65000;
     printf("this employ name is %s\n" , e1.name);
     printf("this employ code is %d\n" , e1.code);
     printf("this employ salary is %.0f\n\n" , e1.salary);

     printf("this employ name is %s\n" , e2.name);
     printf("this employ code is %d\n" , e2.code);
     printf("this employ salary is %.0f\n\n" , e2.salary);

     printf("this employ name is %s\n" , e3.name);
     printf("this employ code is %d\n" , e3.code);
     printf("this employ salary is %.0f\n\n" , e3.salary);
   return 0;
   }