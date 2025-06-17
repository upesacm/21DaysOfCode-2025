import java.util.*;
class Day2Question1
{
    public static void evenSum(int nums[], int n)
    {
        int i, sum=0;
        for(i=0; i<n; i++)
        {
            if(nums[i]%2 == 0)
            sum += nums[i];
        }
        System.out.println("Sum of even numbers: " + sum);
        return;
    }
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int n, i;
        System.out.println("Enter size of array: ");
        n = sc.nextInt();
        int nums[] = new int[n];

        for(i=0; i<n; i++)
        {
            System.out.println("Enter an element: ");
            nums[i] = sc.nextInt();
        }

        evenSum(nums, n);
    }
}