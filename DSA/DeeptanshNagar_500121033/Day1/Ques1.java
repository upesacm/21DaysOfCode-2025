// DAY 1 <-----/---> QUE 1

import java.util.Arrays;

public class Ques1 {
    public static void main(String[] args) {
        int[] nums = {-1, 2, -3, 4, 5};
        int[] ans = replace(nums);
        System.out.println(Arrays.toString(ans));
    }

    static int[] replace(int[] nums){
        int n = nums.length;
        for (int i = 0; i < n; i++) {
            if(nums[i] < 0) nums[i] = 0;
        }
        return nums;
    }
}


// Time Complexity will be O(N).
// Space will be O(1).
