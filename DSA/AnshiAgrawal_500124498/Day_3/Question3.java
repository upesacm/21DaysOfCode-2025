// Find the second largest unique element in the array, or return -1 if it doesn't exist.
public class Question3 {
    public static void main(String[] args) {
        int[] nums = {1, 2, 3, 4, 4};
        int i, highest = Integer.MIN_VALUE, SecondHighest = Integer.MIN_VALUE;
        for (i = 0; i < nums.length; i++) {
                if (highest < nums[i]) {
                    SecondHighest = highest;
                    highest = nums[i];
                }
        }
        if (SecondHighest == Integer.MIN_VALUE)
            System.out.println("-1");
        else
            System.out.println("Second Highest Number:"+ SecondHighest);

    }
}
