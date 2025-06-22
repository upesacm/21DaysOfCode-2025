import java.util.Arrays;

public class Question2 {
    public static void rotate(int[] nums, int k) {
        int n = nums.length;
        k = k % n; // To handle k > n
        reverse(nums, 0, n - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, n - 1);
    }

    private static void reverse(int[] nums, int start, int end) {
        while (start < end) {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }

    public static void main(String[] args) {
        int[] nums = {1, 2, 3, 4, 5};
        int k = 2;
        rotate(nums, k);
        System.out.println("Rotated array: " + Arrays.toString(nums)); // Output: [4, 5, 1, 2, 3]
    }
}
