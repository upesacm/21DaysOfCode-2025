import java.util.*;
public class question3 {
    public static void main(String[] args) {
        int nums1[] = {1, 2, 3};
        int nums2[] = {1,2,3,4};
        System.out.println(compareArray(nums1,nums2));
    }
    public static boolean compareArray(int nums1[],int nums2[]){
        int n = nums1.length;
        int m = nums2.length;
        if( n != m) return false;

        Arrays.sort(nums1);
        Arrays.sort(nums2);

        return Arrays.equals(nums1,nums2);
    }
}
