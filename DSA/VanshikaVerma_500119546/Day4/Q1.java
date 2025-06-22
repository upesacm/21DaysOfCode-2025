public class Q1 {
    public static void main(String[] args) {
        int[] nums = {-3, -1, -5, -2};
        int arr = mini(nums);
        System.out.println(arr);
      
    }
    static int mini(int[] nums){
        int min = Integer.MAX_VALUE;
        for(int num : nums){
            if(num < min){
                min = num;
            }}
        return min ;
   
    }
}
