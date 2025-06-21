//Given an array nums of size n, find the length of the longest contiguous subarray where each element is strictly greater than the previous one (by 1).
public class Question3 {
    public static void main(String[] args) {
        int i,count=1;
        int[] nums= {1, 2, 2, 3, 4, 1, 2, 3, 4, 5};
        for(i=1;i<nums.length;i++){
            if(nums[i] - nums[i-1] == 1){
                count++;
            }
            else{
                count=1;
            }
        }
        System.out.println("\nMax Length:"+count);
    }
}
