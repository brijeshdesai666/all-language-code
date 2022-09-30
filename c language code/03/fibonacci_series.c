# include <stdio.h>
    int fib(int a){
        if(a == 1 || a == 2){
            return a-1;
        }
        else{
            return fib(a-1) + fib(a-2);
        }
    }
    int fib_i(int n){
        int a = 0;
        int b = 1;

        for (int i = 0; i < n-1; i++){

            b = a+b;
            a = b-a;
        }
        return a;
    }
  int main() {
    int c,d;
    c = fib(15);
    d = fib_i(15);
    printf("fib  =  %d\n" , c);
    printf("fib_i = %d\n" , d);
  return 0;
  }