import java.util.*;

public class SecondLargest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Input: {3 2 1}
        System.out.println("Enter array in the format: {3 2 1}");
        String input = sc.nextLine();
        input = input.replace("{", "").replace("}", "").trim();

        String[] parts = input.split(" ");
        int n = parts.length;
        int[] nums = new int[n];

        for (int i = 0; i < n; i++) {
            nums[i] = Integer.parseInt(parts[i]);
        }

        // Step 1: Remove duplicates manually
        int[] unique = new int[n];
        int uniqueCount = 0;

        for (int i = 0; i < n; i++) {
            boolean isDuplicate = false;
            for (int j = 0; j < uniqueCount; j++) {
                if (nums[i] == unique[j]) {
                    isDuplicate = true;
                    break;
                }
            }
            if (!isDuplicate) {
                unique[uniqueCount] = nums[i];
                uniqueCount++;
            }
        }

        // Step 2: If less than 2 unique elements
        if (uniqueCount < 2) {
            System.out.println("Output: -1");
            return;
        }

        // Step 3: Find largest and second largest manually
        int max = Integer.MIN_VALUE;
        for (int i = 0; i < uniqueCount; i++) {
            if (unique[i] > max) {
                max = unique[i];
            }
        }

        int secondMax = Integer.MIN_VALUE;
        boolean foundSecond = false;
        for (int i = 0; i < uniqueCount; i++) {
            if (unique[i] != max && unique[i] > secondMax) {
                secondMax = unique[i];
                foundSecond = true;
            }
        }

        if (foundSecond) {
            System.out.println("Output: " + secondMax);
        } else {
            System.out.println("Output: -1");
        }
    }
}
