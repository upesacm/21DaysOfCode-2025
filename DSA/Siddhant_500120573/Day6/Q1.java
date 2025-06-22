public class Q1 {
    public static void main(String[] args) {
        int[] nums = {3, 1, 3, 4, 2}; 
        int duplicate = findDuplicate(nums);
        System.out.println("Duplicate number: " + duplicate);
    }

    public static int findDuplicate(int[] nums) {
        for (int i = 0; i < nums.length; i++) {
            int index = Math.abs(nums[i]);
            if (nums[index] < 0) {
                return index; 
            }
            nums[index] = -nums[index];
        }
        return -1; 
    } 
}