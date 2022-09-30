#include <stdio.h>
#include <string.h>
int main()
{
  char st1[34];
  char st2[34];
  int i = 0;
  char c;
  printf("Enter your name :  "); // scan to %s
  scanf("%s", st1);
  // printf("the your name is %s\n", st1);

  printf("Enter the charect one by one \n");
  while (c != '\n')
  {
    fflush(stdin);
    scanf("%c", &c);
    st2[i] = c;
    i++;
  }
  st2[i - 1] = '\0';

  printf("the i is %s\n", st2);
  printf("the i is %s\n", st1);
  // printf("The value of st1 is %s\n", st1);
  //   printf("The value of st2 is %s\n", st2);
  return 0;
}