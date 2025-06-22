
public class Q3 {

    public static void remove(int[] nums,int val){
        int j=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]!=val){
                nums[j]=nums[i];
                j++;
            }

        }
        System.out.println(j);
        // for(int i=0;i<j;i++){
        //     System.out.println(nums[i]);
        // }

    }
    public static void main(String[] args) {
        int[] nums={3,2,2,3};
        int val=3;
        remove(nums,val);

        int[] nums1={0,1,2,2,3,0,4,2};
        int val1=2;
        remove(nums1,val1);

        int[] nums2={1,1,1};
        int val2=1;
        remove(nums2,val2);
    }
    
}
