import java.util.*;
class Day3Question2 
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
        
        int max = Arrays.stream(nums).max().getAsInt();
        int freq[] = new int[max+1];
        for(i=0; i<n; i++)
        {
            freq[nums[i]]++;
        }

        boolean result = false;
        for(i=0; i<n; i++)
        {
            if(freq[nums[i]] > 1)
            {
                result = true;
                break;
            }
        }
        System.out.println(result);
    }
}
