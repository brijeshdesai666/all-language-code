#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int x;
    x = *b + *a;  
   unsigned int y;
    y = *a - *b;
    *a = x;
//  y = y + (*b - 2) ;
    *b = y;
//    printf("%d" , *b);  
}

int main() {
    int a, b;
    
    scanf("%d", &a);
    getchar();

    scanf("%d", &b);
    getchar();

    int *pa = &a;
    
    int *pb = &b;
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}