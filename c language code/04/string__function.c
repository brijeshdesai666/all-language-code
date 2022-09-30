# include <stdio.h>
# include <string.h>

  int main() {
        char s1[] = "brijesh";
        char s2[] = "ronak";
        char s3[15];
        
        // puts(strcat(s1,s2));
        printf("The strcmp s1 ,s2 is returnd %d\n" , strcmp(s1 ,s2));
        printf("the lenth of string s1 is %d\n", strlen(s1));
        printf("the lenth of string s2 is %d\n", strlen(s2));
        printf("The reverce string s2 is : ");
        puts(strrev(s2));

        strcpy(s3,strcat(s1,s2));
        printf("copyid : ");
        puts(s3);

    return 0;
  }