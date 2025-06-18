public class Q2 {
    public static boolean containsDuplicate(int[] nums) {
        for (int i = 0; i < nums.length; i++) {
            for (int j = i + 1; j < nums.length; j++) {
                if (nums[i] == nums[j]) {
                    return true; // Duplicate found
                }
            }
        }
        return false; // No duplicates
    }

    public static void main(String[] args) {
        int nums[] = { 1, 2, 3, 2 };

        System.out.println(containsDuplicate(nums));
    }
}
