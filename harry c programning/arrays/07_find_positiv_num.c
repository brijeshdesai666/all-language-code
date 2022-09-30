 # include <stdio.h>
    int positivnumber(int *number){
        for(int i=0;i<7;i++){
            // printf("%d is %d\n",i+1,*(number+i) );
        if( *(number+i) > 0){
            
            printf("the %d of %d \n" , i+1,*(number+i));
               
        }
        }
    }
   int main() {
        int number[]={1,-2,3,-4,5,-6,7};
        positivnumber(number);
   return 0;
   }