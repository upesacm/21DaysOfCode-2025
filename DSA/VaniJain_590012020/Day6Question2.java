mport java.util.*;
public class IncreasingArray 
{
    public static boolean isStrictlyIncreasing(int[] nums) 
    {
        for (int i=1; i<nums.length; i++) 
        {
            if (nums[i]<=nums[i-1]) 
            {
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) 
    {
        Scanner scr=new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        int n = scr.nextInt();
        int[] nums = new int[n];
        System.out.println("Enter " + n + " integers:");
        for (int i=0; i<n; i++) 
        {
            nums[i]=scr.nextInt();
        }
        boolean x=isStrictlyIncreasing(nums);
        System.out.println("Is the array strictly increasing? " + x);
    }
}
