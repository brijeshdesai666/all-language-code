# include <stdio.h>
    void multi(int a){
        for(int i = 0;i < 10 ;i++){
            printf("%d X %d = %d\n" , a , i+1 , a*(i+1));
        }
    }
  int main() {
    int x;
    printf("Enter the number you want multiplication table of: \n");
    scanf("%d" ,&x);
    printf("this is %dth multiplication table\n", x);
    multi(x);

  return 0;
  }