public class Day1Q2 {
    public int[] findMissingAndRepeated(int[] nums) {
        int n = nums.length;
        int duplicate = -1;
        for (int i = 0; i < n; i++) {
            int num = Math.abs(nums[i]);
            int idx = num - 1;
            if (nums[idx] < 0) {
                duplicate = num;
            } else {
                nums[idx] = -nums[idx];
            }
        }
        int missing = -1;
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                missing = i + 1;
                break;
            }
        }
        return new int[]{missing, duplicate};
    }
}
