# include <stdio.h>

int main() {
    int a = 4;
    float b = 54/5;
    float c = (float)54/5; // one float devide by intger that result is in float
        printf("the value of a is %.2f\n" , (float) a);
        printf("the value of b is %.2f\n" , b );  // this result is wrong because intger devide by intger that value is intger not float
        printf("the value of c is %.2f", c);
return 0;
}