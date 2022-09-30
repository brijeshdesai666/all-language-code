 # include <stdio.h>
 # include <string.h>
 struct employ{
     int code;
     float salary;
     char name[21];
 };
   int main() {
     struct employ em1;
          em1.code = 103;
          em1.salary = 9000000;
          strcpy(em1.name , "brijesh");
     
     printf(" the code is %d\n", em1.code);
     printf("this employ salary is %.0f\n", em1.salary);
     printf("employ name is %s\n",em1.name);

   return 0;
   }