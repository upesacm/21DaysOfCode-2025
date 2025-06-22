import java.util.Scanner;

public class ReplaceNegativesArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Step 1: Ask for size of array
        System.out.println("How many numbers do you want to enter?");
        int size = sc.nextInt();

        // Step 2: Make an array of that size
        int[] numbers = new int[size];

        // Step 3: Take input for each position in the array
        for (int i = 0; i < size; i++) {
            System.out.println("Enter number " + (i + 1) + ":");
            numbers[i] = sc.nextInt();
        }

        // Step 4: Replace negative numbers with 0
        for (int i = 0; i < size; i++) {
            if (numbers[i] < 0) {
                numbers[i] = 0;
            }
        }

        // Step 5: Print the final array
        System.out.println("Modified array (negatives replaced with 0):");
        for (int i = 0; i < size; i++) {
            System.out.print(numbers[i] + " ");
        }
    }
}
