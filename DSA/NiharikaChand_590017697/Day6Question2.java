import java.util.*;
class Day6Question2 
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

        boolean result = true;
        for(i=0; i<n-1; i++)
        {
            if(nums[i] >= nums[i+1])
            {
                result = false;
                break;
            }
        }
        System.out.println(result);
        

    }
}
