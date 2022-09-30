 # include <stdio.h>
 
   int main() {
    int i = 32;
    int *ptr = &i;
    
    printf("the value of ptr is %u\n" , ptr);
    ptr++;
    ptr++;
    ptr = ptr + 1; // is that +4 bytes
    printf("the value of ptr is %u\n" , ptr);
   return 0;
   }
//    intger is 4 bytes or 2 bytes , but max is 4 bytes (int)
//    float is 4 bytes
//    charecter is 1 bytes (char)