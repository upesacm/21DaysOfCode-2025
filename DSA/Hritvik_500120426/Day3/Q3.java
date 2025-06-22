public class Q3 {
    public static void main(String[] args) {
        int nums[] = {10,20,30,40};
        System.out.println(secondLargest(nums,nums.length));
    }
    
    public static int secondLargest(int nums[],int n){
        n = nums.length;
        int max = Integer.MIN_VALUE; 
        int sec_max = Integer.MIN_VALUE;
        for(int i : nums ){
            if(i > max){
                sec_max = max;
                max = i;
            }
            else if (i < max && i > sec_max) {
                sec_max = i;
        }
    }
    return sec_max;
 }
}
