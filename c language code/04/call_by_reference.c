# include <stdio.h>
    void swap(int *x , int *y){
        int tamp;
        tamp = *x;
        *x = *y;
        // *y = tamp;
        return;
    }
    void changevalue(int *d){
        *d = 468;  // dp not pass adress of c , can not change the value of c
    }
  int main() {
        int a = 34 , b = 59 , c = 56;
        printf("%d and %d\n" , a ,b );
        swap(&a ,&b);
        printf("%d and %d\n" , a , b);
        printf("the value of c is now %d\n" , c);
        changevalue(&c);
        printf("now the value of c is %d\n" , c);
  return 0;
  }