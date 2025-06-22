public class Day_4_Question_3{
    public static void main(String[] args) {
        int[] nums= {1,2,2,3,2,-5};
        int res= removeele(nums, 2);
        System.out.println(res);
    }
    static int removeele(int[] nums, int val){
    int j = 0; 
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != val) {
                nums[j] = nums[i];
                j++;
            }
        }
        return j; 
    }
}
