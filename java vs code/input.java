import java.util.*;

public class input {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter your name");
        String name = sc.nextLine();
        System.out.println(name);


        System.out.println("Enter your age");
        float age = sc.nextFloat();
        System.out.println("your age is " + age);
        sc.close();
    }
}
