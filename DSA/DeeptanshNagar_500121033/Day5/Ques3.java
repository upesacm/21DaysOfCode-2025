// DAY 5 <-----/---> QUE 3

public class Ques3 {
    public static void main(String[] args) {
        int[] nums = {1, 2, 3, 2, 1};
        System.out.println(isPalin(nums));
    }

    static boolean isPalin(int[] nums){
        int left = 0;
        int right = nums.length - 1;
        while (left < right) {
            if (nums[left] != nums[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
}
// Time O(N) and Space comp will be O(1)
