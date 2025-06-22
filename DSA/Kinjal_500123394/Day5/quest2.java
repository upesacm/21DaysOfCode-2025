package day5;

import java.util.*;

public class quest2 {
    // find the missing numer from sequence
    public static int findMissingNumber(int[] nums) {
        int n = nums.length;

        HashSet<Integer> numSet = new HashSet<>();
        for (int num : nums) 
        {
            numSet.add(num);
        }
        for (int i = 1; i <= n; i++) {
            if (!numSet.contains(i)) {
                return i; // Return the first missing number
            }
        }
        return -1; // If no number is missing, return -1
    }

    public static void main(String[] args) 
    {
        int[] nums1 = { 1, 2, 3, 5 };
        int[] nums2 = { 2, 3, 4, 5, 6 };
        int[] nums3 = { 1, 2, 3, 4, 5 };

        System.out.println(findMissingNumber(nums1)); // Output: 4
        System.out.println(findMissingNumber(nums2)); // Output: 1
        System.out.println(findMissingNumber(nums3)); // Output: -1 (no missing number)
    }

}
