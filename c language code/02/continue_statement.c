# include <stdio.h>

  int main() {
    int age , i;
    i = 0;
    while(i < 5){
    printf("Enter your age: \n");
        scanf("%d",&age);
    
        if (age<5 || age>190 ){
            continue;
        }
        printf("******WoW!!! , i hope, your name is very nice!!...*******\n");
        i++;
    }
  return 0;
  }