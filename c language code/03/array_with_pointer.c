# include <stdio.h>

  int main() {
        int arr[]= {56,589,68,55,65,565,65};
        int *ptrar = arr; // do not write '&' only array
        printf("The address of frist element of array is %d \n" , &arr[0]);
        printf("The address of frist element of array is %d \n" , arr);
        printf("The address of second element of array is %d \n" , &arr[1]);
        printf("The address of second element of array is %d \n" , arr + 1);
            // arr--; // this is wrong
            // ptrar--; // this is right 
        printf("\nThe value of frist element of array is %d \n" , *(&arr[0]));
        printf("The value of frist element of array is %d \n" , *(arr));
        printf("The value of second element of array is %d \n" , *(&arr[1]));
        printf("The value of second element of array is %d \n" , *(arr + 1));
  return 0;
  }