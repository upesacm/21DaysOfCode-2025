import java.util.*;
public class question1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a string: ");
        String s = sc.nextLine();

        System.out.println("Original: "+s);
        System.out.println("UpperCase: "+s.toUpperCase());
        System.out.println("Lowercase: "+s.toLowerCase());

        sc.close();
    }
}
