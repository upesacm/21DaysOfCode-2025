public class Q1{
    public static int findUniqueElement(int[] nums) {
        int result = 0;
        for (int num : nums) {
            result ^= num;
        }
        return result;
    }

    public static void main(String[] args) {
        int[] nums1 = {2, 2, 1};
        int[] nums2 = {4, 1, 2, 1, 2};
        int[] nums3 = {1};

        System.out.println("Unique element in nums1: " + findUniqueElement(nums1));
        System.out.println("Unique element in nums2: " + findUniqueElement(nums2));
        System.out.println("Unique element in nums3: " + findUniqueElement(nums3));
    }
}
