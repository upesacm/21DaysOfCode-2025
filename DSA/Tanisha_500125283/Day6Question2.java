package DSA.Tanisha_500125283;

public class Day6Question2 {
    public static boolean increasingNumber(int[] nums){
        for(int i=1; i<nums.length; i++){
            if(nums[i]<=nums[i-1]){
            return false;
        }
    }
    return true;
}
public static void main(String[] args){
     int[] nums1 = {1, 2, 3, 4};
     int[] nums2 = {1, 2, 2, 4};

    System.out.println(increasingNumber(nums1)); 
    System.out.println(increasingNumber(nums2)); 
    }
}

