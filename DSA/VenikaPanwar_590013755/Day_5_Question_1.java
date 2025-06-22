import java.util.*;

public class Day_5_Question_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter array in format: {2 2 1}");
        String input = sc.nextLine();
        input = input.replace("{", "").replace("}", "").trim();
        String[] parts = input.split(" ");
        int[] nums = new int[parts.length];

        for (int i = 0; i < parts.length; i++) {
            nums[i] = Integer.parseInt(parts[i]);
        }

        int unique = 0;
        for (int i = 0; i < nums.length; i++) {
            unique = unique ^ nums[i]; // XOR: cancels out duplicates
        }

        System.out.println("Unique Element is: " + unique);
    }
}
