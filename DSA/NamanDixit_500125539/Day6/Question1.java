
import java.util.*;

class Question1 {

    public List<Integer> findDuplicatesConstantSpace(int[] nums) {
        List<Integer> resultSet = new ArrayList<>();

        for (int i = 0; i < nums.length; i++) {
            int value = Math.abs(nums[i]);

            // Skip invalid values silently
            if (value < 1 || value > nums.length) {
                continue;
            }

            int index = value - 1;

            if (nums[index] < 0) {
                resultSet.add(value);  // Found a duplicate
            } else {
                nums[index] = -nums[index];  // Mark as visited
            }
        }

        return resultSet;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter length of array: ");
        int n = sc.nextInt();
        int nums[] = new int[n];

        System.out.println("Enter array elements (each between 1 and " + n + "): ");
        for (int i = 0; i < nums.length; i++) {
            nums[i] = sc.nextInt();
        }

        Question1 obj = new Question1();
        List<Integer> duplicates = obj.findDuplicatesConstantSpace(nums);

        System.out.println("Duplicates found: " + duplicates);

        sc.close();
    }
}
