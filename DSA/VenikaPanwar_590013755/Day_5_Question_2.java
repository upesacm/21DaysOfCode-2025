import java.util.*;

public class Day_5_Question_2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter array in format: {3 0 1}");
        String input = sc.nextLine();
        input = input.replace("{", "").replace("}", "").trim();
        String[] parts = input.split(" ");
        int[] nums = new int[parts.length];

        for (int i = 0; i < parts.length; i++) {
            nums[i] = Integer.parseInt(parts[i]);
        }

        int n = nums.length;
        int totalSum = n * (n + 1) / 2;
        int actualSum = 0;

        for (int i = 0; i < n; i++) {
            actualSum += nums[i];
        }

        int missing = totalSum - actualSum;
        System.out.println("Missing Number is: " + missing);
    }
}
