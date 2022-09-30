# include <stdio.h>
    void string(char name[]){
        int i = 0;
        while(name[i] != '\0'){
            printf("%c" , name[i]);
            i++;
        }
    }
  int main() {
        char name[8] = {'B','R','I','J','E','S','H','\0'};
        string(name);
        printf("\n");
        // char name2[] = "brijesh";

        char name2[85];
        gets(name2);    // string inputs from user
        
        string(name2);

        printf("\n");
        printf("%s\n",name2);
        puts(name2);
  return 0;
  }