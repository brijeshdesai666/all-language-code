# include <stdio.h>
void mathse(int n){
    if(n % 3 == 0 && n % 5 == 0){
        printf("FizzBuzz\n");
    }else if(n % 3 == 0){
        printf("Fizz\n");
    }else if (n % 5 == 0){
        printf("Buzz\n");
    }else{
        printf("this number is not multiply\n");
    }
}
  int main() {
    printf("Enter a number\n");
    int x;
    scanf("%d" , &x);
    // printf("the result is %d", x % 3);
    mathse(x);
  return 0;
  }