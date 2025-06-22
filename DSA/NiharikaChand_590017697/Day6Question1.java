import java.util.*;
class Day6Question1 
{
   public static int duplicate(int arr[], int s)
   {
    int freq[] = new int[s]; int i;
    for(i=0; i<s; i++)
    {
        freq[arr[i]]++;
        if(freq[arr[i]] > 1)
        return arr[i];
    }
    return -1;
   }

   public static void main(String args[])
   {
    int arr[] = {1,3,4,2,2};
    int size = arr.length;    //n+1
    int result = duplicate(arr, size);
    System.out.println("Duplicate = " + result);

   } 
}
