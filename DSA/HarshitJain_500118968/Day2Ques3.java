import java.util.HashMap;
import java.util.Map;

public class Day2Ques3 {
    public static boolean areArraysEqual(int[] nums1, int[] nums2) {
        if (nums1.length != nums2.length) {
            return false;
        }
        
        Map<Integer, Integer> frequency = new HashMap<>();
        
        for (int num : nums1) {
            frequency.put(num, frequency.getOrDefault(num, 0) + 1);
        }
        
        for (int num : nums2) {
            if (!frequency.containsKey(num) || frequency.get(num) == 0) {
                return false;
            }
            frequency.put(num, frequency.get(num) - 1);
        }
        
        return true;
    }

    public static void main(String[] args) {
        int[] test1_nums1 = {1, 2, 3, 4};
        int[] test1_nums2 = {4, 3, 2, 1};
        
        int[] test2_nums1 = {1, 2, 2, 3};
        int[] test2_nums2 = {1, 2, 3, 3};
        
        int[] test3_nums1 = {1, 2, 3};
        int[] test3_nums2 = {1, 2, 3, 4};
        
        System.out.println("Test 1: " + areArraysEqual(test1_nums1, test1_nums2));
        System.out.println("Test 2: " + areArraysEqual(test2_nums1, test2_nums2));
        System.out.println("Test 3: " + areArraysEqual(test3_nums1, test3_nums2));
    }
} 