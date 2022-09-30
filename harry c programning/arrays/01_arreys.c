 # include <stdio.h>
 
   int main() {
    int marks[10];
    int i;
    for(i=0;i<10;i++){
        printf("Enter the %d student marks : " ,i+1 );
        scanf("%d" , &marks[i]);
       
    }
     printf("\n\n");
    for(i=0;i<10;i++){
    printf("your %d student marks is : %d \n" , i+1 , marks[i]);
    }
   return 0;
   }