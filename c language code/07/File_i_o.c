# include <stdio.h>

  int main() {
        FILE *ptr = NULL;
        char string[55];

        // ********reading a file
        // ptr = fopen("my.txt","r");
        // fscanf(ptr,"%s",string);
        // printf("%s", string);

        //*************write a file
        // ptr = fopen("my.txt","w");
        // fprintf(ptr,"%s" , "kem che badha ne , sau che ne!!!!");
        
        // append a file
        ptr = fopen("my.txt","a");
        fprintf(ptr,"%s" , "Hello!!!!!!!!!!!!!*****\n");


  return 0;
  }