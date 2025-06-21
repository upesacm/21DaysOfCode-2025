// DAY 6 <-----/---> QUE 1

public class Ques1 {
    public static void main(String[] args) {
        int[] nums = {1, 3, 4, 2, 2};
        int ans = findDupli(nums);
        System.out.println(ans);
    }
    // Floyd's Cycle Detection lagegi
    static int findDupli(int[] nums) {
        int slow = nums[0];
        int fast = nums[0];

        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while(slow != fast);

        fast = nums[0];
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;

        // Tc = o(n) 
        // Sc = o(1)
    }
}
