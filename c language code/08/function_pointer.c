# include <stdio.h>
    int sum(int a, int b){
        return a + b;
    }
  int main() {
        printf("the sum of 4 and 7 is %d\n",sum(4,7));
        int (*fsum)(int , int);
        fsum = &sum;
        int d = (*fsum)(3,9);
        printf("the sum of 3 and 9 is %d\n",d);
  return 0;
  }