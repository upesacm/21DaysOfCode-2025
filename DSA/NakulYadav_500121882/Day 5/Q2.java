public class Q2 {
    public static void main(String[] args) {
        int nums[] = {3,0,1};
        System.out.println(missingNumber(nums, nums.length));
    }
    public static int missingNumber(int nums[], int n){
        int sum = 0;
        int total = n * (n + 1) / 2;
        
        for(int i = 0; i < n; i++){
            sum += nums[i];
        }
        return total - sum;
    }
}
