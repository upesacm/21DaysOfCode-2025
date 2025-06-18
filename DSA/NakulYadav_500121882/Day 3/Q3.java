public class Q3 {
    public static void main(String[] args) {
        int nums[] = {10, 20, 30, 40};
        System.out.println(secondLargest(nums,nums.length));
    }
    public static int secondLargest(int nums[],int n){
        int max = Integer.MIN_VALUE; 
        int secMax = Integer.MIN_VALUE;
        for(int i : nums ){
            if(i > max){
                secMax = max;
                max = i;
            }
            else if (i < max && i > secMax) {
                secMax = i;
        }
    }
    return secMax;
 }
}
