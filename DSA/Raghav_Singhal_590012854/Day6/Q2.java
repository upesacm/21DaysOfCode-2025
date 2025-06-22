public class Q2
{
    public static void main(String args[])
    {
        int nums[]={1,2,3,4};
        System.out.println(isIncresing(nums));
    }
    public static boolean isIncresing(int nums[])
    {
        for (int i = 0; i < nums.length-1; i++) 
        {
            if(nums[i]>nums[i+1])
            return false;
        }
        return true;
    } 
}