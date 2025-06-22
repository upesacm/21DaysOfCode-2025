import java.util.Scanner;
public class FindDuplicate 
{
    public static int findDuplicate(int[] nums) 
    {
        int s = nums[0];
        int f = nums[0];
        do 
        {
            s= nums[s];
            f= nums[nums[f]];
        } 
        while (s!= f);
        s = nums[0];
        while (s != f) 
        {
            s= nums[s];
            f= nums[f];
        }
        return s;
    }
    public static void main(String[] args) 
    {
        Scanner scr = new Scanner(System.in);
        System.out.print("Enter the value of n (each number should be between 1 and n): ");
        int n = scr.nextInt();
        int[] arr = new int[n + 1];
        System.out.println("Enter " + (n + 1) + " integers between 1 and " + n + ":");
        for (int i = 0; i < n + 1; i++) 
        {
            arr[i] = scr.nextInt();
        }
        int dup = findDuplicate(arr);
        System.out.println("One duplicate number is: " + dup);
    }
