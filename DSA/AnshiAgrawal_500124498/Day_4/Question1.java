public class Question1 { //Find and return the minimum element in the array.
    public static void main (String[] args){
        int[] nums={-2,-3,-4,-1};
        int i,j,min=nums[0];
        for(i=0;i<nums.length;i++){
            for(j=0;j<nums.length;j++){
                if(nums[i]<nums[j]){
                    min=nums[i];
                }
            }
        }
        System.out.println("Minimum Element:"+ min);
    }
}
