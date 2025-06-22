import java.util.HashSet;

public class CheckForDuplicates {
    public static boolean hasDuplicates(int[] nums) {
        HashSet<Integer> set = new HashSet<>();
        for (int num : nums) {
            if (!set.add(num)) {
                return true; 
            }
        }
        return false; 
    }

    public static void main(String[] args) {
        int[] nums1 = {1, 2, 3, 4};
        System.out.println("Output 1: " + hasDuplicates(nums1)); 

        int[] nums2 = {1, 2, 3, 2};
        System.out.println("Output 2: " + hasDuplicates(nums2));

        int[] nums3 = {5, 5, 5};
        System.out.println("Output 3: " + hasDuplicates(nums3));
    }
}
