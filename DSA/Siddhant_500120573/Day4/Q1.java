public class Q1 {
    public static void main(String[] args) {
        int[] nums = {12, 5, 8, 19, 3, 7}; 
        int min = findMinimum(nums);
        System.out.println("The minimum element is: " + min);
    }

    public static int findMinimum(int[] nums) {
        int min = nums[0]; 
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] < min) {
                min = nums[i]; 
            }
        }
        return min;
    }
}