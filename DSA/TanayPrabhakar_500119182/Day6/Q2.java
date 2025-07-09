public class question2 {
    public static void main(String[] args) {
        int num[] = {1, 2, 2, 4};
        System.out.println(isIncreasing(num));
    }
    public static boolean isIncreasing(int nums[]){
        int n = nums.length;
        for(int i = 0 ;i < n -1 ; i++ ){
            if(nums[i] >= nums[i+1]){
                return false;
            }
        }
        return true;
    }
}
