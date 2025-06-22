import java.util.Arrays;

public class Day1Ques1 {
    public static int[] replaceNegativesWithZero(int[] nums) {
        
        int[] result = nums.clone();
        
        for (int i = 0; i < result.length; i++) {
            if (result[i] < 0) {
                result[i] = 0;
            }
        }
        
        return result;
    }

    public static void main(String[] args) {
        int[] test1 = {-1, 2, -3, 4, 5};
        int[] test2 = {0, -5, -10};
        int[] test3 = {1, 2, 3, 4};

        System.out.println("Test 1: " + Arrays.toString(replaceNegativesWithZero(test1)));
        System.out.println("Test 2: " + Arrays.toString(replaceNegativesWithZero(test2)));
        System.out.println("Test 3: " + Arrays.toString(replaceNegativesWithZero(test3)));
    }
}
