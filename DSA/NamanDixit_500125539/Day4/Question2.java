import java.util.Arrays;
import java.util.Scanner;

class Question2 {

    // Rotates the array to the right by k steps
    public static int[] rotate(int nums[], int k) {
        int n = nums.length;
        k = k % n; // handle if k > n
        reverse(nums, 0, n - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, n - 1);
        return nums;
    }

    // Helper method to reverse part of the array
    public static void reverse(int nums[], int start, int end) {
        while (start < end) {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }

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

        // Enter value of k
        System.out.print("Enter value of k: ");
        int k = sc.nextInt();

        // Perform rotation and print result
        System.out.println("Rotated array:");
        System.out.println(Arrays.toString(rotate(nums, k)));

        sc.close(); // Close the scanner
    }
}
