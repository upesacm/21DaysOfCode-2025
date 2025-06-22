// DAY 5 <-----/---> QUE 1

public class Ques1 {
    public static void main(String[] args) {
        int[] nums = {4, 1, 2, 1, 2};
        int ans = uniqueElement(nums);
        System.out.println(ans);

    }

    static int uniqueElement(int[] nums){
        int xor = 0;
        for(int i : nums) {
            xor ^= i;
        }
        return xor;
    }
}
// Time comp. O(N) and Space will be O(1)
