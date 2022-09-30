# include <stdio.h>

  int main() {
        int a = 90;
        int* ptr = &a;
        int *ptr2 = NULL;
        printf("1. %d\n" , a);
        printf("2.   %x\n" , &a);
        printf("3. %p\n" , ptr);
        printf("4. %d\n" , *ptr);
        printf("10. %d\n" , *ptr + 1);

        printf("6. %x\n" , &ptr);
        printf("7. %p\n" , ptr2);
        printf("8. %d\n" , ptr);
        printf("9. %d\n" , ptr + 1);
        // printf formate specifire Google
  return 0;
  }
