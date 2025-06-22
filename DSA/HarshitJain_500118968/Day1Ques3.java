public class Day1Ques3 {
    public static int sumOfArray(int[] nums) {
        int sum = 0;
        
        // Iterate through the array and add each element to sum
        for (int num : nums) {
            sum += num;
        }
        
        return sum;
    }

    public static void main(String[] args) {
        // Test cases
        int[] test1 = {1, 2, 3, 4, 5};
        int[] test2 = {10, 20, 30};
        int[] test3 = {7, 3, 9, 1, 6};
        
        // Print results
        System.out.println("Test 1: " + sumOfArray(test1));
        System.out.println("Test 2: " + sumOfArray(test2));
        System.out.println("Test 3: " + sumOfArray(test3));
    }
} 