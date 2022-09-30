 # include <stdio.h>
 
   int main() {
        int a,b;
            a = 92;
            b = 8;
        float c = 6.5;
        printf("a + b = %d\n",a+b);
        printf("a - b = %f\n",a-c);
        printf("a / b = %d\n",a/b);
        printf("a '%' b = %d\n",a%b);
        printf("a * b = %.2f\n",a*c);
   return 0;
   }
   // arithmetic operators ["+", "-", "*", "/", "%"]
   // logical operators ["&&"AND , "||"OR , "!="not]
   // bitwise operayors ["&" --> 0 0 0,   0 1 0,   1 0 0,   1 1 1]
   // bitwise operayors ["|" --> 0 0 0,   0 1 1,   1 0 1,   1 1 1]
   // bitwise operayors ["^" --> 0 0 0,   0 1 1,   1 0 1,   1 1 0] // one true value and  one false value to return true
   // assignment operators ["+=" , "-=", "*=", "/="]
   // "-" --> subtract operator
   // "+" --> add operator
   // "*" --> multiply operator
   // "/" --> devide operator
   // "=" --> assignment operator

   //           ********other operators*******  
   //     "sizeof()" --> returns the siize of operator
   //     "&" --> return the address of variable
   //     "/*" --> pointer to a variable
   //     "?:0" --> conditional Expression