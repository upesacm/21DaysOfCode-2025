package DSA.Siddhant_500120573.Day1.Day1;

public class day1_q1 {
    public static void main(String[] args) {
        int[] nums = {3, -1, 0, -7, 5};
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] < 0) {
                nums[i] = 0;
            }
        }

        for (int num : nums) {
            System.out.print(num + " ");
        }
    }
}