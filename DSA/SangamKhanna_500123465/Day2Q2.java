public class ArrayElements {
    public static int[] getFirstAndLast(int[] nums) {
        if (nums == null || nums.length == 0) {
            throw new IllegalArgumentException("Array must not be empty");
        }
        return new int[]{nums[0], nums[nums.length - 1]};
    }

    public static void main(String[] args) {
        int[] nums = {1, 2, 3, 4, 5};
        int[] result = getFirstAndLast(nums);
        System.out.println("First element: " + result[0] + ", Last element: " + result[1]);
    }
}
