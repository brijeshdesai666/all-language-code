# include <stdio.h>

  int main() {
    int i  , b;
    i = 0;
    printf("how to long print number :  ");
    scanf("%d", &b);    
    while(i<b){
        printf("%d.: Sorry \n",i+1);
        i++;
    }
  return 0;
  }
