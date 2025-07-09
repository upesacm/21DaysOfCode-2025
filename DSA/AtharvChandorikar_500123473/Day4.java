1.public class FindMinimum {
    public static int findMin(int[] nums) {
        int min = nums[0];
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] < min) min = nums[i];
        }
        return min;
    }
}
2.public class RotateArray {
    public static int[] rotate(int[] nums, int k) {
        int n = nums.length;
        int[] result = new int[n];
        k = k % n;

        for (int i = 0; i < n; i++) {
            result[(i + k) % n] = nums[i];
        }

        return result;
    }
}
3.public class RemoveValue {
    public static int remove(int[] nums, int val) {
        int count = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != val) {
                nums[count] = nums[i];
                count++;
            }
        }
        return count; 
    }
}
