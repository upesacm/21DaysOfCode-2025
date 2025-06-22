// package DSA.Siddhant_500120573.Day3;

public class Q2 {
    public static void main(String[] args) {
        int[] nums = {1, 2, 3, 4}; 
        boolean hasDuplicate = false;
        for (int i = 0; i < nums.length; i++) {
            for (int j = i + 1; j < nums.length; j++) {
                if (nums[i] == nums[j]) {
                    hasDuplicate = true;
                    break;
                }
            }
            if (hasDuplicate) break;
        }
        System.out.println(hasDuplicate);
    }
}
    

