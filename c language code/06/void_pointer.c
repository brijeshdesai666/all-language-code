# include <stdio.h>
# include<strings.h>

  int main() {
    int a = 9;
    float b = 355.26;
    void *ptr;
    ptr = &a;
    printf("this value of a is %d\n", *((int *)ptr));        
    ptr = &b;
    printf("this value of b is %.2f\n", *((float *)ptr));        

  return 0;
  }