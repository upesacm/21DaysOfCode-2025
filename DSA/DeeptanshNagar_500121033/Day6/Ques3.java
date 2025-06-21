// DAY 6 <-----/---> QUE 3

public class Ques3 {
    public static void main(String[] args) {
        int[] nums = {1, 2, 2, 3, 4, 1, 2, 3, 4, 5};
        int ans = lengthOfConsecutiveSubarray(nums);
        System.out.println(ans);
    }

    static int lengthOfConsecutiveSubarray(int[] nums){
        if (nums == null || nums.length == 0){
            return 0;
        }
        int longest = 1;
        int count = 1;
        for (int i = 1; i < nums.length; i++){
            if (nums[i] == nums[i - 1]+1){
                count++;
                longest = Math.max(longest, count);
            } else {
                count = 1;
            }
        }
        return longest;
    }
    // Tc - o(n)
    // Sc - o(1)
}
