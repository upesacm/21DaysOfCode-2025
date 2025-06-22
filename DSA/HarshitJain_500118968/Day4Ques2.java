import java.util.Arrays;

public class RotateArrayByK {
    public static int[] rotate(int[] nums, int k) {
        int n = nums.length;
        k = k % n; // Handle k > n
        int[] rotated = new int[n];
        for (int i = 0; i < n; i++) {
            rotated[(i + k) % n] = nums[i];
        }
        return rotated;
    }

    public static void main(String[] args) {
        int[] nums1 = {1, 2, 3, 4, 5};
        System.out.println("Output 1: " + Arrays.toString(rotate(nums1, 2))); // [4, 5, 1, 2, 3]

        int[] nums2 = {10, 20, 30};
        System.out.println("Output 2: " + Arrays.toString(rotate(nums2, 4))); // [30, 10, 20]

        int[] nums3 = {1, 2};
        System.out.println("Output 3: " + Arrays.toString(rotate(nums3, 1))); // [2, 1]
    }
}