 # include <stdio.h>
 
   int main() {
                int g;
                printf("*****Enter the number to choice multication table*****\n");
            scanf("%d", &g);
        for(int m = 1; m <= 10 ; m++) {
            printf(" %d X %d = %d\n", g,m ,m*g);
        }
   return 0;
   }