# include <stdio.h>

  int main() {
        int n;
        n = 79845;
        char b[] = (char[])n;
        printf("%c",b[1]);
  return 0;
  }