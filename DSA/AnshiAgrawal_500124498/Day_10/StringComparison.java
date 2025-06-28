package Day_10;

import java.util.Scanner;

// Compare two strings for exact equality, case-insensitive equality, and lexicographical order.
public class StringComparison {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 1st Word:");
        String str1 = sc.next();
        System.out.println("Enter 2st Word:");
        String str2 = sc.next();

        //case-sensitive
        if (str1.equals(str2))
            System.out.println("Case Sensitive: Equal");
        else
            System.out.println("Case Sensitive: Uneqaul");

        //case-insensitive
        if (str1.equalsIgnoreCase(str2)) {
            System.out.println("Case Insensitive: Equal");
        } else
            System.out.println("Case Insensitive: Unequal");

        //lexicographical order
        int val = str1.compareTo(str2);
        if (val == 0)
            System.out.println("lexicographical: Equal");
        else if (val < 0) //-ve
            System.out.println("lexicographical:" + str1 + " comes before " + str2);
        else  //+ve
            System.out.println("lexicographical:" + str2 + " comes before " + str1);

    }
}
