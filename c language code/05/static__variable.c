#include <stdio.h>
void fun()
{
      static int a = 2;
      printf("the value of a is %d\n", a);
      a++;
}
void fun2(){
      int b = 1;
      printf("the value of a is %d\n", b);
      b++;
}
int main()
{
      fun();
      fun();
      fun();
      
      printf("\n");

      fun2();
      fun2();
      fun2();
      return 0;
}