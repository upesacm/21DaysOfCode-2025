import java.util.Arrays;

public class Day1Ques2 {
    public static int[] findMissingAndRepeated(int[] nums) {
        int n = nums.length;
        int[] result = new int[2]; 
        int[] freq = new int[n + 1];
        for (int num : nums) {
            freq[num]++;
        }
        
        for (int i = 1; i <= n; i++) {
            if (freq[i] == 0) {
                result[0] = i; 
            }
            if (freq[i] == 2) {
                result[1] = i; 
            }
        }
        
        return result;
    }

    public static void main(String[] args) {
        // Test cases
        int[] test1 = {3, 1, 3};
        int[] test2 = {4, 3, 6, 2, 1, 1};
        
        // Print results
        int[] result1 = findMissingAndRepeated(test1);
        System.out.println("Test 1: Missing: " + result1[0] + ", Twice: " + result1[1]);
        
        int[] result2 = findMissingAndRepeated(test2);
        System.out.println("Test 2: Missing: " + result2[0] + ", Twice: " + result2[1]);
    }
} 