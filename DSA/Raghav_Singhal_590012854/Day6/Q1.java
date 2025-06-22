public class Q1
{
    public static void main(String args[])
    {
        int nums[] = {1, 3, 4, 2, 2};
        System.out.println(dup(nums));
    }
    public static int dup(int nums[])
    {
        int dupp,expectedSum=0,actualSum=0;
        for (int i = 0; i < nums.length; i++) {
            expectedSum+=i;
            actualSum+=nums[i];
        }
        dupp=actualSum-expectedSum;
        return dupp;
    }
}