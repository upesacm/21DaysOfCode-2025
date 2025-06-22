// DAY 3 <-----/---> QUE 3

public class Ques3 {
    public static void main(String[] args) {
        int[] nums = {3, 2, 1};
		int secLarge = secondLarge(nums);
        System.out.println(secLarge);
    }

    static private int secondLarge(int[] nums) {
        int n = nums.length;
        if(n<2) return -1;
        int large = Integer.MIN_VALUE;
        int second_large = Integer.MIN_VALUE; 
        for (int i = 0; i < n; i++) {
            if (nums[i] > large){
                second_large = large;
                large = nums[i];
            } else if (nums[i] > second_large && nums[i] != large){
                second_large = nums[i];
            }
        }
        return second_large;
    } 
    // TC = O(N)
    // SC = O(1)
}
