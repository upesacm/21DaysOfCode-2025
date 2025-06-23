import java.util.*;

public class Question3 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter String: ");
        String str = sc.nextLine();
        String s = "";
        char z ; // initializing with a default character

        for (int i = str.length() - 1; i >= 0; i--) {
            z = str.charAt(i);
            s = s + z;
        }

        System.out.println("Reversed String: " + s);
        sc.close();
    }
}
