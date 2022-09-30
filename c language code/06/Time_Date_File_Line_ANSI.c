# include <stdio.h>

  int main() {
        printf("This File Name is %s\n", __FILE__);
        printf("Today's Date is %s\n",__DATE__);
        printf("The Time Now is %s\n" , __TIME__);
        printf("ANSI : %d\n" , __STDC__);
  return 0;
  }