# include <stdio.h>

  int main() {
    int n;
    printf("Enter a number\n");
    scanf("%d" , &n);

    int size = n * 2 - 1;
    int start = 0;
    int end = size - 1; 
    int a[size][size];

    while (n != 0)
    {
    for (int i = start; i <= end; i++)
    {
        for (int j = start; j <= end; j++)
        {   
            if (i == start || j == start || i == end || j == end)
            {
                a[i][j] = n;
            }
            
            
        }
        
    }
        start++;
        end--;
        n--;

} 
        for (int i = 0; i < size; i++)
        {
        for (int j = 0; j < size; j++)
        {
            printf("%d", a[i][j]);
        }
            printf("\n");
            
        }
        
  return 0;
  }