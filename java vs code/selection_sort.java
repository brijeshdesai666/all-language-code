public class selection_sort {
    public static void printarr(int arr[]){
        for(int i = 0; i < arr.length; i++){
            System.out.print(arr[i] + " ");
        }
    }
    public static void main(String[] args) {

        int arr[] ={5, 7, 3, 2, 1, 9};

        for(int i = 0; i < arr.length - 1; i++){
        int small = i;
        for(int j = i + 1; j < arr.length; j++){
            if(arr[small] > arr[j]){
                small = j;
            }
        }
            int temp = arr[small];
            arr[small] = arr[i];
            arr[i] = temp;
            }
            
        printarr(arr);

    }
}
