public class Q2 {
    public static void main(String args[])
    {
        int nums[] = {9, 6, 4, 2, 3, 5, 7, 0, 1};
        System.out.println(missing(nums));
    }
    public static Integer missing(int [] nums)
    {
        int miss,expectedSum=0,actualSum=0;
        for (int i = 1; i < nums.length+1; i++) {
            expectedSum+=i;
            actualSum+=nums[i-1];
        }
        miss=expectedSum-actualSum;
        return miss;
    }
}