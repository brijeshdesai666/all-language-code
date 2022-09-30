public class star_petten {
    public static void main(String[] args) {
        int n = 4;
        int m = 5;
        for(int i = 1; i <= n; i++){
            for(int j = i; j <= m; j++){
                if(i == 1 || j == 1 || i == n ||j == m){
                    System.out.print("*");
                }else{
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}
