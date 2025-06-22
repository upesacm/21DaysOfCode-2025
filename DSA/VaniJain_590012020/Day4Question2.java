import java.util.*;
public class Rotate
{
    public static void main(String[] args) 
    {
        Scanner scr = new Scanner(System.in);
        
        System.out.println("Enter the number of elements in the array:");
        int n = scr.nextInt();
        int[] array = new int[n];
        System.out.println("Enter the elements into the array:");
        for (int i = 0; i < n; i++) 
        {
            array[i] = scr.nextInt();
        }
        System.out.println("Enter the number of steps the array is to move to the right:");
        int k = scr.nextInt();
        if (k < n && k >= 0) 
        {
            int[] shift = new int[k];
            for (int i = 0; i < k; i++) 
            {
                shift[i] = array[n - k + i];
            }
            for (int i = n - 1; i >= k; i--) 
            {
                array[i] = array[i - k];
            }
            for (int i = 0; i < k; i++) 
            {
              array[i] = shift[i];
            }

            System.out.println("Array after right rotation:");
            for (int val : array) 
            {
                System.out.print(val + " ");
            }
        } 
        else 
        {
          System.out.println(k + " is greater than or equal to the size of the array or negative.");
        }
    }
}
