import java.util.*;

public class Day_4_Question_3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Input array in format: {3 2 2 3}
        System.out.println("Enter array in this format: {3 2 2 3}");
        String line = sc.nextLine();

        // Remove curly brackets
        line = line.replace("{", "").replace("}", "");

        String[] parts = line.trim().split(" ");
        int[] nums = new int[parts.length];

        for (int i = 0; i < parts.length; i++) {
            nums[i] = Integer.parseInt(parts[i]);
        }

        System.out.println("Enter value to remove:");
        int val = sc.nextInt();

        int index = 0; // to track new array position

        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != val) {
                nums[index] = nums[i];
                index++;
            }
        }

        // Print new array length
        System.out.println("New length after removals: " + index);
    }
}
