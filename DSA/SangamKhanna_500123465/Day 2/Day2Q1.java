public class SumEvenNumbers {
    public static int sumOfEvens(int[] nums) {
        int sum = 0;
        for (int num : nums) {
            if (num % 2 == 0) {
                sum += num;
            }
        }
        return sum;
    }

    public static void main(String[] args) {
        int[] nums = {1, 2, 3, 4, 5, 6};
        System.out.println("Sum of even numbers: " + sumOfEvens(nums));
    }
}
