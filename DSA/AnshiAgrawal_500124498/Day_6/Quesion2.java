//Given an array of integers nums, return true if each number is strictly greater than the one before it. Otherwise, return false.
public class Quesion2 {
    public static void main(String[] args) {
        int[] nums= {1,2,4,4,5};
        int i;
        for(i=0;i<(nums.length-1);i++){
            if(nums[i] == nums[i+1]){
                System.out.println("False, Array is not strictly increasing");
                return;
            }
        }
        System.out.println("True, Arrray is Strictly Increasing");
    }
    
}
