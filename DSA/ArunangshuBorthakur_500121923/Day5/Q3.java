public class Q3{
    public static boolean isPalindrome(int[] nums) {
        int left = 0;
        int right = nums.length - 1;

        while (left < right) {
            if (nums[left] != nums[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }

    public static void main(String[] args) {
        int[] nums1 = {1, 2, 3, 2, 1};
        int[] nums2 = {1, 2, 3, 4};
        int[] nums3 = {5, 5, 5, 5};

        System.out.println("Is nums1 palindrome? " + isPalindrome(nums1));
        System.out.println("Is nums2 palindrome? " + isPalindrome(nums2));
        System.out.println("Is nums3 palindrome? " + isPalindrome(nums3));
    }
}
