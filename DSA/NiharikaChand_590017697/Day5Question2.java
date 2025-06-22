import java.util.*;
class Day5Question2 
{
    public static void main(String args[])
    {
        int nums[] = {9, 2, 6, 4, 7, 1, 0, 3, 5};
        int i, n = nums.length;
        int expSum = 0, acSum = 0, m;  //exp = expected, ac = actual, m = missing

        for(i=0; i<=n; i++)
        {
            expSum += i;
        }
        for(i=0; i<n; i++)
        {
            acSum += nums[i];
        }
        m = expSum - acSum;
        System.out.println("missing element: " + m);  
    }
}
