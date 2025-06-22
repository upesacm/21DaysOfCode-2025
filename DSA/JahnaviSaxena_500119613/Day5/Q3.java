public class question3 {
    public static void main(String[] args) {
        int nums[] = {1, 2, 3, 2, 1};
        System.out.println(isPalindrome(nums,nums.length));
    }
    public static boolean isPalindrome(int nums[],int n){
        n = nums.length;
        int left = 0;
        int right = nums.length - 1;
        
        while( left < right ){
            
            if(nums[left] == nums[right])
            return true;

            left++;
            right--;
        }
        return false;

    }
}
