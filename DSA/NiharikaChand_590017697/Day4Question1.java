import java.util.*;
class Day4Question1 
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size: ");
        int n = sc.nextInt();
        int nums[] = new int[n];
        int i;
        for(i=0; i<n; i++)
        {
            System.out.println("Enter an element: ");
            nums[i] = sc.nextInt();
        }

        int min = Integer.MAX_VALUE;
        for(i=0; i<n; i++)
        {
            if(nums[i] < min)
            min = nums[i];
        }
        System.out.println("Minimum element is: " + min);
    }
}
