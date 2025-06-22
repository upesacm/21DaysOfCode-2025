import java.util.*;
public class MaxConsecutiveSequence 
{
    public static int maxConsec(int[] arr) 
    {
        if (arr.length == 0) return 0;
        int max = 1;
        int current = 1;
        for (int i = 1; i < arr.length; i++) 
        {
            if (arr[i] == arr[i-1]+1) 
            {
                current++;
                if (current>max) 
                {
                    max=current;
                }
            } 
            else 
            {
                current=1;
            }
        }
        return max;
    }
    public static void main(String[] args) 
    {
        Scanner scr = new Scanner(System.in);
        System.out.println("Enter number of elements:");
        int n = scr.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter elements:");
        for (int i=0; i<n; i++) 
        {
            arr[i] = scr.nextInt();
        }
        System.out.println("Length of longest consecutive increasing subsequence: " + maxConsec(arr));
    }
}
