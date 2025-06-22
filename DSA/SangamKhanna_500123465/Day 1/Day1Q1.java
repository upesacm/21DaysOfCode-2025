public class Day1Q1 {
    public int[] replaceNegatives(int[] nums) {
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] < 0) {
                nums[i] = 0;
            }
        }
        return nums;
    }
}
