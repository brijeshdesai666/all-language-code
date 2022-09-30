# include <stdio.h>

  int main() {
            int m1,n1,n2;
    
           
    printf("Enter rows in metrix 1\n");
    scanf("%d",&m1);
    printf("Enter coloam in metrix 1\n");
    scanf("%d",&n1);
    printf("rows in metrix 2 is \n%d\n",n1);
    printf("Enter coloam in metrix 2\n");
    scanf("%d",&n2);
        if(n1 == n1){
            int metrix1[m1][n1],metrix2[n1][n2],result[m1][n2];
            int sum = 0;


        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                printf("Enter at %d  %d index element metrix 1\n",i,j);  
                scanf("%d",&metrix1[i][j]);
            }
        }
    printf("Enter metrix 2 element\n");
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                printf("Enter at %d  %d index element of metrix 2\n",i,j);
                scanf("%d",&metrix2[i][j]);
            }

        }

    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            for (int a = 0; a < n1; a++)
            {
                sum += metrix1[i][a] * metrix2[a][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
        
    }
    

    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("%d \t", result[i][j]);
        }
        printf("\n");
    }
}
else
{
    printf("this metrix is not possible!!!");
}

        
  return 0;
  }