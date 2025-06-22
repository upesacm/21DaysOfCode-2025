import java.util.*;
class Day3Question1 
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size of array: ");
        int n = sc.nextInt();
        int nums[] = new int[n];
        System.out.println("Enter value of k: ");
        int k = sc.nextInt();
        int i, sum=0;
        for(i=0; i<n; i++)
        {
            System.out.println("Enter an element: ");
            nums[i] = sc.nextInt();
        }

        int max = Arrays.stream(nums).max().getAsInt();
        int freq[] = new int[max+1]; // max+1 includes max index as well
        for(i=0; i<n; i++)
        {
            freq[nums[i]]++;
        }

        for(i=0; i<n; i++)
        {
            if(freq[nums[i]] == k)
            sum += nums[i];
            freq[nums[i]] = 0;  // this ensures that double counting is not done while calculating the sum
        }

        System.out.println("Sum = " + sum);
    }
}
