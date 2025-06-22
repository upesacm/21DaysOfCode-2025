import java.util.*;
class Day3Question3 
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size of array: ");
        int n = sc.nextInt();
        int nums[] = new int[n];
        int i;
        for(i=0; i<n; i++)
        {
            System.out.println("Enter an element: ");
            nums[i] = sc.nextInt();
        } 

        int max = Integer.MIN_VALUE, p = -1;
        for(i=0; i<n; i++)
        {
            if(nums[i] > max)
            {
                max = nums[i];
                p = i;
            }
        }
        int secMax = Integer.MIN_VALUE;
        boolean result = false;
        for(i=0; i<n; i++)
        {
            if(i != p && nums[i] != max) 
            {
                if(nums[i] > secMax)
                {
                    secMax = nums[i];
                    result = true;
                }
            }
        }
        if(result == false)
        System.out.println("-1");
        else
        System.out.println("Second largest element = " + secMax);
    }
}
