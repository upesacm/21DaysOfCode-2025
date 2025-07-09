public class question2 {
    public static void main(String[] args) {
        int nums[] = {0, 1};
        System.out.println(missingNumber(nums,nums.length));
    }
    public static int missingNumber(int nums[],int n){
        n = nums.length;
        int sumOriginal = n * (n + 1) /2;
        int sumNew = 0; 
        int missing = 0;
        for(int i = 0; i < nums.length ; i ++){
            sumNew += nums[i];
        
        }
        missing = sumOriginal - sumNew;
        return missing;
        
    }
}
