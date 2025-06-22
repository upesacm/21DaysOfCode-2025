
import java.util.Arrays;
import java.util.Scanner; // Needed for Arrays.equals()

class Question3 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        // Enter array length
        int n = sc.nextInt();
        int num1[] = new int[n];

        // Enter elements of array1
        for (int i = 0; i < num1.length; i++) {
            num1[i] = sc.nextInt();
        }

        int m = sc.nextInt();
        int num2[] = new int[m];

        // Enter elements of array2
        for (int j = 0; j < num2.length; j++) {
            num2[j] = sc.nextInt();
        }

        // Compare array contents
        if (Arrays.equals(num1, num2)) {
            System.out.println("True");
        } else {
            Arrays.sort(num1);
            Arrays.sort(num2);
            if (Arrays.equals(num1, num2)) {
                System.out.println("True");
            } else {
                System.out.println("False");
            }

        }

        sc.close();
    }
}
