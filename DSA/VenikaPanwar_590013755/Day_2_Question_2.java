import java.util.Scanner;

public class MissingAndRepeated {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Step 1: Ask for array size
        System.out.println("Enter the size of the array:");
        int n = sc.nextInt();

        // Step 2: Create array and take input from user
        int[] arr = new int[n];
        System.out.println("Enter " + n + " numbers (from 1 to " + n + "):");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        // Step 3: Make a count array to track how many times each number appears
        int[] count = new int[n + 1]; // Index 0 is unused

        for (int i = 0; i < n; i++) {
            count[arr[i]]++;  // Increase count of the number seen
        }

        // Step 4: Check for missing and repeated
        int missing = -1;
        int repeated = -1;

        for (int i = 1; i <= n; i++) {
            if (count[i] == 0) {
                missing = i;
            }
            if (count[i] == 2) {
                repeated = i;
            }
        }

        // Step 5: Show the result
        System.out.println("Missing: " + missing + ", Twice: " + repeated);
    }
}
