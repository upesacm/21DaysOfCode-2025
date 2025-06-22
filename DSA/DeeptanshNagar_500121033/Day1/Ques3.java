// DAY 1 <-----/---> QUE 3

public class Ques3 {
    public static void main(String[] args) {
        int[] nums = {1,2,3,4,5};
        int ans = add(nums);
        System.out.println(ans);
    }

    static int add(int[] nums) {
        int n = nums.length;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }
        return sum;
    }
}

// Time comp will be O(N).
// Space comp will be O(1).
