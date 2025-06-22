public class FindMinimumElement {
    public static int findMin(int[] nums) {
        int min = nums[0];
        for (int num : nums) {
            if (num < min) {
                min = num;
            }
        }
        return min;
    }

    public static void main(String[] args) {
        int[] nums1 = {4, 2, 7, 1, 9};
        System.out.println("Output 1: " + findMin(nums1)); // 1

        int[] nums2 = {5, 5, 5};
        System.out.println("Output 2: " + findMin(nums2)); // 5

        int[] nums3 = {-3, -1, -5, -2};
        System.out.println("Output 3: " + findMin(nums3)); // -5
    }
}