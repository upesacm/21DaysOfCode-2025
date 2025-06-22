import java.util.*;
class Day5Question3 
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size of array: ");
        int n = sc.nextInt();
        int nums[] = new int[n];
        int i, j = 0;

        for(i=0; i<n; i++)
        {
            System.out.println("Enter an element: ");
            nums[i] = sc.nextInt();
        }

        //check for palindrome
        boolean result = true;
        for(i=0; i<n ; i++)
        {
            if(nums[i] != nums[n-1-i])
            {
                result = false;
                break;
            }
        }
        System.out.println(result);
    }
}
