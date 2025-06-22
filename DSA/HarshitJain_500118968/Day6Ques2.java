public class checkstrictlyincreasing {
    public static boolean isStrictlyIncreasing(int[] nums) {
        if (nums.length <= 1) {
            return true;
        }
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] <= nums[i - 1]) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        int[] test1 = {1, 2, 3, 4};
        System.out.println("Input: [1, 2, 3, 4], Output: " + isStrictlyIncreasing(test1));

        int[] test2 = {1, 2, 2, 3};
        System.out.println("Input: [1, 2, 2, 3], Output: " + isStrictlyIncreasing(test2));

        int[] test3 = {5, 4, 3};
        System.out.println("Input: [5, 4, 3], Output: " + isStrictlyIncreasing(test3));
    }
}
