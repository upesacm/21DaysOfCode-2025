import java.util.*;

public class Day_4_Question_2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Input array in format: {1 2 3 4 5}
        System.out.println("Enter array in this format: {1 2 3 4 5}");
        String line = sc.nextLine();

        // Remove curly brackets
        line = line.replace("{", "").replace("}", "");

        String[] parts = line.trim().split(" ");
        int[] nums = new int[parts.length];

        for (int i = 0; i < parts.length; i++) {
            nums[i] = Integer.parseInt(parts[i]);
        }

        System.out.println("Enter value of k:");
        int k = sc.nextInt();

        int n = nums.length;
        int[] rotated = new int[n];

        for (int i = 0; i < n; i++) {
            int newPos = (i + k) % n;
            rotated[newPos] = nums[i];
        }

        // Print rotated array
        System.out.print("Rotated Array: {");
        for (int i = 0; i < n; i++) {
            System.out.print(rotated[i]);
            if (i < n - 1) System.out.print(" ");
        }
        System.out.println("}");
    }
}
