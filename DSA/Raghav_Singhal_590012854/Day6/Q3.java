public class Q3
{
    public static void main(String arge[])
    {
        int nums[] = {1, 2, 2, 3, 4, 1, 2, 3, 4, 5};
        System.out.println(longCons(nums));
    }
    public static int longCons(int nums[])
    {
        int maxLen = 1, currLen = 1;
        for (int i = 1; i < nums.length; i++)
        {
            if (nums[i] > nums[i - 1])
                currLen++;
            else
                currLen = 1;
            if (currLen > maxLen)
                maxLen = currLen;
        }
        return maxLen;
    }
}