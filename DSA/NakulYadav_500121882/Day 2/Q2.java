public class Q2 {
    public static void main(String[] args) {
        int[] nums = {1, 2, 3, 4};

        printFirstAndLast(nums);
    }

    public static void printFirstAndLast(int[] nums) {
        int first = nums[0]; 
        int last = nums[nums.length - 1]; 

        System.out.println("First: " + first + ", Last: " + last);
    }
}
