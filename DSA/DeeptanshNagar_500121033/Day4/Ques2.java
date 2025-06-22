// DAY 4 <-----/---> QUE 2

import java.util.Arrays;

public class Ques2 {
    public static void main(String[] args){
        int[] nums = {1, 2, 3, 4, 5};
        int k = 2;
        rotate(nums, k);
        System.out.println(Arrays.toString(nums));
    }

    static void rotate(int[] nums, int k){
        int n = nums.length;
        if (n == 0 || k % n == 0){
            return;
        }
        k = k % n;
        reverse(nums, 0, n - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, n - 1);
    }

    static void reverse(int[] nums, int start, int end){
        while (start < end) {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;

        }
    }
}
// O(n) time and O(1) space comp.
