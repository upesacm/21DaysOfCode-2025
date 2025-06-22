import java.util.*;
class Day6Question3 
{
  public static void main(String args[])
  {
    int nums[] = {1,2,2,3,4,1,2,3,4,5};
    int n = nums.length;
    int i, c=1;
    for(i=0; i<n-1; i++)
    {
        if(nums[i+1] == nums[i]+1)
        {
            c++;
        }
        else
        {
            c=1;
        }
    }
    System.out.println("Length of the longest contiguous subarray with consecutive increasing elements: " +c);
  }  
}


