import java.util.*;
class Day5Question1 
{
    public static void main(String args[])
    {
        int nums[] = {4,1,2,1,2};
        int n = nums.length, i;

        int max = Arrays.stream(nums).max().getAsInt();
        int freq[] = new int[max+1]; 
        for(i=0; i<n; i++)
        {
            freq[nums[i]]++;
        }

        int unum = -1;
        for(i=0; i<n; i++)
        {
            if(freq[nums[i]] < 2)
            {
                unum = nums[i];
                break;
            }
        }
        if(unum != -1)
        System.out.println("The element that appears only once in the array is " + unum);
        else
        System.out.println("There is no unique element");
    }
}
