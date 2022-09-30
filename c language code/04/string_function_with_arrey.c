# include <stdio.h>
    void abc(int arr[]){
        int temp;
        for (int i = 0; i < 10; i++)
        {
            printf(" %d" , arr[i]);
        }
        for (int i = 0; i < 10/2; i++)
        {
            temp = arr[i];
            arr[i] = arr[9-i];;
            arr[9-i] = temp;
        }
            printf("\n");
        for (int i = 0; i < 10; i++)
        {
            printf(" %d" , arr[i]);
        }
        
        
    }
  int main() {
       int arr[] = {1,5,9,3,7,2,6,46,92,785};
       abc(arr);
       
  return 0;
  }