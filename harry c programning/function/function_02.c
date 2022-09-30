 # include <stdio.h>
    float devide(float a , float b);
   int main() {
    float d;
        d = devide(23.6 , 45.6);     
            printf("the devide is %f\n" , d);   
   return 0;
   }
float devide(float a, float b){
    float d;
    d = a / b;
    return d;
}
