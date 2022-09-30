
// this program is not allow to float point output
// 9/8 = 1   this is wrong output

 # include <stdio.h>
  float sctofe (int a); 
   int main() {
    int b;
   
    printf("Enter celslus\n");
     scanf("%d" , &b);
    printf("celslus %d that fahrenheit %f\n",b , sctofe(b));
   return 0;
   }

float sctofe (int a){
    int result;
    result =(float)( a * 9/8)+32 ;
    return result;
}