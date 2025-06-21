//Given a non-empty array of integers nums, where every element appears exactly twice except for one element that appears only once, find and return the element that appears only once.

public class Question1 {
    public static void main(String[] args) {
        int[] nums={1,2,3,4,1,2,3};
        int i,j,count;
        for(i=0;i<nums.length;i++){
            count=0;
            for(j=0;j<nums.length;j++){
                if(nums[i]==nums[j])
                   count++;
            }
            if(count==1){
                System.out.println("Element that occurs only once:"+nums[i]);
                return;
            }
        }
    }
    
}
