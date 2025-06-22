public class MinElement {
    public static int findMinimum(int[] nums) {
        int min = nums[0];
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] < min) {
                min = nums[i];
            }
        }
        return min;
    }

    public static void main(String[] args) {
        int[] nums = {4, 2, 7, 1, 9};
        System.out.println("Minimum element: " + findMinimum(nums)); // Output: 1
    }
}
