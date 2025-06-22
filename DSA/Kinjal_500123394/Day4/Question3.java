public class Question3 {
    public static int removeElement(int[] nums, int val) {
        int i = 0; // pointer for placement
        for (int j = 0; j < nums.length; j++) {
            if (nums[j] != val) {
                nums[i] = nums[j];
                i++;
            }
        }
        return i; // new length of array
    }

    public static void main(String[] args) {
        int[] nums = {3, 2, 2, 3};
        int val = 3;
        int newLength = removeElement(nums, val);
        System.out.println("New length after removal: " + newLength); // Output: 2
    }
}
