# include <stdio.h>

  int main() {
        int n;
        int temp = 0;
        printf("Enter a number to find even or not\n");
        scanf("%d", &n);
        for (int i = 2; i <= (n/2); i++)
        {
            if(n % i == 0){
                temp++;
                break;
        }
        }
        if(temp == 0 && n != 1){
            printf("This number is prime number\n");
        }else{
            printf("This nukmber is not prime\n");
        }
        
  return 0;
  }