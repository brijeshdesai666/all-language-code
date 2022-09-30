 # include <stdio.h>
    int fectorial(int y);

   int main() {
    int b = 5;
        // scanf(%d , &b) ;   
    
        printf("this is %d is %d\n ", b , fectorial(b));
   return 0;
   }

int fectorial(int y){
    if( y == 1 || y == 0){
        return 1;
    }else{
        return y * fectorial(y-1);
    }
}