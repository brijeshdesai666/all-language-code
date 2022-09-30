 # include <stdio.h>
 # include <string.h>
 typedef struct employ {
    int code;
    float  salary;
    char  name[32];
 }emp;
   int main() {
    emp e1; // this emp using to struct employ replace
//  struct employ e1;
//  struct employ *ptr;
    emp *ptr; // this emp using to struct employ replace
   ptr = &e1;
   e1.code = 149;      // this way is right to enter the code
   (*ptr).code = 125;  // this way is right to enter the code 
   ptr->code = 123;    // this way is right to enter the code
 ptr-> salary = 124;   // this way is right to enter the code 
 (*ptr).salary = 128;  // this way is right to enter the code
    strcpy( ptr->name  ,"right");  //this two way is always right
    strcpy((*ptr).name  ,"right");  // this two way is always right
    printf("this employ code is %d\n" , e1.code);
    printf("this employ salary is %.0f\n" , e1.salary);
    printf("this employ name is %s\n" , e1.name);
   return 0;
   }