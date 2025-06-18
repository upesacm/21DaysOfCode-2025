import java.util.Scanner;
public class SecondLargest
{
    public static int findSecondLargest(int[] nums, int n) 
    {
        int first = nums[0];
        int second = -1;
        for (int i = 1; i < n; i++) 
        {
            if (nums[i] > first) 
            {
                first = nums[i];
            }
        }
        for (int i = 0; i < n; i++) 
        {
            if (nums[i] != first)
            {
                if (!found || nums[i] > second)
                {
                    second = nums[i];
                    found = true;
                }
            }
        }

        return found ? second : -1;
    }

    public static void main(String[] args) 
{
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        int n = sc.nextInt();
        if (n < 2) 
        {
            System.out.println("Second largest element doesn't exist");
            return;
        } 
        int[] nums = new int[n];
        System.out.println("Enter " + n + " integers:");
        for (int i = 0; i < n; i++)  
`       {
            nums[i] = sc.nextInt();
        }

        int result = findSecondLargest(nums, n);
        if (result == -1)
            System.out.println("Second largest element doesn't exist");
        else
            System.out.println("Second largest unique element: " + result);
    }
}
