public class checkarraypalindrome {
    public static boolean isPalindrome(int[] nums) {
        int start = 0;
        int end = nums.length - 1;
        while (start < end) {
            if (nums[start] != nums[end]) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }

    public static void main(String[] args) {
        int[] test1 = {1, 2, 3, 2, 1};
        System.out.println("Input: [1, 2, 3, 2, 1], Output: " + isPalindrome(test1));

        int[] test2 = {1, 2, 3, 4};
        System.out.println("Input: [1, 2, 3, 4], Output: " + isPalindrome(test2));

        int[] test3 = {5, 5, 5, 5};
        System.out.println("Input: [5, 5, 5, 5], Output: " + isPalindrome(test3));
    }
}
