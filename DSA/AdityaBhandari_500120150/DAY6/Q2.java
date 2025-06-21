public class Q2 {

    public static boolean increasing(int[] nums){
        for(int i=0;i<nums.length-1;i++){
            if(nums[i]>=nums[i+1]){
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        int[] nums={1,2,3,4};
        System.out.println(increasing(nums));

        int[] nums1={1,2,2,3};
        System.out.println(increasing(nums1));

        int[] nums2={5,4,3};
        System.out.println(increasing(nums2));
    }
    
}
