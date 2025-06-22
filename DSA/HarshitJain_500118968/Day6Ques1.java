import java.util.HashSet;
import java.util.Set;

public class findduplicate {
    public static int findDuplicate(int[] nums) {
        Set<Integer> seen = new HashSet<>();
        for (int num : nums) {
            if (seen.contains(num)) {
                return num;
            }
            seen.add(num);
        }
        return -1; 
    }

    public static void main(String[] args) {
        int[] test1 = {1, 3, 4, 2, 2};
        System.out.println("Input: [1, 3, 4, 2, 2], Output: " + findDuplicate(test1));

        int[] test2 = {3, 1, 3, 4, 2};
        System.out.println("Input: [3, 1, 3, 4, 2], Output: " + findDuplicate(test2));

        int[] test3 = {1, 1, 2};
        System.out.println("Input: [1, 1, 2], Output: " + findDuplicate(test3));
    }
}
