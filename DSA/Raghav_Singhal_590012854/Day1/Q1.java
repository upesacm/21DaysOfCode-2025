import java.util.*;
public class Q1
{
    public static int[] replace(int[] arr)
    {
        for (int i = 0; i < arr.length; i++)
            if (arr[i] < 0) arr[i] = 0;
        return arr;
    }
    public static void main(String[] args)
    {
        int arr[] = {-1, 2, -3, 4, 5};
        int newArr[]=replace(arr);
        System.out.println(Arrays.toString(newArr));
    }
}