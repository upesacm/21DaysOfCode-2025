import java.util.Scanner;

public class ArraysEqualCurly {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        // Input first array
        System.out.println("Enter first array in format {1 2 3 4}:");
        String input1 = in.nextLine();
        input1 = input1.replace("{", "").replace("}", "").trim();
        String[] parts1 = input1.split(" ");
        int n1 = parts1.length;
        int[] a = new int[n1];
        for (int i = 0; i < n1; i++) {
            a[i] = Integer.parseInt(parts1[i]);
        }

        // Input second array
        System.out.println("Enter second array in format {1 2 3 4}:");
        String input2 = in.nextLine();
        input2 = input2.replace("{", "").replace("}", "").trim();
        String[] parts2 = input2.split(" ");
        int n2 = parts2.length;
        int[] b = new int[n2];
        for (int i = 0; i < n2; i++) {
            b[i] = Integer.parseInt(parts2[i]);
        }

        // Check if sizes are same
        boolean same = true;
        if (n1 != n2) {
            same = false;
        } else {
            // Check frequencies of elements from a in b
            for (int i = 0; i < n1; i++) {
                int count1 = 0, count2 = 0;
                for (int j = 0; j < n1; j++) {
                    if (a[i] == a[j]) count1++;
                }
                for (int j = 0; j < n2; j++) {
                    if (a[i] == b[j]) count2++;
                }
                if (count1 != count2) {
                    same = false;
                    break;
                }
            }

            // Also check frequencies of elements from b in a
            for (int i = 0; i < n2 && same; i++) {
                int count1 = 0, count2 = 0;
                for (int j = 0; j < n2; j++) {
                    if (b[i] == b[j]) count2++;
                }
                for (int j = 0; j < n1; j++) {
                    if (b[i] == a[j]) count1++;
                }
                if (count1 != count2) {
                    same = false;
                    break;
                }
            }
        }

        // Output
        System.out.println("Arrays are equal: " + same);
    }
}
