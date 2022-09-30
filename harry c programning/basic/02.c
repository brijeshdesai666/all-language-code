#include <stdio.h>

int main()
{
  int a;
   scanf("%d" , &a);
  a = 0;

  while (a <= 20)
  {
    if (a >= 10)
    {
      printf(" number %d\n", a);
    }
    a++;
  }

  return 0;
}