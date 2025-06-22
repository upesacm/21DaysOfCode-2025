import java.util.*;
public class Q2 {
    public static void main(String args[])
    {
        int arr[]={4, 3, 6, 2, 1, 1};
        System.out.println("Missing: "+func(arr)[0]+" Twice: "+func(arr)[1]);
    }
    public static int[] func(int[] arr)
    {
        int n = arr.length;
        int twice = -1;
        int missing = -1;
        int[] freq = new int[n + 1];
        for (int num : arr)
        {
            freq[num]++;
            if (freq[num] == 2)
                twice = num;
        }
        for (int i = 1; i <= n; i++) {
            if (freq[i] == 0)
                missing = i;
        }
        return new int[]{missing, twice};
    }
}
