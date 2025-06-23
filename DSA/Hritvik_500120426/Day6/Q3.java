public class longestconsecutivesubarray {
    public static int findLengthOfLCIS(int[] nums) {
        if (nums == null || nums.length == 0) {
            return 0;
        }
        int maxLength = 0;
        int currentLength = 0;

        for (int i = 0; i < nums.length; i++) {
            if (i == 0 || nums[i] != nums[i-1] + 1) {
                if (currentLength > maxLength) {
                    maxLength = currentLength;
                }
                currentLength = 1;
            } else {
                currentLength++;
            }
        }
        
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }

        return maxLength;
    }

    public static void main(String[] args) {
        int[] test1 = {1, 2, 2, 3, 4, 1, 2, 3, 4, 5};
        System.out.println("Input: [1, 2, 2, 3, 4, 1, 2, 3, 4, 5], Output: " + findLengthOfLCIS(test1));

        int[] test2 = {5, 4, 3, 2};
        System.out.println("Input: [5, 4, 3, 2], Output: " + findLengthOfLCIS(test2));

        int[] test3 = {1, 2, 3, 5, 6, 7};
        System.out.println("Input: [1, 2, 3, 5, 6, 7], Output: " + findLengthOfLCIS(test3));
    }
}
