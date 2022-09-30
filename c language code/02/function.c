# include <stdio.h>
    
    int sum(int a, int b); // function declaration

  int main() {
    
    int a = 10, c;
    int b = 35;
    
    c = sum(a,b); // function call
    
    printf("the sum is %d\n" , c);

  return 0;
  }
    int sum(int a, int b){ // function definition
        return a + b;
    }