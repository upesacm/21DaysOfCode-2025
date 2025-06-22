import java.util.*;

public class Day_3_Question_3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Input array like: {1 8 8 8 5 6 2}
        System.out.println("Enter the array in the format: {1 2 3 4 5}");
        String arr = sc.nextLine();
        arr = arr.replace("{", "").replace("}", "").trim();
        String[] parts = arr.split(" ");

        int n = parts.length;
        int[] nums = new int[n];
        for (int i = 0; i < n; i++) {
            nums[i] = Integer.parseInt(parts[i]);
        }

        // Take k
        System.out.println("Enter the value of k (repetitions): ");
        int k = sc.nextInt();

        int sum = 0;

        for (int i = 0; i < n; i++) {
            int current = nums[i];

            // Check if already counted before
            boolean alreadyCounted = false;
            for (int m = 0; m < i; m++) {
                if (nums[m] == current) {
                    alreadyCounted = true;
                    break;
                }
            }

            if (alreadyCounted)
                continue;

            // Count frequency of current number
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (nums[j] == current) {
                    count++;
                }
            }

            // If frequency == k, add to sum
            if (count == k) {
                sum += current;
            }
        }

        System.out.println("Output: " + sum);
    }
}
