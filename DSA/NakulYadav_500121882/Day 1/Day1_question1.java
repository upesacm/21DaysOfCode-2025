// Solution 1
import java.util.*;
public class Day1_question1 {
    public static void main(String[] args) {
        int[] nums = {-1, 2, -3, 4, 5};
        int[] newNums = noNeg(nums, nums.length);

        System.out.println(Arrays.toString(newNums));
    }
    public static int[] noNeg(int[] nums, int n) {
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] < 0) {
                nums[i] = 0;
            }
        }  
        return nums;  
    }
}
