// DAY 4 <-----/---> QUE 1

public class Ques1 {
    public static void main(String[] args) {
        int[] nums = {-3, -1, -5, -2};
        int ans = mini(nums);
        System.out.println(ans);
    }
    static int mini(int[] nums){
        int min = Integer.MAX_VALUE;
        for(int num : nums){
            if(num < min){
                min = num;
            }
        }
        return min;
    }
}

// TC -> O(N)
// SC -> O(1)
