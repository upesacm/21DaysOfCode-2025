public class RemoveAllOccurrences {
    public static int removeElement(int[] nums, int val) {
        int i = 0;
        for (int j = 0; j < nums.length; j++) {
            if (nums[j] != val) {
                nums[i] = nums[j];
                i++;
            }
        }
        return i; // New length after removals
    }

    public static void main(String[] args) {
        int[] nums1 = {3, 2, 2, 3};
        System.out.println("Output 1: " + removeElement(nums1, 3)); // 2

        int[] nums2 = {0, 1, 2, 2, 3, 0, 4, 2};
        System.out.println("Output 2: " + removeElement(nums2, 2)); // 5

        int[] nums3 = {1, 1, 1};
        System.out.println("Output 3: " + removeElement(nums3, 1)); // 0
    }
}