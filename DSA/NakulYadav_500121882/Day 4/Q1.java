public class Q1 {
    public static void main(String[] args) {
        int nums[] = {-3, -1, -5, -2};
        System.out.println(minEl(nums, nums.length));
    }
    public static int minEl(int nums[], int n){
        int min = Integer.MAX_VALUE;
        for(int i = 0; i < n; i++){
            if(nums[i] < min){
                min = nums[i];
            }
        }
        return min;
    }
}

