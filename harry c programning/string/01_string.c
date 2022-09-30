# include <stdio.h>

  int main() {
    char names[] = {'b','r','i','j','e','s','h','\0'};
    char *name = names;
    while (*name !='\0'){
        printf("%c", *name);
        name++;
    }printf("\n");
  return 0;
  }