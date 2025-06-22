import java.util.*;
class Day1Question1
{
    public static void display(int[] nums, int n)
    {
        int i;
       for(i=0; i<n-1; i++)
        {
            System.out.print(nums[i]+", ");
        } 
        System.out.print(nums[n-1]);
        System.out.println();
    }

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int n, i;
        System.out.println("Enter size of array: ");
        n = sc.nextInt();
        int nums [] = new int[n];

        for(i=0; i<n; i++)
        {
            System.out.println("Enter an element: ");
            nums[i] = sc.nextInt();
        }

        System.out.println("Before modification: ");
        display(nums, n);

        // replacing negative numbers with 0
        for(i=0; i<n; i++)
        {
            if(nums[i] < 0)
            {
                nums[i] = 0;
            }
        }

        System.out.println("After modification: ");
        display(nums, n);
        
    }
}