public class Q1{
    public static void minimum(int[] nums){
        int min=Integer.MAX_VALUE;
        for(int i=0;i<nums.length;i++){
            if(nums[i]<min){
                min=nums[i];
            }
        }
        System.out.println(min);

    }
    public static void main(String[] args) {
        int[] nums={4,2,7,1,9};
        minimum(nums);

        int[] nums1={5,5,5};
        minimum(nums1);

        int[] nums2={-3,-1,-5,-2};
        minimum(nums2); 
    }
}