# include <stdio.h>

  int main() {
        FILE *ptr = NULL;
        ptr = fopen("my.txt", "r+"); //r+ mode like this --> file1 = "loshhshtaZzrh" --after runing --> o brijeshZzrh  
                                     // a+ mode and w+ mode is same working at a mode and w mode but a+ or r+ mode to use open file that also file content readeble using fgets and fgetc
        // char c = fgetc(ptr);        // fgetc for 1 charecter
        // printf("%c",c);

        // c = fgetc(ptr);        // fgetc for 1 charecter
        // printf("%c",c);

        /////////////////


        // char str[53];
        // fgets(str, 9 ,ptr);     //fgets 
        // printf("%s",str);
        // fclose(ptr);

        ///////////////////

        fputc('A',ptr);
        fputs(" Brijesh",ptr);;

  return 0;
  }