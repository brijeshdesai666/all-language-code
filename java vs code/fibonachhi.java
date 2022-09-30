public class fibonachhi {

    public static int fun2(int n) {
        if(n == 2 || n == 1){
            return n-1;
        }else{
            return fun2(n - 1) + fun2(n - 2);
        }
    }
    public static int fun3(int a) {
        int c = 0;
        int d = 1;
        for(int i = 0; i < a-1; i++){
            d = c + d;
            c = d - c;
        }
        return c;
    }
    public static void main(String[] args) {
    System.out.println(fun2(41)); 
    System.out.println(fun3(41)); 
    }
}
