 # include <stdio.h>
    void arrey(int *ptr){
      int a= 4 ;
        for(int i = 0; i<a; i++){
            printf("the eliment %d is %d\n" , i+1 ,*(ptr+i));
        }
        }
   int main() {
     int number[] = {12,32,52,45}; 
     arrey(number);
   return 0;
   }