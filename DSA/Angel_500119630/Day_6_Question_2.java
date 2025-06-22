public class Day_6_Question_2{
    public static void main(String[] args) {
        int[] nums = {1, 2, 3, 4}; 
        System.out.println(isStrictlyIncreasing(nums));
    }

    public static boolean isStrictlyIncreasing(int[] nums) {
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] <= nums[i - 1]) {
                return false;
            }
        }
        return true;
    }
}
