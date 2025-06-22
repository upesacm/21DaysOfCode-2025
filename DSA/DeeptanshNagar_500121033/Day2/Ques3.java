// DAY 2 <-----/---> QUE 3

import java.util.Arrays;

public class Ques3 {
    public static void main(String[] args) {
        // int[] nums1 = {1, 2, 3, 4};  // nums1 == nums2. so, its true.
        // int[] nums2 = {4, 3, 2, 1};  

        int[] nums1 = {1, 2, 2, 3};  // nums 1 not equal nums 2. so, its false.
        int[] nums2 = {1, 2, 3, 3};
        boolean ans = checkEquals(nums1, nums2);
        System.out.println(ans);
    }
    static boolean checkEquals(int[] nums1, int[] nums2) {
        if(nums1.length != nums2.length) {
            return false;
        }

        Arrays.sort(nums1);
        Arrays.sort(nums2);
        if(Arrays.equals(nums1, nums2)) return true;

        return false;
    }
}
