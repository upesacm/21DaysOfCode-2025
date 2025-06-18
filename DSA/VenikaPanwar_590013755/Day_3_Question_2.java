import java.util.*;

public class CheckDuplicates {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Input: {1 2 3 2}
        System.out.println("Enter array in the format: {1 2 3 2}");
        String input = sc.nextLine();
        input = input.replace("{", "").replace("}", "").trim();

        String[] parts = input.split(" ");
        int n = parts.length;
        int[] nums = new int[n];

        for (int i = 0; i < n; i++) {
            nums[i] = Integer.parseInt(parts[i]);
        }

        // Check for duplicates manually
        boolean foundDuplicate = false;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    foundDuplicate = true;
                    break;
                }
            }
            if (foundDuplicate) break;
        }

        if (foundDuplicate) {
            System.out.println("Output: true");
        } else {
            System.out.println("Output: false");
        }
    }
}
