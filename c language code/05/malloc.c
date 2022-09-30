# include <stdio.h>
# include <stdlib.h>

  int main() {
    int a;
    printf("what size of arrey you want\n");
    scanf("%d" , &a);
        int *ptr;
        // ptr = (int *) malloc(4 * sizeof(int));
        ptr = (int *) calloc(a , sizeof(int));
        for (int i = 0; i < a; i++)
        {
            printf("Enter the %d element : \n" , i);
            scanf("%d" , &ptr[i]);
        }
        // for (int i = 0; i < a; i++)
        for (int i = 0; i < a+1; i++)
        {
            printf("the %d element is %d\n",i,ptr[i]);
        }
        
        ptr = (int *) realloc(ptr , a*sizeof(int));
        for (int i = 0; i < a; i++)
        {
            printf("Enter the %d element : \n" , i);
            scanf("%d" , &ptr[i]);
        }
        for (int i = 0; i < a; i++)
        {
            printf("new %d element is %d\n",i,ptr[i]);
        }
        
        free(ptr);
        
        for (int i = 0; i < a; i++)
        {
            printf("new %d element is %d\n",i,ptr[i]);
        }
  return 0;
  }