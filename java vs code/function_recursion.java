// print number 1 to 10

public class function_recursion {
    public static void fun1(int a){
        if(a == 11){
            return;
        }
        System.out.println(a);
        fun1(a + 1);
    }
    public static void main(String args[]){
        fun1(1);
    }
}
