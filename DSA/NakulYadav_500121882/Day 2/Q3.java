import java.util.*;
public class Question3 {
    public static void main(String[] args) {
        int nums1[] = {1, 2, 2, 3};
        int nums2[] = {1, 2, 3, 3};
        System.out.println(compareArray(nums1, nums2)); // Output: false
    }

    public static boolean compareArray(int nums1[], int nums2[]) {
        if (nums1.length != nums2.length) return false;
        Arrays.sort(nums1);
        Arrays.sort(nums2);

        for (int i = 0; i < nums1.length; i++) {
            if (nums1[i] != nums2[i]) {
                return false;
            }
        }
        return true;
    }
}
