public class Q3 {
    public static void secongLarge(int[] nums){
        int second= Integer.MIN_VALUE;
        int largest= Integer.MIN_VALUE;
        for(int i=0;i<nums.length;i++){
            if(nums[i]>largest){
                second=largest;
                largest=nums[i];
            }else if (nums[i] > second && nums[i] != largest) {
                second = nums[i];
            }
        }
        if (second ==Integer.MIN_VALUE) {
            System.out.println("-1");
        }
        else{
            System.out.println(second);
        }
    }
    
    public static void main(String[] args) {
        int[] nums= {10,20,30,40};
        secongLarge(nums);
        
        int[] nums1={5,5,5};
        secongLarge(nums1);

        int[] nums2={3,2,1};
        secongLarge(nums2);
    }
}
