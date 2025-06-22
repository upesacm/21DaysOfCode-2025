// DAY 3 <-----/---> QUE 2

import java.util.HashSet;
import java.util.Set;

public class Ques2 {
    public static void main(String[] args) {
        int[] nums = {1, 2, 3, 4, 5, 2, 9};
        boolean ans = checkDupli(nums);
        System.out.println(ans);
    }

    static boolean checkDupli(int[] nums) {
        // optimized
        Set<Integer> st = new HashSet<>();
        for (int i = 0; i < nums.length; i++) {
            if(st.contains(nums[i])){
                return true;
            } else {
                st.add(nums[i]);
            }
        }
        return false;

        // BruteForce Approach -
        // Arrays.sort(nums);
        // for (int i = 1; i < nums.length; i++) {
        //     if(nums[i] == nums[i-1]) {
        //         return true;
        //     }
        // }
        // return false;
    }
}

// Time and Space for optimized approach.
// Time Compl. - O(n)
// Space Compl. - O(n)
