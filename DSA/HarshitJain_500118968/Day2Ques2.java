public class Day2Ques2 {
    public static int[] findFirstAndLast(int[] nums) {
        if (nums == null || nums.length == 0) {
            return new int[]{-1, -1}; // Return invalid indices for empty array
        }
        
        return new int[]{nums[0], nums[nums.length - 1]};
    }

    public static void main(String[] args) {
        int[] test1 = {1, 2, 3, 4};
        int[] test2 = {7};
        int[] test3 = {5, 9, 2};
        
        int[] result1 = findFirstAndLast(test1);
        System.out.println("Test 1: First: " + result1[0] + ", Last: " + result1[1]);
        
        int[] result2 = findFirstAndLast(test2);
        System.out.println("Test 2: First: " + result2[0] + ", Last: " + result2[1]);
        
        int[] result3 = findFirstAndLast(test3);
        System.out.println("Test 3: First: " + result3[0] + ", Last: " + result3[1]);
    }
} 