
public class sum_with_recursion {
    public static int sum(int a) {
        if(a == 1){
            return 1;
        }else{
            int b;
            b = (a + sum(a - 1));
            return b; 
        }

    }
    public static void main(String[] args) {
            int a;
            a = sum(5);
            System.out.println(a);
    }
}
