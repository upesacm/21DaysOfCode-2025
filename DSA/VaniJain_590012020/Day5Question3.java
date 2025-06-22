import java.util.*;
public class Day5Question3 
{
    public static void main(String[] args) 
    {
        System.out.println("Enter the number of elements in the array:");
        Scanner scr = new Scanner(System.in);
        int n = scr.nextInt();
        int[] array = new int[n];
        int i, j;
        System.out.println("Enter the elements into the array:");
        for (i = 0; i < n; i++) 
        {
            array[i] = scr.nextInt();
        }
        boolean flag = false;
        for (i = 0, j = n - 1; i <= j; i++, j--)
        {
            if (array[i] != array[j]) 
            {
                flag = true;
                break;
            }
        }

        if (flag)
            System.out.println("The Array is not a Palindrome");
        else
            System.out.println("The Array is a Palindrome");
    }
}
