1. public class EvenSum {
    public static int sumEven(int[] nums) {
        int sum = 0;
        for (int num : nums) {
            if (num % 2 == 0) {
                sum += num;
            }
        }
        return sum;
    }
}
2.public class FirstAndLast {
    public static String getFirstAndLast(int[] nums) {
        if (nums.length == 0) return "Array is empty";
        int first = nums[0];
        int last = nums[nums.length - 1];
        return "First: " + first + ", Last: " + last;
    }
}
3.import java.util.Arrays;

public class ArrayEquality {
    public static boolean areEqual(int[] nums1, int[] nums2) {
        if (nums1.length != nums2.length) return false;

        Arrays.sort(nums1);
        Arrays.sort(nums2);

        for (int i = 0; i < nums1.length; i++) {
            if (nums1[i] != nums2[i]) {
                return false;
            }
        }

        return true;
    }
}
