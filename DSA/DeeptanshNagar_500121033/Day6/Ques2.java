// DAY 6 <-----/---> QUE 2

public class Ques2 {
    public static void main(String[] args) {
        int[] nums = {1, 2, 2, 3};
        boolean ans = isIncreasing(nums);  // btw taking it for strictly increasing // edge cases handle hojaenge
        System.out.println(ans);
    }

    static boolean isIncreasing(int[] nums) {
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] <= nums[i - 1]) {
                return false;
            }
        }
        
        return true;

    }
}

// Tc = o(n)
// Sc = o(1)
