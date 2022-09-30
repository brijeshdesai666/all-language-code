 # include <stdio.h>
 #include <string.h> // joej
   int main() {
    char *copy = "copy";
    char copy2[6];
    strcpy(copy2,copy);
    printf("this is %s\n", copy2);
   return 0;
   }