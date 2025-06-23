
import java.util.*;

class Question2 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter String: ");
        String str = sc.nextLine();

        System.out.println("Enter specific character: ");
        char z = sc.nextLine().charAt(0); // get the first character of the input

        int count = 0;

        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) == z) {
                count++;
            }
        }
        System.out.println("Count: " + count);
        sc.close();
    }
}
