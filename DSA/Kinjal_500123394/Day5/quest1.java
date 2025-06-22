package day5;

import java.util.*;

public class quest1 {
    // create a hash map to store elements
    public static int containsDuplicate(int[] nums) {
        HashMap<Integer, Integer> FreqMap = new HashMap<>();
        for (int num : nums) {
            FreqMap.put(num, FreqMap.getOrDefault(num, 0) + 1);

        }

        // need to find the element with frequency 1

        for (Map.Entry<Integer, Integer> entry : FreqMap.entrySet()) {
            if (entry.getValue() == 1) {
                return entry.getKey(); // Return the first element with frequency 1
            }
        }

        return -1;

    }

    public static void main(String[] args) {
        int[] nums1 = { 8, 2, 2, 4, 4 };
        int[] nums2 = { 3, 2, 3, 2 };
        int[] nums3 = { 5, 5, 5 };

        System.out.println(containsDuplicate(nums1)); // Output: 1
        System.out.println(containsDuplicate(nums2)); // Output: 1
        System.out.println(containsDuplicate(nums3)); // Output: -1
    }

}
