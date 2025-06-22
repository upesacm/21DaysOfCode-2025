public class finduniqueelement {
    public static int findUnique(int[] nums) {
        int result = 0;
        for (int num : nums) {
            result ^= num;
        }
        return result;
    }

    public static void main(String[] args) {
        int[] test1 = {2, 2, 1};
        System.out.println("Input: [2, 2, 1], Output: " + findUnique(test1));

        int[] test2 = {4, 1, 2, 1, 2};
        System.out.println("Input: [4, 1, 2, 1, 2], Output: " + findUnique(test2));

        int[] test3 = {1};
        System.out.println("Input: [1], Output: " + findUnique(test3));
    }
}
