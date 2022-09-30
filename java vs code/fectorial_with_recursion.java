public class fectorial_with_recursion {
    public static int fectorial(int a) {
    if(a == 0 || a == 1){
        return 1;
    }else{
        return a * fectorial(a - 1);
    }
    }
    public static void main(String[] args) {
    System.out.println(fectorial(5));
    }
}
