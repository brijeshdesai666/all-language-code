#include <stdio.h>

int main()
{
  int subject = 2;
  int student = 3;
  int marks[5][6];
  for(int i = 0; i < subject; i++){
    printf("\n");
    for(int j = 0; j< student; j++){
      printf("Enter the %dth student marks in %d subject : " ,i+1, j+1 );
      scanf("%d" , &marks[i][j]);
    
    }
  }
    for(int i = 0; i < subject; i++){ printf("\n");
    for(int j = 0; j< student; j++){
  printf("your %dth student %d subject marks is : %d\n" , i+1,j+1,marks[i][j]);
    }
    }
    return 0;
    
}