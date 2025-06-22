public class Day_4_Question_1{
    public static void main(String[] args) {
        int[] nums= {1,-2,3,-5,4};
        int res= min(nums);
        System.out.println(res);
        
    }
    static int min(int[] nums){
        int min=Integer.MAX_VALUE;
        for(int i=0 ;i<nums.length;i++){
            if(nums[i]<min){
                min=nums[i];
            }

        }
    return min;
    }
}
