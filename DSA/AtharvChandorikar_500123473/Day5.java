1.public class UniqueElement {
    public static int findUnique(int[] nums) {
        for (int i = 0; i < nums.length; i++) {
            int count = 0;
            for (int j = 0; j < nums.length; j++) {
                if (nums[i] == nums[j]) count++;
            }
            if (count == 1) return nums[i];
        }
        return -1;
    }
}
2.public class MissingNumber {
    public static int findMissing(int[] nums) {
        int n = nums.length;
        int expectedSum = n * (n + 1) / 2;
        int actualSum = 0;

        for (int num : nums) {
            actualSum += num;
        }

        return expectedSum - actualSum;
    }
}

3.public class ArrayPalindrome {
    public static boolean isPalindrome(int[] nums) {
        int start = 0, end = nums.length - 1;
        while (start < end) {
            if (nums[start] != nums[end]) return false;
            start++;
            end--;
        }
        return true;
    }
}
