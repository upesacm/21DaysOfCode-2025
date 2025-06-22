import java.util.*;

public class Day_5_Question_3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter array in format: {1 2 3 2 1}");
        String input = sc.nextLine();
        input = input.replace("{", "").replace("}", "").trim();
        String[] parts = input.split(" ");
        int[] nums = new int[parts.length];

        for (int i = 0; i < parts.length; i++) {
            nums[i] = Integer.parseInt(parts[i]);
        }

        boolean isPalindrome = true;
        for (int i = 0; i < nums.length / 2; i++) {
            if (nums[i] != nums[nums.length - 1 - i]) {
                isPalindrome = false;
                break;
            }
        }

        System.out.println("Is Palindrome? " + isPalindrome);
    }
}
