import java.util.Arrays;
import java.util.Scanner;

class Question1 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        // Enter array length
        System.out.print("Enter array length: ");
        int n = sc.nextInt();
        int nums[] = new int[n];

        // Enter array elements
        System.out.println("Enter array elements:");
        for (int i = 0; i < nums.length; i++) {
            nums[i] = sc.nextInt();
        }

        // Sort the array
        Arrays.sort(nums);

        int min=nums[0];
        System.out.println(min);

        sc.close(); // Close the scanner
    }
}
