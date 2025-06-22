public class Q2{

    public static void Rotate(int[] nums, int k){
    k=k%nums.length;
    for(int i = 0; i < nums.length; i++)
    {
        if(i<k){
            System.out.print(nums[nums.length + i - k] 
                             + " ");
        }
        else{
            System.out.print(nums[i - k] 
                             + " ");
        }
    }
    System.out.println();
}
   

    
    public static void main(String[] args) {
        int[] nums= {1,2,3,4,5};
        int k=2;
        Rotate(nums,k);

        int[] nums1={10,20,30};
        int k1=4;
        Rotate(nums1,k1);

        int[] nums2={1,2};
        int k2=1;
        Rotate(nums2,k2);
    }
}