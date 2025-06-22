import java.util.*;
class Day1Question2
{
    public static void main(String args[]) 
    {
        Scanner sc = new Scanner(System.in);
        int arr [] = {5,3,6,2,2,4};
        int n = arr.length;
        int i;
        int freq[] = new int[n];
        for (i = 0; i < n; i++) 
        {
            freq[arr[i]-1]++;
        }

        // Find missing and repeated numbers
        int m= -1, r = -1;
        for (i = 0; i < n; i++) 
        {
            if (freq[i] == 0) 
            {
                m = i+1;
            } 
            else if (freq[i] > 1) 
            {
                r = i+1; 
            }
        }

        System.out.println("Missing element: " + m);
        System.out.println("Repeated element: " + r);
    }
}
