import java.util.HashSet;
import java.util.Arrays;

public class SecondLargestElement {
    public static int findSecondLargest(int[] nums) {
        HashSet<Integer> set = new HashSet<>();
        for (int num : nums) {
            set.add(num);
        }
        Integer[] uniqueNums = set.toArray(new Integer[0]);
        if (uniqueNums.length < 2) {
            return -1;
        }
        Arrays.sort(uniqueNums, (a, b) -> b - a); 
        return uniqueNums[1]; 
    }

    public static void main(String[] args) {
        int[] nums1 = {10, 20, 30, 40};
        System.out.println("Output 1: " + findSecondLargest(nums1)); 

        int[] nums2 = {5, 5, 5};
        System.out.println("Output 2: " + findSecondLargest(nums2));

        int[] nums3 = {3, 2, 1};
        System.out.println("Output 3: " + findSecondLargest(nums3)); 
    }
}