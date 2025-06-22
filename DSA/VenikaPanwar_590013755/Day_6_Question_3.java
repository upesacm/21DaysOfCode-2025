import java.util.*;

public class Day_6_Question_3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Take input of an array in the format: {1 2 3 4}
        System.out.println("Enter an array in the format: {1 2 3 4}");
        String arr = sc.nextLine();

        // Remove { and }
        arr = arr.replace("{", "").replace("}", "");

        // Trim spaces and split over " "
        String[] parts = arr.trim().split(" ");

        // Convert string array to int array
        int[] nums = new int[parts.length];
        for (int i = 0; i < parts.length; i++) {
            nums[i] = Integer.parseInt(parts[i]);
        }

        // Calculating longest consecutive increasing subarray
        int currlen = 1;
        int maxlen = 1;

        for (int i = 1; i < nums.length; i++) {
            if (nums[i] == nums[i - 1] + 1) {
                currlen++;
                if (currlen > maxlen) {
                    maxlen = currlen;
                }
            } else {
                currlen = 1;
            }
        }

        // Output the result
        System.out.println("Length of longest consecutive increasing subarray: " + maxlen);
    }
}
