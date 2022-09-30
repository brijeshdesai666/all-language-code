#include <stdio.h>

int main()
{
     int a = 63;
     int *j = &a;
      int **b = &j;
     printf("value  %u\n", &a);  // addrese of
     printf("add  %d\n", *(&j)); // addresse of j
     printf("value %d\n" , *(&b));
     return 0;
}