public class Q1 {
    public static int sumofeven(int[] nums){
        int sum1=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]%2==0){
                sum1+=nums[i];
            }
        }
        return sum1;
    }

    public static void main(String[] args) {
        int[] nums={1,2,3,4,5};
        System.out.println(sumofeven(nums));

        
        int[] nums1={10,15,20};
        System.out.println(sumofeven(nums1));

        int[] nums2={1,3,5};
        System.out.println(sumofeven(nums2));

    }
}