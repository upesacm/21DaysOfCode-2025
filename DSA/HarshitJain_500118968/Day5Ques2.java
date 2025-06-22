public class findmissingnumber {
    public static int findMissing(int[] nums) {
        int n = nums.length;
        int expectedSum = n * (n + 1) / 2;
        int actualSum = 0;
        for (int num : nums) {
            actualSum += num;
        }
        return expectedSum - actualSum;
    }

    public static void main(String[] args) {
        int[] test1 = {3, 0, 1};
        System.out.println("Input: [3, 0, 1], Output: " + findMissing(test1));

        int[] test2 = {0, 1};
        System.out.println("Input: [0, 1], Output: " + findMissing(test2));

        int[] test3 = {9, 6, 4, 2, 3, 5, 7, 0, 1};
        System.out.println("Input: [9, 6, 4, 2, 3, 5, 7, 0, 1], Output: " + findMissing(test3));
    }
}
