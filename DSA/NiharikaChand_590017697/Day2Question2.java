import java.util.*;
class Day2Question2
{
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

        int first_el = nums[0];
        int last_el = nums[nums.length -1];

        System.out.print("First: "+ first_el + ", " + "Last: " + last_el);
    }
}