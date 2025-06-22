// Problem Statement:Given an array nums of size n, find the length of the longest contiguous subarray where 
// each element is strictly greater than the previous one (by 1). 
// Task: Find the length of the longest contiguous subarray with consecutive increasing elements. 
// Examples Input: nums = [1, 2, 2, 3, 4, 1, 2, 3, 4, 5] 
// Output: 5 


package DSA.Tanisha_500125283;

public class Day6Question3 {
    public static int longestIncreasing(int[] nums) {
        if (nums.length == 0) {
            return 0;
        }
        int maxLength = 1;
        int currentLength = 1;

        for (int i = 1; i < nums.length; i++) {
            if (nums[i] == nums[i - 1] + 1) {
                currentLength++;
                maxLength = Math.max(maxLength, currentLength);
            } else {
                currentLength = 1; // reset when the streak breaks
            }
        }

        return maxLength;
    }

    public static void main(String[] args) {
        int[] nums = {1, 2, 2, 3, 4, 1, 2, 3, 4, 5};
        System.out.println(longestIncreasing(nums));
    }
}

    

