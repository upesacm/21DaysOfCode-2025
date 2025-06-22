import java.util.*;
public class Day_6_Question_3 {
    public static void main(String[] args) {
        int[] nums = {1, 2, 2, 3, 4, 1, 2, 3, 4, 5};
        System.out.println(lengthSubarray(nums));
    }

    public static int lengthSubarray(int[] nums) {
        if (nums.length == 0) return 0;

        int maxLen = 1;
        int currentLen = 1;

        for (int i = 1; i < nums.length; i++) {
            if (nums[i] == nums[i - 1] + 1) {
                currentLen++;
                maxLen = Math.max(maxLen, currentLen);
            } else {
                currentLen = 1;
            }
        }

        return maxLen;
    }
}
