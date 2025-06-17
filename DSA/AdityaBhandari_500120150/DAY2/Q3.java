import java.util.*;
public class Q3 {
    public static boolean same(int[] nums,int[] nums1){
        
        if(nums.length!=nums1.length){
            System.out.println("Array are not equal in length");
            return false;
        }
        Arrays.sort(nums);
        Arrays.sort(nums1);
        for(int i=0;i<nums.length;i++){
            if(nums[i]!=nums1[i]){
                return false;
            }
        }
        return true;
        
        
    }

    public static void main(String[] args) {
        int[] nums={1,2,3,4};
        int[] nums1={4,3,2,1};
        System.out.println(same(nums, nums1));

        int[] nums2={1,2,2,3};
        int[] nums3={1,2,3,3};
        System.out.println(same(nums2, nums3));

        int[] nums4={1,2,3,4,5};
        int[] nums5={4,3,2,1};
        System.out.println(same(nums4, nums5));
    }
    
}
