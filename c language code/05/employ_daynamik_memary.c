# include <stdio.h>
# include <stdlib.h>

  int main() {
        char *ptr;
        int n,x;
        printf("how to employ Enter details you want\n");
        scanf("%d",&x);

        for (int i = 0; i < x; i++)
        {
        printf("Enter number of %d's employ id's\n ", i+1);
        scanf("%d", &n);
        getchar();
        ptr = (char *) calloc (n,sizeof(char));
        printf("Enter %d's employ's id\n",i+1);
        gets(ptr);
        printf("%d's employs id is %s\n",i+1,ptr);
        }
        
       
        
      return 0;
  }